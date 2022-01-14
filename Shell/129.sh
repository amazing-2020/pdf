for (( i=0; i<5; i=i+1 )); do
    echo $i
done

for ((;;))
do
    read var
    if [ "$var" = "." ]; then
        break
    fi
done
