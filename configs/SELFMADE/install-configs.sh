#! /bin/bash

# neovim
nvimConfig="$HOME/.config/nvim"
rm -rf $nvimConfig
cp -r "../nvim" $nvimConfig

# sxhkd
sxhkdConfig="$HOME/.config/sxhkd"
rm -rf $sxhkdConfig
cp -r "../sxhkd" $sxhkdConfig

# SELFMADE
selfmadeConfig="$HOME/.config/SELFMADE"
rm -rf $selfmadeConfig
cp -r "../SELFMADE" $selfmadeConfig

# dwm
dwmConfig="$HOME/.dwm"
rm -rf $dwmConfig
cp -r "../.dwm" $dwmConfig
