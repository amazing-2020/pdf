for number in 1 2 3 4 5 6
do
    echo "number is $number"
    if [ "$number" = "3" ]
    then
        break
    fi
done

while read -p "What file do you want to select > " filename
do
    if [ ! -e "$filename" ]; then
        echo "The file does not exist"
        continue
    fi
    echo "You entered a valid file"
    echo "Want to end?"
    read -p "Enter Y or N > " choice
    if [ "$choice" = "Y" ] || [ "$choice" = "y" ]; then
        break
    fi
done
