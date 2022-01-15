function alice {
    echo "It's $0"
    echo "alice: $@"
    echo "$0: $1 $2 $3 $4"
    echo "$# parameters"
}

function log_message {
    echo "[`date '+ %F %T'`]: $@"
    echo "$# parameters"
}

function fun_retuen_type {
    return 10
}

function fun_retuen_type2 {
    return
}

alice in wonderful
log_message "This is sample log message"
fun_retuen_type
echo "Value returned by function: $?"
fun_retuen_type2
echo "Value returned by function: $?"
