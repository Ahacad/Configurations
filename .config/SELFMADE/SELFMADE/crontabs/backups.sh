#! /bin/bash

RepoFolder="/media/HOME/ahacad/WORKSTATION/Working/-working/#Configurations"
ConfigFolder="/media/HOME/ahacad/WORKSTATION/Working/-working/#Configurations/.config"

backup_config() {
    rm -rf "$ConfigFolder/nvim"
    cp -r "$2" "$1"
}


backup_config "$ConfigFolder/nvim" "$HOME/.config/nvim"
backup_config "$ConfigFolder/sxhkd" "$HOME/.config/sxhkd"
backup_config "$ConfigFolder/newsboat" "$HOME/.config/newsboat"
backup_config "$ConfigFolder/SELFMADE" "$HOME/.config/SELFMADE"
backup_config "$RepoFolder/.dwm" "$HOME/.dwm"
backup_config "$ConfigFolder/.zshrc" "$HOME/.zshrc"
backup_config "$ConfigFolder/.gitconfig" "$HOME/.gitconfig"

# git 
CommitMessage=`date +'%Y%m%d'`"-backup"
cd "$ConfigFolder" || exit
git add .
git commit -m "$CommitMessage"
git push
