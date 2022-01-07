#!/bin/bash
input="./1.sh"
while IFS= read -r line
do
    echo "$line"
done < "$input"
