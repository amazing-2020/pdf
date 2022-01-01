myPath=/home/turing/book/long.file.name
echo ${#myPath}
echo $#myPath
count=frogfootman
echo ${count:4:4}
echo ${count:4}
echo ${"hello":2:3}
foo="This string is long."
echo ${foo: -5}
echo ${foo: -5:2}
echo ${foo: -5:-2}
