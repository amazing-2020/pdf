function demoFun1(){
    echo "This is the first shell function!"
    return ` expr 1 + 1`
}

demoFun1
echo $?
echo $?
