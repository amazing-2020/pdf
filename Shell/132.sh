echo "Which operating System do you l Windowsioke"
select os in Ubuntu LinuxMint Windows10 Windows8 Windowsxp
do
    case $os in 
        "Ubuntu"|"LinuxMint")
            echo "I also use linux"
        ;;
        "Windows8"|"Windows10"|"Windowsxp")
            echo "Why don'y you try linux?"
        ;;
        *)
            echo "Invalid entry"
            break
        ;;
    esac
done
