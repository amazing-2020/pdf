echo -n "Enter a number or a character > "
read character
case $character in
    [[:lower:]] | [[:upper:]] ) echo "Enter character $character"
                                ;;
    [0-9]) echo "Enter number $character"
                                ;;
    *) echo "Errors" ;;
esac
