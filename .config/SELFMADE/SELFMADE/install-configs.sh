#! /bin/bash


install_config() {
    rm -rf "$1"
    cp -r "$2" "$1"
}

# neovim
nvimConfig="$HOME/.config/nvim"
nvimShare="$HOME/.local/share/nvim"
sxhkdConfig="$HOME/.config/sxhkd"
newsboatConfig="$HOME/.config/newsboat"
selfmadeConfig="$HOME/.config/SELFMADE"
dwmConfig="$HOME/.dwm"

install_config "$nvimConfig" "../nvim"
install_config "$nvimShare" "../../share/nvim"
install_config "$sxhkdConfig" "../sxhkd"
install_config "$newsboatConfig" "../newsboat"
install_config "$selfmadeConfig" "../SELFMADE"
install_config "$dwmConfig" "../../.dwm"
