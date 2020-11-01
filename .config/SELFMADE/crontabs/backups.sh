#! /bin/bash

ConfigFolder="/media/HOME/ahacad/WORKSTATION/Working/#Configurations/.config"

# copy nvim config file
rm -rf $ConfigFolder"/nvim"
cp -r "$HOME/.config/nvim" $ConfigFolder

# sxhkd
rm -rf $ConfigFolder"/sxhkd"
cp -r "$HOME/.config/sxhkd" $ConfigFolder

# newsboat
rm -rf $ConfigFolder"/newsboat"
cp -r "$HOME/.config/newsboat" $ConfigFolder

# SELFMADE
rm -rf $ConfigFolder"/SELFMADE"
cp -r "$HOME/.config/SELFMADE" $ConfigFolder"/SELFMADE"

# dwm
rm -rf $ConfigFolder"/.dwm"
cp -r "$HOM/.dwm" $ConfigFolder

# zsh
rm -rf $ConfigFolder".zshrc"
cp "$HOME/.zshrc" $ConfigFolder

# git
rm -rf $ConfigFolder".gitconfig"
cp "$HOME/.gitconfig" $ConfigFolder


# git 
CommitMessage=`date +'%Y%m%d'`"-backup"
cd $ConfigFolder
git add .
git commit -m $CommitMessage
git push
