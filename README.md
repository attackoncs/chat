# quick start

1. 依赖：依赖protobuf、muduo、pthread、zookeeper、hiredis、mysql，以及自己实现的rpc，参考[博客](https://blog.csdn.net/woodslay/article/details/126352090?spm=1001.2014.3001.5501)，需自行安装配置

2. 一键编译：直接运行主目录下的`autobuild.sh`可自动调用每个微服务目录下的自动编译命令`autobuild.sh`，会自动编译每个微服务

# 说明
V1.0第一版的说明请参考[博客](https://blog.csdn.net/woodslay/article/details/126295477?spm=1001.2014.3001.5501)，主要使用nginx集群实现

V2.0第二版的说明请参考博客，主要改进如下：

1.  序列化格式由json改为protobuf
2. 使用配置注册中心zookeeper
3. 使用数据库连接池
4. 原来的nginx集群改为分布式集群
5. 使用自己实现的rpc框架
6. 其他业务的优化

# todo

+ 更新详细的第二版的博客与文档

+ 参考其他rpc，如brpc、grpc等实现更复杂的rpc功能

   

   

   