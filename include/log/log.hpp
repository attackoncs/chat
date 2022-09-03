#ifndef MY_SPDLOG_LOG_HPP
#define MY_SPDLOG_LOG_HPP
#include <iostream>
#include <memory>
#include "spdlog/spdlog.h"
#include "spdlog/async.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include "spdlog/sinks/rotating_file_sink.h"
#include "spdlog/sinks/daily_file_sink.h"
#include "spdlog/sinks/basic_file_sink.h"


class MyLog {

public:
    static MyLog &instance() {
        static MyLog m_instance;
        return m_instance;
    }

    auto get_logger() const {
        return this->logger_;
    }

private:
    MyLog() {
        this->init();
    }

    ~MyLog() {
        spdlog::drop_all(); // 释放所有logger
    }

private:
    void init() {
        std::cout << "log init " << std::endl;
        this->init_file();
        this->init_logger();
        std::cout << "log init success" << std::endl;
    }

    void init_file() {
        this->log_root_path = "../log";
        this->info_file_path = "info.log";
        this->error_file_path = "erro.log";
        this->rotation_h = 5; // 分割时间
        this->rotation_m = 59;
    }

    void init_logger() {

        this->info_sink_ = std::make_shared<spdlog::sinks::daily_file_sink_mt>(
                this->log_root_path + "/" + this->info_file_path, this->rotation_h, this->rotation_m);
        this->error_sink_ = std::make_shared<spdlog::sinks::daily_file_sink_mt>(
                this->log_root_path + "/"+this->error_file_path, this->rotation_h, this->rotation_m);
        this->console_sink_ = std::make_shared<spdlog::sinks::stdout_color_sink_mt>();

        this->info_sink_->set_level(spdlog::level::info); // debug< info< warn< error< critical  日志信息低于设置的级别时, 不予显示
        this->error_sink_->set_level(spdlog::level::err);
        this->console_sink_->set_level(spdlog::level::debug);

        this->sinks_.push_back(this->info_sink_); // info
        this->sinks_.push_back(this->error_sink_); // error
        this->sinks_.push_back(this->console_sink_); // console

        this->logger_ = std::make_shared<spdlog::logger>("log_demo", begin(this->sinks_), end(this->sinks_));
        this->logger_->set_pattern("[%l] [%Y-%m-%d %H:%M:%S,%e] [Process:%P] - %v");
        this->logger_->flush_on(spdlog::level::info); // 设置当触发 info 或更严重的错误时立刻刷新日志到 disk
        spdlog::register_logger(this->logger_); // 注册logger
        spdlog::flush_every(std::chrono::seconds(10)); // 每隔10秒刷新一次日志
    }

private:
    std::shared_ptr <spdlog::logger> logger_;
    std::shared_ptr <spdlog::sinks::daily_file_sink_mt> info_sink_; // info
    std::shared_ptr <spdlog::sinks::daily_file_sink_mt> error_sink_; // error
    std::shared_ptr <spdlog::sinks::stdout_color_sink_mt> console_sink_; // console
    std::vector <spdlog::sink_ptr> sinks_;
    std::string log_root_path;
    std::string error_file_path;
    std::string info_file_path;
    short int rotation_h{};
    short int rotation_m{};

}; // MyLog


#define spdlog MyLog::instance().get_logger()


#endif //MY_SPDLOG_LOG_HPP