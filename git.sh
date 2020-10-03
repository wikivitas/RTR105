#!/bin/bash
str AW="D"

clear
echo "Hi! I'm a Git commit master!"
sleep 1;
echo " ";echo "What do you want?"
while [ "$AW" != C ]; do
	echo "(D - download repository, U - upload repository, C - cancel, sorry and exit)"
	i=0;read -p "Your answer: " AW
	sleep 1

	if [ "$AW" = D ]; then
		read -p "Enter your Git repository link: https://github.com/" LNK
		LNK1="https://github.com/"$LNK
		git clone $LNK1
		i=1
	fi

	if [ "$AW" = U ]; then
		read -p "Enter your e-mail: " EM
		git config --global user.email $EM
		read -p "Enter your login: " LG
		git config --global user.name $LG
		git add .
		read -p "Enter a commit name: " CN
		git commit -m "$CN"
		git push origin master
		i=1
	fi
	if [ "$AW" = C ]; then
		i=1
	fi
	if [ "$i" = 0 ]; then
		echo "Sorry, but I didn't understand you! Try to answer again! :)"
	fi
done
cd ..
echo "Good bye! See you soon! :)"
exit
