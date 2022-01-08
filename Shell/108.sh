FILE=~/.bashrc
if [ -e "$FILE" ]; then
    if [ -f "$FILE" ]; then
        echo "$FILE is a regular file"
    fi
    if [ -d "$FILE" ]; then
        echo "$FILE is a dictionary"
    fi    
    if [ -r "$FILE" ]; then
        echo "$FILE is a readable."
    fi    
    if [ -w "$FILE" ]; then
        echo "$FILE is a writable"
    fi
    if [ -x "$FILE" ]; then
        echo "$FILE is a executable"
    fi
else
    echo "$FILE not exist"
    exit 1
fi
