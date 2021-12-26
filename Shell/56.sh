echo "Hello world" | grep -e Hello
echo $?
echo "Hello world" | grep -e Bye
echo $?

if echo "Hello world" | grep -e Hello
then
    echo true
else
    echo false
fi

if echo "Hello world" | grep -e Bye
then
    echo true
else
    echo false
fi


function demoFun1(){
    return 0
}

if demoFun1
then
    echo true
else
    echo false
fi

function demoFun2(){
    return 12
}

if demoFun2
then
    echo true
else
    echo false
fi
#! 0 is true 1 is false
