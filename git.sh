#!/bin/bash

clear
echo "Hi! I'm a Git commit master!"
sleep 1;echo " ";echo "What do you want?"
echo "(D - download repository, U - upload repository, C - cancel, sorry and exit)"
read -p "Your answer: " AW
sleep 1
if [ "$AW" = U ]; then
#to enter email
read -p "Enter your e-mail: " EM
git config --global user.email $EM

#to enter login
read -p "Enter your login: " LG
git config --global user.name $LG

#to do a tracking of done commit
git add .

#to give a name of new commit
read -p "Enter a commit name: " CN
git commit -m "$CN"

#to init the repository uploading
git push origin master
echo "Your commit was succesfully uploaded!"
fi

echo "Good bye! See you soon! :)"

if [ "$AW" = C ]; then
exit
fi
