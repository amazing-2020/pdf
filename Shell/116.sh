dir_name=123
[[ -d "$dir_name" ]] && cd "$dir_name" && rm *

if [[ ! -d "$dir_name" ]]; then
    echo "No such dictionary: '$dir_name' " >&2
    exit 1
fi

if ! cd "$dir_name"; then
    echo "Cannot cd to '$dir_name'"
    exit 1
fi

if ! rm *; then
    echo "File deletion failed. check results" >&2
    exit 1
fi
