filename=124.sh
filename_copy=124.sh.copy
until cp $filename $filename_copy; do 
    echo "Attemp to copy failed. waiting..."
    sleep 5
done
