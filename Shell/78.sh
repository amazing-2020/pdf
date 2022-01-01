myPath=/home/cam/book/long.file.name
echo ${myPath#/*/}
echo ${myPath##/*/}
path=/home/cam/book/long.file.name
echo ${path##*/}
phone="555-456-1414"
echo ${phone#*-}
echo ${phone##*-}
echo ${phone#444}
foo=JPG.JPG
echo ${foo/#JPG/jpg}
