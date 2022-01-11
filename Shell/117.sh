echo -n "Enter a number between 1 and 3: > "
read character
case $character in
    1) echo 1
    ;;
    2) echo 2
    ;;
    3) echo 3
    ;;
    *) echo Errors!!!
esac
