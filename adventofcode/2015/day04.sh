#!/usr/bin/env bash

# Note: too slow

for (( i=1;i<10000; i++ ))
do
    # echo "abcdef$i"
    echo -n "abcdef$i" | md5 | grep -E '^0000' && break
done
