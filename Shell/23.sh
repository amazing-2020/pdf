a=10
b=20

if [ $a != $b ]
then
    echo "$a != $b : a is not equal to b"
else
    echo "$a != $b : a is equal to b"
fi

if [ $a -lt 100 -a $b -gt 15 ]
then
    echo "$a is smaller than 100 and $b is bigger than 15 : return true"
else
    echo "$a is smaller than 100 and $b is bigger than 15 : return false"
fi

if [ $a -lt 100 -o $b -gt 100 ]
then
    echo "$a is smaller than 100 or $b is bigger than 100 : return true"
else
    echo "$a is smaller than 100 or $b is bigger than 100 : return false"
fi 

if [ $a -lt 5 -o $b -gt 100 ]
then
    echo "$a is smaller than 5 or $b is bigger than 100 : return true"
else
    echo "$a is smaller than 5 or $b is bigger than 100 : return true"
fi
