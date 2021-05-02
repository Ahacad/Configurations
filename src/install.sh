


install_config() {
    rm -rf "$1"
    cp -r "$2" "$1"
}

nvim_config="$HOME/.config/nvim"
sxhkd_config="$HOME/.config/sxhkd"
newsboat_config="$HOME/.config/newsboat"
selfmade_config="$HOME/.config/SELFMADE"

install_config "$nvim_config" "../configs/nvim"
install_config "$sxhkd_config" "../configs/sxhkd"
install_config "$newsboat_config" "../configs/newsboat"
install_config "$selfmade_config" "../configs/SELFMADE"

