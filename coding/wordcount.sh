File=$1
letter=$2
noletter=0

if [ -e "$File" ]
then
echo "File is present"
else
echo "File is not present"
fi

word_count=$(grep -i -o $letter $File | wc -l)

if [ "$word_count" -ne "$noletter" ]
then
echo "letter found"
echo $word_count
else
echo "NO letter found"
fi
