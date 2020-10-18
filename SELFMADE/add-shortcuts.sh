#! /bin/bash


shortcuts="$HOME/.config/SELFMADE/shortcuts"

# locations
shell_shortcuts="$HOME/.config/SELFMADE/shell-shortcuts"
ranger_shortcuts="$HOME/.config/ranger/rc.conf"

# remove
rm -f "$shell_shortcuts" "$ranger_shortcuts"
ranger --copy-config=rc 
sed "/^#/d" "$shortcuts" | awk '{print "alias "$1"=\"cd "$2" && ra\""}' >> "$shell_shortcuts"
sed "/^#/d" "$shortcuts" | awk '{print "map g"$1" cd "$2""}' >> "$ranger_shortcuts"

# additional actions for ranger plugins
echo "default_linemode devicons" >> $HOME/.config/ranger/rc.conf
