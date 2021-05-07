#!/bin/sh

logseq_folder="/home/ahacad/Logseq"

# git 
CommitMessage=`date +'%Y%m%d-%H:%M:%S'`"-backup"
cd "$logseq_folder" || exit
git add .
git commit -m "$CommitMessage" --author="ahacad-bot <bot@ahacad.cool>"
git push
