if test -e /tmp/foo.txt ; then
    echo "file not found"
fi

if [ -e /tmp/foo.txt ] ; then
    echo "file not found"
fi

if [[ -e /tmp/foo.txt ]] ; then
    echo "file not found"
fi
