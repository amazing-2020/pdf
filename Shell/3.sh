myUrl="https://www.google.com"
unset myUrl
echo $myUrl

your_name="runoob"
str="Hello, I know you are \"$your_name\"! \n"
echo -e $str


greeting="hello, "$your_name" !"
greeting_1="hello, ${your_name} !"
echo $greeting  $greeting_1

greeting_2='hello, '$your_name' !'
greeting_3='hello, ${your_name} !'
echo $greeting_2 $greeting_3
