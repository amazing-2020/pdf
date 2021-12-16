echo "###############use eval function#################"
echo "Use referance"
echo "https://www.runoob.com/linux/linux-comm-eval.html"
eval a1=bill
eval a2=nico
eval a3=yama

for i in 1 2 3; do
    eval echo "\$a$i"
done
