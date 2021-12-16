arr=(1 2 3 4 5 6 7 8 9 10)
for a in ${arr[*]}
do 
    echo $a
done

word="aaa bbb ccc"
array=(${word// /})
echo ${array[${#array[*]}-1]}
echo ${#array[*]}
echo ${#arr[*]}
for word in ${word}; do
    echo ${word}
done
