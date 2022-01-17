foo | echo a
echo bar
echo "----->"
set -eo pipefail
foo | echo a
echo bar