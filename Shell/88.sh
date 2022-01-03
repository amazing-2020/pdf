while getopts 'lha': OPTION; do
    case "$OPTION" in
        l)
            echo "linuxconfig"
            ;;
        h)
            echo "h stands for h"
            ;;
        a)
            avalue="$OPTION"
            echo "The value provides is $OPTARG"
            ;;
        ?)
            echo "script usage: $(basename $0) [-1] [-h] [-a somevalue]" >&2
            exit 1
            ;;
        esac
    done
    shift "$(($OPTIND - 1))"
    # https://wangdoc.com/bash/script.html#getopts-%E5%91%BD%E4%BB%A4
    