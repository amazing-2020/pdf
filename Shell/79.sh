myPath=/home/cam/book/long.file.name
echo ${myPath%.*}
echo ${myPath%%.*}
echo ${myPath%/*}
file=foo.png
echo ${file%.png}.jpg
phone="555-456-1414"
echo ${phone%-*}
echo ${phone%%-*}
foo=JPG.JPG
echo ${foo/%JPG/jpg}
