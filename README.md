
## Configurations
![repo-size](https://img.shields.io/github/repo-size/ahacad/configurations) 

My own configurations to boost productivity.

1. .vim
2. config      : configurations for ultisnips (the plugin of vim)
3. myownshells 


## Use this repo on a new machine

1. copy .vimrc into .vim directory & install needed plugins
2. add *myownshells* to the shell environment variant 

## Programs to installed on a new machine
On a new machine, the programs below need to be installed to promote productivity:

- git
- zsh & oh-my-zsh : theme - agnoster
- tmux & .tmux
    ```
    cd
    git clone https://github.com/gpakosz/.tmux.git
    ln -s -f .tmux/.tmux.conf
    cp .tmux/.tmux.conf.local .
    ```
- lazygit
- ranger
- neofetch


- git, lazygit
- ranger
- tmux 
- zsh, ohmyzsh
- w3m


## The new-vim way

With the awesome plugin coc, vim can now be used in two ways: the simple clean vim, and the IDE like heavy vim.
