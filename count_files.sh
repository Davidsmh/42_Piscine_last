find . \( -type f -o -type d \) -print | wc -l | sed -e "s/ //g"
