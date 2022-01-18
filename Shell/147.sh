function func1() {
    echo "func1: FUNCNAME0 is ${FUNCNAME[0]}"
    echo "func1: FUNCNAME1 is ${FUNCNAME[1]}"
    echo "func1: FUNCNAME2 is ${FUNCNAME[2]}"
    func2
}
function func2() {
    echo "func2: FUNCNAME0 is ${FUNCNAME[0]}"
    echo "func2: FUNCNAME1 is ${FUNCNAME[1]}"
    echo "func2: FUNCNAME2 is ${FUNCNAME[2]}"
}

func1

