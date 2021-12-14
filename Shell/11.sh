echo "--\$* show--"
for i in "$*"; do
    echo $i
done
echo "--\$@ show--"
for i in "$@"; do
    echo $i
done
