:' for i in {1..17} ; do
    mkdir chapter$i
done

for (( i = 5; i <= 17; i++ )); do
    mv example$i* Exercise$i* chapter$i/
done

arr1=(11 12 13)
for i in {0..2} ; do
   cp -R getinput.h chapter${arr1[i]}/
done
'
