if [ $(id -u) != "0" ]; then
    echo "Root user can excute this script"
    exit 1
fi
