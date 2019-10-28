while true; do
#
today="$( date +"%s" )"
number=0
fname=$today.txt
printf -v fname -- 'log.%s-%02d.txt' "$today" "$(( ++number ))"
1 >> $fname
sleep 10
done

