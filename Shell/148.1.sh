function func1() {
    echo "func1: BASH_SOURCE0 is ${BASH_SOURCE[0]}"
    echo "func1: BASH_SOURCE1 is ${BASH_SOURCE[1]}"
    echo "func1: BASH_SOURCE2 is ${BASH_SOURCE[2]}"
    func2
}
