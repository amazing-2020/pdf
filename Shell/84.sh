echo $((3 > 2))
echo $(( (3>2) || (4 <= 1) ))
a=0
echo $((a<1 ? 1:0 ))
echo $((a>1 ? 1:0 ))
echo $((a=1))
echo $a
foo=5
echo $((foo*=2))
a=0
echo $(( a<1 ? (a+=1):(a-=1) ))
echo $((foo=1+2, 3*4))
echo $foo
echo "------------*-----------"
expr 3 + 2
foo=3
expr $foo + 2
expr 3.5+2
let x=2+3
echo $x
