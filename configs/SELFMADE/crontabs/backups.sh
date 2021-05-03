#!/bin/sh

#RepoFolder="/media/HOME/ahacad/WORKSTATION/Working/-working/#Configurations"
ConfigFolder="/home/ahacad/HOME/Configurations/configs"


backup_config() {
    # rm configfolder/config
    rm -rf "$2/$3"
    # cp pcfolder/config configfolder
    cp -r "$1/$3" "$2"
}


backup_config "$HOME/.config" "$ConfigFolder" "nvim"
backup_config "$HOME/.config" "$ConfigFolder" "sxhkd"
backup_config "$HOME/.config" "$ConfigFolder" "newsboat"
backup_config "$HOME/.config" "$ConfigFolder" "alacritty"
backup_config "$HOME/.config" "$ConfigFolder" "bspwm"
backup_config "$HOME/.config" "$ConfigFolder" "polybar"
backup_config "$HOME/.config" "$ConfigFolder" "SELFMADE"
backup_config "$HOME/.config" "$ConfigFolder" "lf"
backup_config "$HOME/.config" "$ConfigFolder" "redshift"
backup_config "$HOME/.config" "$ConfigFolder" "ibus/rime"
backup_config "$HOME/.config" "$ConfigFolder" "khal"
backup_config "$HOME" "$ConfigFolder" ".zshrc"
backup_config "$HOME" "$ConfigFolder" ".gitconfig"
backup_config "$HOME" "$ConfigFolder" ".tmux.conf"
backup_config "$HOME" "$ConfigFolder" ".oh-my-zsh"


# git 
CommitMessage=`date +'%Y%m%d-%H:%M:%S'`"-backup"
cd "$ConfigFolder" || exit
git add .
git commit -m "$CommitMessage" --author="ahacad-bot <bot@ahacad.cool>"
git push
