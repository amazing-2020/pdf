echo "--------with double quote-------------"
echo "$1"
echo "$2"
echo "$3"
my_procedure() {
    echo "$1"
    echo "$2"
    echo "$3"
}
my_procedure "$@"

echo "--------without double quote-------------"
echo $1
echo $2
echo $3
my_procedure() {
    echo $1
    echo $2
    echo $3
}
my_procedure "$@"
echo "-------------without double quote by passing arguments-------------------"
my_procedure $@
