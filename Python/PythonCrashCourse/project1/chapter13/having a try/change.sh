#/bin/bash
for files in `ls | grep '.py'`
do
  newfile=`echo $files | sed 's/exerx/exerc/g'`
  echo $newfile
  mv $files $newfile
done