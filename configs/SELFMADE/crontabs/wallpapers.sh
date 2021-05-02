#!/bin/sh

wallpaper_folder="/media/HOME/ahacad/WORKSTATION/Working/-working/#wallpaper/"


# git 
CommitMessage=`date +'%Y%m%d-%H:%M:%S'`"-backup"
cd "$wallpaper_folder" || exit
git add .
git commit -m "$CommitMessage" --author="ahacad-bot <bot@ahacad.cool>"
git push
