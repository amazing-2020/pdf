function demoFun1(){
    echo "The first function"
    return `expr 1 + 1`
}

demoFun1
echo $?

function demoFun2(){
    echo "The second function"
    return expr 1 + 1
}

demoFun2
echo $?
demoFun1
echo Enter_a_command_\!
echo $?
