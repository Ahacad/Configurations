#!/bin/sh

process_folder="/media/Work/PROCESS"

# git 
CommitMessage=`date +'%Y%m%d-%H:%M:%S'`"-backup"
cd "$process_folder" || exit
git add .
git commit -m "$CommitMessage" --author="ahacad-bot <bot@ahacad.cool>"
git push
