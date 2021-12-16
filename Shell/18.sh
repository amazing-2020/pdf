echo "###########################"
echo "Command referance"
echo "http://www.runoob.com/linux/linux-comm-expr.html"
:<<!
Define an array based on a sentence entered by the user
And traverse the array elements
!
echo "Enter a string(Sepratated by spaces):"
read str
i=0
for word in $str; do
    i=`expr $i + 1`
    eval a$i="$word"
    eval echo "the $i\th element in the array: \$a$i"
done
