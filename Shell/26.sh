#! /bin/bash                                          
file=~/ffmpeg/configure
echo $file
if [ -r file ]
then 
    echo "File readable"
else                                                                                                                                              
    echo "File is not readable"
fi

if [ -w file ]
then 
    echo "File can be written"
else
    echo "File can not be written"
fi

file=./26-test.sh
echo $file
bash $file
if [ -x file ]
then
    echo "File excutable"
else
    echo "File is not excutable"
fi

if [ -f file ]
then
    echo "The file is a normal file"
else
    echo "The file is a special file"
fi

if [ -s file ]
then 
    echo "The file is not empty"
else
    echo "The file is empty"
fi

if [ -e file ]
then 
    echo "The file exist"
else
    echo "The file not exist"
fi

file=/home
echo $file
if [ -d file ]
then
    echo "The file is a dictionary"
else
    echo "The file is not a dictionary"
fi

:<<!
A lot of errors!
!