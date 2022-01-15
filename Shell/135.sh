fn() {
    foo=1
    echo "fo: foo=$foo"
}
fn
echo "global: foo = $foo"
