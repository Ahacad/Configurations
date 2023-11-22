

## Configurations
![repo-size](https://img.shields.io/github/repo-size/ahacad/configurations) 

Install all my personal configurations on a Linux machine with [this install.sh script](./src/install.sh)

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
- gitconfig
- zshrc
- tmux.conf
- SELFMADE



- khal
- vdirsyncer (due to the sensitive nature of calendars, I didn't sync them here but use Google Calendar, see [this post](https://opensource.com/article/20/1/open-source-calendar) for setting up)

- dwm (no longer)
- st (no longer)

## How to use

1. `src/downloads.sh` to download wallpaper
2. `cd src && bash configtool.sh install` to install configs
3. (no longer needed) setup `crontab` for backup: `$HOME/.config/SELFMADE/crontabs/backups.sh`
4. you may need to change some paths for your machine:
  1. wallpaper path in `.config/bspwm/executable/auto-wallpaper.sh`
  2. ConfigFolder in `../configs/SELFMADE/crontabs/backups.sh`
5. look at more setups below

## More setups

### Clock sync
[NTP (network time protocol)](https://www.wikiwand.com/en/Network_Time_Protocol)
[arch wiki: ntpd](https://wiki.archlinux.org/title/Network_Time_Protocol_daemon)

```bash
timedatectl set-ntp true
```

### Rime

```bash
ibus-setup
ibus restart
```

set English keyboard to `colemak` and Chinese to rime.

### xdg-open

some programs replies on `xdg-open` to open files, you may want to [configure it](https://unix.stackexchange.com/questions/36380/how-to-properly-and-easy-configure-xdg-open-without-any-environment)

```
xdg-mime default xpdf.desktop application/pdf
```

