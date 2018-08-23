cat /etc/passwd | grep -v -e '#' | awk 'NR%2==0' | cut -d ':' -f 1 | rev | sort -ri | sed -n "$FT_LINE1, $FT_LINE2 p" | tr "\n" "," | sed 's/, */, /g' | rev | sed 's/ ,/./1' | rev | tr -d "\n"
