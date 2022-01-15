foo=1
fn() {
    foo=2
}
fn
echo $foo


fn_2() {
    local foo
    foo=3
    echo "foo=$foo"
}

fn_2
echo $foo