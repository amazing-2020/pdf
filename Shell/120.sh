read -n 1 -p "Type a character > "
echo
case $REPLY in
    [[:upper:]]) echo "'$REPLY' is upper case. " ;;&
    [[:lower:]]) echo "'$REPLY' is lower case. " ;;&
    [[:alpha:]]) echo "'$REPLY' is alphabetic case. " ;;&
    [[:digit:]]) echo "'$REPLY' is digit. " ;;&
    [[:graph:]]) echo "'$REPLY' is visible character. " ;;&
    [[:punct:]]) echo "'$REPLY' is punctuation symbol. " ;;&
    [[:space:]]) echo "'$REPLY' is white space. " ;;&
    [[:xdigit:]]) echo "'$REPLY' is hexadecimal digit. " ;;&
esac
