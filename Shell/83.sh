echo $(("hello" + 2))
echo $(("hello" * 2))
foo=hello
echo $(( foo + 2))
hello=3
echo $(( foo + 2))
echo $[2+2]
echo $((0xff))
echo $((2#11111111))
echo $((16>>2))
echo $((16<<2))
# 10001 101
echo $((17&3))
echo $((17|3))
echo $((17^3))
