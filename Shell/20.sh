a=1
b=2
c=100
d=99
array=($a $b $c $d)
echo ${array[*]}
array[20]=verilog

echo -e "use while && let++ print every element"
i=0
while [ $i -lt ${#array[@]} ]
do 
    echo ${array[$i]}
    let i++
done
echo "###################"
