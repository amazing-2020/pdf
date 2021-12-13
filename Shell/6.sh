var=http://www.aa.com/123.html
echo ${var#*//}
echo ${var##*//}
echo ${var##*/}
echo ${var%/*}
echo ${var%%/*}

echo ${var:0:5}
echo ${var:5}
echo ${var:0-7:3}
echo ${var:0-7}
