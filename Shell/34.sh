cd /bin
if test -e ./notFile -o -e ./bash
then
    echo 'At least a file'
else
    echo 'Two file both not exist'
fi
