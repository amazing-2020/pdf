cd $some_dictionary
if [ "$?" = "0" ]; then
    rm *
else
    echo "Can't change dictionary" 1>&2
    exit 1
fi
