while : 
do
    echo -n "Enter a number between 1 and 5: "
    read aNum
    case $aNum in
        1|2|3|4|5) echo "You entered $aNum"
        ;;
        *) echo "Errors, your number is not between 1 and 5! end"
            break
        ;;
    esac
done
