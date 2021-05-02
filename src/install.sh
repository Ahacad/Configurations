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
install_config "$HOME/.config" "../configs" "bspwm"
install_config "$HOME/.config" "../configs" "polybar"
install_config "$HOME/.config" "../configs" "SELFMADE"
install_config "$HOME/.config" "../configs" "lf"
install_config "$HOME/.config" "../configs" "redshift"
install_config "$HOME" "../configs" ".tmux.conf"
install_config "$HOME" "../configs" ".gitconfig"
