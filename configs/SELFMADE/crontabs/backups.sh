#! /bin/bash

#RepoFolder="/media/HOME/ahacad/WORKSTATION/Working/-working/#Configurations"
ConfigFolder="/home/ahacad/HOME/Configurations/configs"


backup_config() {
    # rm configfolder/config
    rm -rf "$2/$3"
    # cp pcfolder/config configfolder
    cp -r "$1/$3" "$2"
}


backup_config "$HOME/.config/nvim" "$ConfigFolder" "nvim"
backup_config "$HOME/.config/sxhkd" "$ConfigFolder" "sxhkd"
backup_config "$HOME/.config/bspwm" "$ConfigFolder" "bspwm"
backup_config "$HOME/.config/polybar" "$ConfigFolder" "polybar"
backup_config "$HOME/.config/newsboat" "$ConfigFolder" "newsboat"
backup_config "$HOME/.config/SELFMADE" "$ConfigFolder" "SELFMADE"
backup_config "$HOME/.config/lf" "$ConfigFolder" "lf"
backup_config "$HOME/.zshrc" "$ConfigFolder" ".zshrc"
backup_config "$HOME/.gitconfig" "$ConfigFolder" ".gitconfig"
backup_config "$HOME/.tmux.conf" "$ConfigFolder" ".tmux.conf"


# git 
CommitMessage=`date +'%Y%m%d'`"-backup"
cd "$ConfigFolder" || exit
git add .
git commit -m "$CommitMessage" --author="ahacad-bot <bot@ahacad.cool"
git push
