i=0
while echo 'ECHO'
do 
    echo "Hi, while looping" 
    i=$((i + 1))
    if [ $i -ge 10 ]
    then
        echo $i 
        break
    fi
done

while true; false; do echo "Hi, looping..."; done
