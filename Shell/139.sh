arr=(afd dsfd ds sdfd fsdfsdfsdf fsd)
echo ${#arr[*]}
echo ${#arr[4]}
arr_A=([9]=a [5]=b [6]=c)
echo ${!arr_A[@]}
echo ${!arr_A[*]}

