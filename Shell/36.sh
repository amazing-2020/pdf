if [ ! -f "/data/filename" ]; then
    echo "File not exist"
    else
    rm -rf /data/filename
fi

if [ ! -d "/bin/" ]; then
    echo "Folder not exist"
    else
    echo "Folder exist"
fi

