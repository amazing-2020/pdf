foo=(a b c d e f)
echo ${foo[@]}
unset foo[2]
echo ${foo[@]}
foo[1]=''
echo ${foo[@]}
echo ${#foo[*]}
echo ${!foo[*]}
unset foo
echo ${foo[*]}
