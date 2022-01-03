echo "$# parameters entered"

while [ "$1" != "" ]; do
    echo "$# parameters left"
    echo "Parameter: $1"
    shift
done
