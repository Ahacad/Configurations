# Enable Powerlevel10k instant prompt. Should stay close to the top of ~/.zshrc.
# Initialization code that may require console input (password prompts, [y/n]
# confirmations, etc.) must go above this block; everything else may go below.
if [[ -r "${XDG_CACHE_HOME:-$HOME/.cache}/p10k-instant-prompt-${(%):-%n}.zsh" ]]; then
  source "${XDG_CACHE_HOME:-$HOME/.cache}/p10k-instant-prompt-${(%):-%n}.zsh"
fi

# If you come from bash you might have to change your $PATH.
# export PATH=$HOME/bin:/usr/local/bin:$PATH

# Path to your oh-my-zsh installation.
export ZSH="/home/ahacad/.oh-my-zsh"

# Set name of the theme to load --- if set to "random", it will
# load a random theme each time oh-my-zsh is loaded, in which case,
# to know which specific one was loaded, run: echo $RANDOM_THEME
# See https://github.com/ohmyzsh/ohmyzsh/wiki/Themes
#ZSH_THEME="agnoster"
ZSH_THEME="powerlevel10k/powerlevel10k"

# Set list of themes to pick from when loading at random
# Setting this variable when ZSH_THEME=random will cause zsh to load
# a theme from this variable instead of looking in ~/.oh-my-zsh/themes/
# If set to an empty array, this variable will have no effect.
# ZSH_THEME_RANDOM_CANDIDATES=( "robbyrussell" "agnoster" )

# Uncomment the following line to use case-sensitive completion.
# CASE_SENSITIVE="true"

# Uncomment the following line to use hyphen-insensitive completion.
# Case-sensitive completion must be off. _ and - will be interchangeable.
# HYPHEN_INSENSITIVE="true"

# Uncomment the following line to disable bi-weekly auto-update checks.
# DISABLE_AUTO_UPDATE="true"

# Uncomment the following line to automatically update without prompting.
# DISABLE_UPDATE_PROMPT="true"

# Uncomment the following line to change how often to auto-update (in days).
# export UPDATE_ZSH_DAYS=13

# Uncomment the following line if pasting URLs and other text is messed up.
# DISABLE_MAGIC_FUNCTIONS=true

# Uncomment the following line to disable colors in ls.
# DISABLE_LS_COLORS="true"

# Uncomment the following line to disable auto-setting terminal title.
# DISABLE_AUTO_TITLE="true"

# Uncomment the following line to enable command auto-correction.
# ENABLE_CORRECTION="true"

# Uncomment the following line to display red dots whilst waiting for completion.
# COMPLETION_WAITING_DOTS="true"

# Uncomment the following line if you want to disable marking untracked files
# under VCS as dirty. This makes repository status check for large repositories
# much, much faster.
# DISABLE_UNTRACKED_FILES_DIRTY="true"

# Uncomment the following line if you want to change the command execution time
# stamp shown in the history command output.
# You can set one of the optional three formats:
# "mm/dd/yyyy"|"dd.mm.yyyy"|"yyyy-mm-dd"
# or set a custom format using the strftime function format specifications,
# see 'man strftime' for details.
# HIST_STAMPS="mm/dd/yyyy"

# Would you like to use another custom folder than $ZSH/custom?
# ZSH_CUSTOM=/path/to/new-custom-folder

# Which plugins would you like to load?
# Standard plugins can be found in ~/.oh-my-zsh/plugins/*
# Custom plugins may be added to ~/.oh-my-zsh/custom/plugins/
# Example format: plugins=(rails git textmate ruby lighthouse)
# Add wisely, as too many plugins slow down shell startup.
plugins=(git)
plugins=(zsh-autosuggestions)
#plugins=(zsh-syntax-highlighting)

source $ZSH/oh-my-zsh.sh

# User configuration

# export MANPATH="/usr/local/man:$MANPATH"

# You may need to manually set your language environment
# export LANG=en_US.UTF-8

# Preferred editor for local and remote sessions
# if [[ -n $SSH_CONNECTION ]]; then
#   export EDITOR='vim'
# else
#   export EDITOR='mvim'
# fi

# Compilation flags
# export ARCHFLAGS="-arch x86_64"

# Set personal aliases, overriding those provided by oh-my-zsh libs,
# plugins, and themes. Aliases can be placed here, though oh-my-zsh
# users are encouraged to define aliases within the ZSH_CUSTOM folder.
# For a full list of active aliases, run `alias`.
#
# Example aliases
# alias zshconfig="mate ~/.zshrc"
# alias ohmyzsh="mate ~/.oh-my-zsh"
# 
#
#
# Personal configurations 
#
# Set environmental variants : myownshells, anaconda, programs inside the nextcloud folder, go

#
# Personal variants
export TERMINAL="st"
export HOMEDISK="/media/HOME/ahacad"
export NEXTDISK="/media/Seagate-next"
export WALLPAPERPATH="$HOMEDISK/Workstation/Prepared/wallpaper"
export READINGS="$HOMEDISK/Workstation/Readings"
export EDITOR=nvim
export _JAVA_AWT_WM_NONREPARENTING=1
export BRIGHTNESS=60000
#
# Set keyboard to colemak
#
# some alias for commands

# >>> conda initialize >>>
# !! Contents within this block are managed by 'conda init' !!
#__conda_setup="$('/home/ahacad/anaconda3/bin/conda' 'shell.zsh' 'hook' 2> /dev/null)"
#if [ $? -eq 0 ]; then
#    eval "$__conda_setup"
#else
#    if [ -f "/home/ahacad/anaconda3/etc/profile.d/conda.sh" ]; then
#        . "/home/ahacad/anaconda3/etc/profile.d/conda.sh"
#    else
#        export PATH="/home/ahacad/anaconda3/bin:$PATH"
#    fi
#fi
#unset __conda_setup
# <<< conda initialize <<<

