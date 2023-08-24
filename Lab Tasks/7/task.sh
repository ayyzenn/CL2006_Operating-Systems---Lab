#!/bin/bash

touch file.c

cat taskfile.c > file.c

echo "Enter your choice: "
read choice

if [ $choice -eq 1 ]
then 
gcc file.c -o file.out
else if [ $choice -eq 2 ]
then
gcc file.c -o file.out && ./file.out
else if [ $choice -eq 3 ]
then
cat taskfile.c
else
ls
fi
fi
fi
