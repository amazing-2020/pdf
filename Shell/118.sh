OS=$(uname -s)

case "$OS" in
    FreeBSD) echo "This is FreeBSD" ;;
    Darwin) echo "This is Darwin" ;;
    AIX) echo "This is AIx" ;;
    Minix) echo "This is Minix" ;;
    Linux) echo "This is Linux" ;;
    *) echo "Failed to identify this OS" ;;
esac
