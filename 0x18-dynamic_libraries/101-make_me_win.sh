#!/bin/bash
numbers=($(shuf -i 1-75 -n 5; shuf -i 1-15 -n 1))
echo "${numbers[@]}"
