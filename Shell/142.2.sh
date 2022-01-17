number=1

set -x
if [ $number="1" ]; then
    echo "Number equal to 1"
else
    echo "Number does not equal to 1"
fi
set +x

echo "End"