#
source "$HOME/.config/SELFMADE/shell-shortcuts"
#
# personal environmental variants

# Print something to the tty upon opening
#
# print the calendar

# - * start up 
setxkbmap us -variant colemak -option
setxkbmap us -variant colemak -option caps:escape


#- * personal paths
#export  RANGER_LOAD_DEFAULT_RC=false
# Related files: .scripts, .vim, .config/SELFMADE
export PATH="$HOMEDISK/nextcloud:/media/HOME/ahacad/.ahacad/.scripts:$HOME/.local/bin:$PATH"
export PATH="$HOME/LANGUAGES/flutter/bin:/home/ahacad/.cargo/bin:$PATH"
#export ANDROID_HOME="$HOMEDISK/Languages/android-sdk"
# Go programming language
#
#export GOROOT=$HOMEDISK/Languages/go
#export GOPATH=$HOMEDISK/Languages/Gopath



# - * personal aliases

## alias for efficiency
source $HOME/.config/SELFMADE/zshrc/aliases

## alias for starting programs
alias studio.sh="$HOME/LANGUAGES/android-studio/bin/studio.sh"
alias baidunetdisk="/opt/baidunetdisk/baidunetdisk"
alias stgn="column $HOMEDISK/.ahacad/next-period.md"
alias dt="/media/HOME/ahacad/WORKSTATION/Working/DISTOR/distor-master/distor/distor/distor"
# adjust screen lightness
# adjust audio sound
pomostart()
{
    echo "starting Pomodoro for 25 mins!"
    sleep 5m && notify-send "5 mins DONE" 
    sleep 5m && notify-send "10 mins DONE" 
    sleep 5m && notify-send "15 mins DONE" 
    sleep 5m && notify-send "20 mins DONE" 
    sleep 5m && notify-send "25 mins DONE!" "Have a rest!" 
    mpv /media/HOME/ahacad/PODCASTS/20200628/005\ Leaders\ -\ Preparedness.mp3
    pomor
}
alias pomos="pomostart"
pomorest()
{
    echo "Rest for 5mins!"
    notify-send "5 MIN rest!"
    sleep 5m
    mpv /media/HOME/ahacad/PODCASTS/20200711/009\ Leaders\ -\ Sourdough\ economics.mp3
    pomos
}
alias pomor="pomorest"
alias cf="$HOME/go/src/github.com/xalanq/cf-tool/cf"
alias zet="/media/HOME/ahacad/WORKSTATION/Working/ZETTELKASTEN/zettel"
alias annie="$HOME/PROGRAMS/annie"
alias quickvid="$HOMEDISK/WORKSTATION/Working/quick-vid/quickvid.sh"
alias tp="trans :ja -d"
alias stk="column /media/HOME/ahacad/WORKSTATION/Working/-MATRIX/matrix-tools/STACK.md"
alias tlmgr="/usr/share/texmf-dist/scripts/texlive/tlmgr.pl --usermode"
alias emulator="$HOME/Android/Sdk/emulator/emulator"
alias t="todo.sh"
alias kaggle="$HOME/.local/bin/kaggle"

alias jupyter="$HOME/.local/bin/jupyter"
alias matlab="/media/1/usr/local/MATLAB/R2020a/bin/matlab"
alias mathematica="/media/HOME/ahacad/Mathematica/Executables/mathematica"

# welcome screen

echo "                      CALENDAR"
kl
echo 
echo "##############################################################"
#
# print the things I am developing
echo "\033[0;32m                   THINGS I AM DEVELOPING \033[0m"
while read p; do
    echo "\033[0;36m $p \033[0m"
done < $HOMEDISK/.ahacad/.list/developing
#echo "##############################################################"
#echo "##############################################################"
#echo "\033[0;32m                  SOURCE CODE I AM READING \033[0m"
#while read p; do
    #echo "\033[0;33m $p \033[0m"
#done < $HOMEDISK/.ahacad/.sourceReadme/readme
echo "##############################################################"
echo "\033[0;32m                  THINGS I AM DOING        \033[0m"
while read p; do
    echo "\033[0;36m $p \033[0m"
done < $HOMEDISK/.ahacad/.list/dome-little
echo "##############################################################"
echo "RECORD YOUR STATISTICS INTO .ahacad/.statistics!!!"
stk


### TEST

export GTK_IM_MODULE=ibus
export XMODIFIERS=@im=ibus
export QT_IM_MODULE=ibus
export XIM_PROGRAM=/usr/bin/ibus-daemon 
export PDFVIEWER_texdoc=zathura
export PUB_HOSTED_URL=https://pub.flutter-io.cn
export FLUTTER_STORAGE_BASE_URL=https://storage.flutter-io.cn
export CHROME_EXECUTABLE=/usr/bin/chromium
#export TESSDATA_PREFIX=/usr/share/tessdata

[[ -r "/usr/share/z/z.sh" ]] && source /usr/share/z/z.sh

# To customize prompt, run `p10k configure` or edit ~/.p10k.zsh.
[[ ! -f ~/.p10k.zsh ]] || source ~/.p10k.zsh

#go env -w GO111MODULE=on
#go env -w GOPROXY=https://mirrors.aliyun.com/goproxy/

export GOPATH="/home/ahacad/GO"

set icons
source "$HOME/.config/lf/LF_ICONS"

# touchpad natural scrolling
xinput set-prop "ELAN962C:00 04F3:30D0 Touchpad" "libinput Natural Scrolling Enabled" 1
