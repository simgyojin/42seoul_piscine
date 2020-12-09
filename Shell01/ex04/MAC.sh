ifconfig -a | grep '^\teth' | awk '{print $2}'
