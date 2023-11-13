#! /usr/bin/sh

install_config() {
    local local_dir=$1
    local backup_dir=$2
    local filename=$3
    local verbose=${4:-true}
    
    local local_path="$local_dir"
    local backup_path="$backup_dir/$filename"

    [ "$verbose" = true ] && echo "Installing $filename to $local_dir"
    
    # check if local config file exists
    if [ -e "$local_path/$filename" ]; then
        [ "$verbose" = true ] && echo "Removing existing file: $local_path/$filename"
        rm -rf "$local_path/$filename"
    fi

    # copy file and check for success
    cp -r "$backup_path" "$local_path" && {
        [ "$verbose" = true ] && echo "Successfully installed $filename"
    } || {
        echo "Failed to install $filename" >&2
        return 1
    }
}

backup_config() {
    local local_dir=$1
    local backup_dir=$2
    local filename=$3
    local verbose=${4:-true}

    local local_path="$local_dir/$filename"
    local backup_path="$backup_dir"

    [ "$verbose" = true ] && echo "Backing up $filename to $dest_dir"

    # check if local config file exists
    if [ -e "$local_path" ]; then
        mkdir -p "$backup_dir"

        # copy file and check for success
        cp -r "$local_path" "$backup_path" && {
            [ "$verbose" = true ] && echo "Successfully backed up $filename"
        } || {
            echo "Failed to back up $filename" >&2
            return 1
        } 
    else
        [ "$verbose" = true ] && echo "No existing file: $local_path"
    fi
}

declare -a configs=(
    ".config/nvim"
    ".config/sxhkd"
    ".config/newsboat"
    ".config/alacritty"
    ".config/bspwm"
    ".config/polybar"
    ".config/SELFMADE"
    ".config/lf"
    ".config/redshift"
    ".config/ibus/rime"
    ".tmux.conf"
    ".gitconfig"
    ".zshrc"
    ".oh-my-zsh"
)

case "$1" in
    install)
        for config in "${configs[@]}"; do
            directory=$(dirname "$config")
            filename=$(basename "$config")
            [ "$directory" = "." ] && directory=""
            install_config "$HOME/$directory" "../configs" "$filename" true
        done
        ;;
    backup)
        backup_dir="${CONFIG_BACKUP_DIR:-../configs}"
        echo "Backing up configs to $backup_dir"
        for config in "${configs[@]}"; do
            directory=$(dirname "$config")
            filename=$(basename "$config")
            [ "$directory" = "." ] && directory=""
            backup_config "$HOME/$directory" "$backup_dir" "$filename" true
        ;;
    *)
        echo "Usage: $0 {install|backup}"
        exit 1
        ;;
esac
