#! /bin/bash

for dir in *; do
    if [ -d $dir ]; then
        cleaned=$(echo $dir  | tr -d "_")
        git mv $dir $cleaned
    fi
done
