my_array=(a b "c","d" abc)
echo "----for loop traverse output the array"
for i in ${my_array[@]};
do
    echo $i
done

echo "-----while loop output ,using let i++ self add"
j=0
while [ $j -lt ${#my_array[@]} ]
do
    echo ${my_array[$j]}
    let j++
done

echo "-----while loop output ,using let i++ self add"
n=0
while [ $n -lt ${#my_array[@]} ]
do
    echo ${my_array[$n]}
    let "n++"
done

echo "-----while loop output ,using a=a\$[\$a+1] self add"
a=0
while [ $a -lt ${#my_array[@]} ]
do
    echo ${my_array[$a]}
    a=$[$a+1]
done
