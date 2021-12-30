ls 1*.sh
echo 1*
ls *.csv
shopt extglob
shopt -s extglob
shopt extglob
ls 1?(.)sh
ls 1?(2).sh
ls 71+(.txt|.sh)
ls 71+(.txt)
ls 1!(2|4|6|8).sh
ls 1?(2)
