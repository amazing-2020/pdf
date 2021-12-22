a=10
b=20
if [ $a == $b ]
then
    echo " a is equal to b"
elif [ $a -gt $b ]
then 
    echo "a is bigger than b"
elif [ $a -lt $b ]
then 
    echo "a is smaller than b"
else
    echo "No condition match"
fi
