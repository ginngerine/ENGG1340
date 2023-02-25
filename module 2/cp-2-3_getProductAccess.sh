#/!/bin/bash

file=$1

touch ./toBePrinted.txt
 > ./toBePrinted.txt

cat $file | while read line
do
    ip=`cut -f 1 <<< "$line"`
    url=`cut -f 4 <<< "$line"`

    if [[ $url == /products/* ]]
    then echo $ip $url >> ./toBePrinted.txt
    fi

done

sort -u ./toBePrinted.txt # | uniq ./toBePrinted.txt