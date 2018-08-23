ldapsearch -QLLL "(uid=z*)" cn | grep cn: | sort -brf | cut -c 5-
