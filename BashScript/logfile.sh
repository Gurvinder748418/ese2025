Gur="/home/gurvinder/logfile/subfile.sh"
while true; do
today="$( date +"%s" )"
number=0#
fname=$today.txt
printf -v fname -- 'log.%s-%02d.txt' "$today" "$(( ++number ))"
$Gur >> $fname
sleep 10
done

