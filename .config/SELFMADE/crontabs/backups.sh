#! /bin/bash

ConfigFolder="/media/HOME/ahacad/WORKSTATION/Working/#Configurations"

# copy nvim config file
rm -rf $ConfigFolder"/nvim"
cp -r /home/ahacad/.config/nvim $ConfigFolder

# sxhkd
rm -rf $ConfigFolder"/sxhkd"
cp -r /home/ahacad/.config/sxhkd $ConfigFolder

# SELFMADE
rm -rf $ConfigFolder"/SELFMADE"
cp -r /home/ahacad/.config/SELFMADE $ConfigFolder"/SELFMADE"

# dwm
rm -rf $ConfigFolder"/.dwm"
cp -r /home/ahacad/.dwm $ConfigFolder


# git 
CommitMessage=`date +'%Y%m%d'`"-backup"
cd $ConfigFolder
git add .
git commit -m $CommitMessage
git push
