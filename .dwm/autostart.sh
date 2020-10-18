#! /bin/bash

redshift&
compton&
sxhkd&
./dwm_bar.sh&
./auto-wallpaper.sh&
ibus-daemon&
dunst&
ibus-daemon -drx --panel /usr/lib/ibus/ibus-ui-gtk3
#rand=$(shuf -i 1-101 -n 1)
#xwallpaper --zoom /home/ahacad/Workstation/Prepared/wallpaper/Great/$rand&
