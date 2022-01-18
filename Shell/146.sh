#! /bin/bash -x
# chmod 755
number=1
if [ $number=1 ]; then
    echo "Number is equal to 1"
    echo "This line is $LINENO"
else
    echo "Number is not equal to 1"
fi
