activities=( swimming "water skiing" caoneing "winter-waterrafting" surfing )
for act in ${activities[@]}; do
    echo $act
done
echo "*********"
for act in "${activities[@]}"; do
    echo $act
done
echo "********** >"
for act in ${activities[*]}; do
    echo $act
done
echo "---------------->"
for act in "${activities[*]}"; do
    echo $act
done
echo "Activity++            >"
activity=( "${activities[@]}" running )
for act in "${activity[*]}"; do
    echo $act
done