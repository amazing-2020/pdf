if (( 3>2 ))
then
    echo "true"
fi

if ((1)); then echo "It is true."; fi
if ((0)); then echo "It is true."; else echo "It is false."; fi
if (( foo=5 )); then echo "foo is $foo."; fi
if (( foo=0 )); then echo "It is true."; else echo "It is false."; fi

