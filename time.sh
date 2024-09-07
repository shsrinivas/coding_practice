#!/bin/bash

echo "Hello User!!"
day="This is `date | cut -d " " -f1 ` `date | cut -d " " -f4` in `date | cut -d " " -f2` of year 20`date | cut -d " " -f5 | cut -d ":" -f1`(`date | cut -d " " -f5` `date +%p`) "
echo $day
