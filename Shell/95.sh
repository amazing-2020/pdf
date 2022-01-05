echo -n "Enter some text > "
if read -t 3 response; then
    echo "User has input"
else
    echo "User hasn't input"
fi

TMOUT=3
read response