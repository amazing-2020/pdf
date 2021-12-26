#! /bin/bash
funWithParam(){
    echo "The first parameter $1 !"
    echo "The second parameter $2 !"
    echo "The tenth parameter $10 !"
    echo "The tenth parameter ${10} !"
    echo "The eleven parameter ${11} !"
    echo "There is $# parameter"
    echo "Print all the parameter $* !"
}

funWithParam 1 2 3 4 5 6 7 8 9 34 73
