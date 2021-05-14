#!/bin/sh

japanese_folder="/home/ahacad/HOME/GitHub:Ahacad/japanese"

# git 
CommitMessage=`date +'%Y%m%d-%H:%M:%S'`"-backup"
cd "$japanese_folder" || exit
git add .
git commit -m "$CommitMessage" --author="ahacad-bot <bot@ahacad.cool>"
git push
