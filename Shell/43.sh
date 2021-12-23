echo "Enter a number between 1 and 4: "
echo "The number you entered "
read aNum
case $aNum in
    1) echo 'You choose 1'
    ;;
    2) echo 'You choose 2'
    ;;
    3) echo 'You choose 3'
    ;;
    4) echo 'You choose 4'
    ;;
    *) echo "You didn't enter a number between 1 and 4"
    ;;
esac
