ifconfig | grep ether | sed "s/	//g" | sed "s/ //g" | sed "s/ether//g"
