#!/bin/bash

set -e

folders=("thirdparty" "ChatService" "FriendService" "GroupService" "LogServer" "OfflineService" "Proxy" "UserService")

a=0
until [ ! $a -lt 8 ]
do
    cd `pwd`/${folders[$a]}
    echo 'change to '`pwd`/${folders[$a]}
    sh autobuild.sh
    cd ..
    a=`expr $a + 1`
done

# if test $[a] -eq 0
# then
#     ldconfig
#     echo 'ldconfig'
# fi