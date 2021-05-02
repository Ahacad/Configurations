#! /bin/bash


shortcuts="$HOME/.config/SELFMADE/shortcuts"

# locations
shell_shortcuts="$HOME/.config/SELFMADE/shell-shortcuts"

# remove
rm -f "$shell_shortcuts"
sed "/^#/d" "$shortcuts" | awk '{print "alias "$1"=\"cd "$2" && lf\""}' >> "$shell_shortcuts"


# Deprecated configs for ranger
#ranger_shortcuts="$HOME/.config/ranger/rc.conf"
#sed "/^#/d" "$shortcuts" | awk '{print "map g"$1" cd "$2""}' >> "$ranger_shortcuts"
