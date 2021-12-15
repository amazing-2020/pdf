my_array=(A B "C" D)
echo "The first element: ${my_array[0]}"
echo "The second element: ${my_array[1]}"
echo "The third element: ${my_array[2]}"
echo "The forth element: ${my_array[3]}"
echo "The hole element: ${my_array[*]}"
echo "The total element: ${my_array[@]}"
echo "The element's length: ${#my_array[*]}"
echo "The element's length: ${#my_array[@]}"
