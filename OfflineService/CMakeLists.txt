cmake_minimum_required(VERSION 3.0)
project(OffLineServide)

# 设置编译选项
set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} -g)

# 设置可执行文件输出路径
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

# 设置头文件搜索路径
include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(${PROJECT_SOURCE_DIR}/auxiliary_process/OfflineServer/include)
include_directories(${PROJECT_SOURCE_DIR}/../thirdparty/SQL_connect_pool/include/)

# 第三方库
LINK_DIRECTORIES(${PROJECT_SOURCE_DIR}/../thirdparty/SQL_connect_pool/lib/)

add_subdirectory(src)
add_subdirectory(auxiliary_process)