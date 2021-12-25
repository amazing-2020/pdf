funWithReturn(){
    echo "This function is add a and b "
    echo "Enter the first number "
    read aNum
    echo "Enter the second number "
    read anotherNum
    echo "The number is $aNum and $anotherNum"
    return $(($aNum+$anotherNum))
}
funWithReturn
echo "The sum is $? !"
