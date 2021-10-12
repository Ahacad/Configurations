#! /bin/bash

# warmer sreen
redshift&

# trasparent windows
compton&

# start wallpaper 
~/.config/bspwm/executable/auto-wallpaper.sh&

# update lock screen wallpaper cache
~/.config/bspwm/executable/update_lockscreen_wallpaper.sh &

# start notification service
dunst&
