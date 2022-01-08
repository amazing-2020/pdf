echo -n "Enter a number between 1 and 3: "
read character                          
if [ "$character" = "1" ]; then
    echo 1
elif [ "$character" = "2" ]; then   
    echo 2
elif [ "$character" = "3" ]; then 
    echo 3
else
    echo "This input does not input requirements"
fi
