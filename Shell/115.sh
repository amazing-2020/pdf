filename=$1.sh
word1=$1
word2=$2

if grep $word1 $filename && grep $word2 $filename
then
    echo "$word1 and $word2 are both in $filename"
else
    echo "Not exist"
fi
