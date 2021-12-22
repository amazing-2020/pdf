num1=$[2*3]
num2=$[1+5]
if test $[num1] -eq $[num2]
then
    echo 'Two number is equal'
else
    echo 'Two number is not equal'
fi
