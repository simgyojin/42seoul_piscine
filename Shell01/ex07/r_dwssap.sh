cat /etc/passwd | grep '^[^#]' | awk -F ':' 'NR>=2 {print $1}' | rev | sort -r | sed -n "$FT_LINE1, $FT_LINE2 p" | tr -s '\n' ',' | sed -e 's/\,$/\./'
