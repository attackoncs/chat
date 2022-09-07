#!/bin/bash

set -e

# 如果没有build目录，创建该目录
if [ ! -d `pwd`/build ]; then
    mkdir `pwd`/build
fi

rm -rf `pwd`/build/*

cd `pwd`/build &&
    cmake .. &&
    make

# 回到项目根目录
cd ..

# 把头文件拷贝到 /usr/include/mymuduo  so库拷贝到 /usr/lib    PATH
if [ ! -d /usr/include/SQL_pool ]; then 
    mkdir /usr/include/SQL_pool
fi

cd `pwd`/SQL_connect_pool/include/SQL_pool

# 拷贝hpp文件
for header in `ls *.hpp`
do
    cp $header /usr/include/SQL_pool
done

cd ../../
cp `pwd`/lib/libPool.so /usr/lib

ldconfig