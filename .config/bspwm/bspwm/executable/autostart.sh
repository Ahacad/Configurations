#! /bin/bash

# warmer sreen
redshift&

# trasparent windows
compton&

# start wallpaper 
~/.config/bspwm/executable/auto-wallpaper.sh&

# start notification service
dunst&
