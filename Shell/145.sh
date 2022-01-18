set -Eeuo pipefail
trap "echo ERR trap fired" ERR
myFunc() {
    foo
}
myFunc