path=/home/cam/foo/foo.name
echo ${path/foo/bar}
echo ${path//foo/bar}
echo -e ${PATH//:/'\n'}
phone="555-456-1414"
echo ${phone/5?4/-}
echo ${path/.*/}
echo ${path/#\//123}
echo ${path/%name/123}
foo=heLLo
echo ${foo^^}
echo ${foo,,}
