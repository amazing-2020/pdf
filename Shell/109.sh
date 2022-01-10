ANSWER=maybe

if [ -z "$ANSWER" ]; then
    echo "There is no answer." >&2
    exit 1
fi
if [ "$ANSWER" = "yes" ]; then
    echo "The answer is yes"
elif [ "$ANSWER" = "no" ]; then
    echo "The answer is no"
elif [ "$ANSWER" = "maybe" ]; then
    echo "The answer is maybe"
else
    echo "The answer is unknown"
fi
