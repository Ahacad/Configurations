#! /usr/bin/sh

install_config() {
    # rm pcfolder/configfile
    rm -rf "$1/$3"
    # cp configfolder/configfile pcfolder
    cp -r "$2/$3" "$1"
}

install_config "$HOME/.config" "../configs" "nvim"
install_config "$HOME/.config" "../configs" "sxhkd"
install_config "$HOME/.config" "../configs" "newsboat"
install_config "$HOME/.config" "../configs" "alacritty"
install_config "$HOME/.config" "../configs" "SELFMADE"
install_config "$HOME/.config" "../configs" "lf"
install_config "$HOME" "../config" ".tmux.conf"
install_config "$HOME" "../config" ".gitconfig"
