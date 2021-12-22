wrong=``
echo $wrong
if test -z '$wrong'; then
    echo "The result is empty"
else
    echo "The result is not empty"
fi

if test -z "$wrong"; then
    echo "The result is empty"
else
    echo "The result is not empty"
fi
