cat << _EOF_
<html>
<head>
    <title>
    The title of your page
    </title>
</head>

<body>
    Your page content goes here.
</body>
</html>
_EOF_
echo "-----------*--------------"
foo='hello world'
cat << _example_
$foo
"$foo"
'$foo'
_example_
echo "--------*-----------"
cat << '_example_'
$foo
"$foo"
'$foo'
_example_
echo "------*---------"
cat <<< "hi"
echo 'hi there' | cat
