var=`expr 2 + 2`
echo "The sum of two number: $var"

a=10
b=20
val=`expr $a + $b`
echo "a + b : $val"

val=`expr $a \* $b`
echo "a * b : $val"

val=`expr $b / $a`
echo "a / b : $val"

val=`expr $b % $a`
echo "a % b : $val"

if [ $a == $b ]
then
    echo "a is equal not b"
fi
if [ $a != $b ]
then
    echo "a is not equal to equal "
fi
