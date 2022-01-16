foo=(a b c d e f g)
echo ${foo[0]}
echo $foo[0]
echo ${foo[@]}
fooo=([2]=c [0]=a [1]=b [3]=d e) # d的序号由前一个决定，如果有重合，则留下d
for i in "${fooo[@]}"; do
    echo $i
done
