

## Configurations
![repo-size](https://img.shields.io/github/repo-size/ahacad/configurations) 

Install all my personal configurations on a Linux machine with [this install.sh script](./install.sh)

Refer to [using-arch](https://github.com/ahacad/using-arch)  for installing programs on Arch inux (another one of my repo).

### Philosophy

**Ideal effects**: sit down on a newly installed Arch Linux machine, clone this repo, install all the programs and configurations, and get started on working, efficiently.

### configs included

- nvim
- bspwm
- polybar
- sxhkd
- newsboat
- redshift
- alacritty
- lf
- dwm
- st
- gitconfig
- zshrc
- tmux.conf
- SELFMADE

## How to use

1. `src/downloads.sh` to download wallpaper
2. `src/install.sh` to install configs
3. setup `crontab` for backup: `$HOME/.config/SELFMADE/crontabs/backups.sh`
4. you may need to change some paths for your machine:
  1. wallpaper path in `.config/bspwm/executable/auto-wallpaper.sh`
  2. ConfigFolder in `../configs/SELFMADE/crontabs/backups.sh`


