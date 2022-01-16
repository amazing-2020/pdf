food=( apple banana cucumbers dates eggs fajitas grapes)
echo ${food[@]:1:1}
echo ${food[@]:1:3}
echo ${food[@]:4}
echo "${food[*]}"
food+=( watermelon peers )
echo "${food[*]}"
