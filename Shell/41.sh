int=1
while(( $int <= 5 ))
do
    echo $int
    let "int++"
done

echo "Press <CTRL-D> exit"
echo -n "Enter the favorite site"
while read FILM
do
    echo "Yes !$FILM is a good site"
done
