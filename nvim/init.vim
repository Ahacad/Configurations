set number
set cursorline
syntax on
set showmode
set encoding=utf-8

" indent
set autoindent
set tabstop=4
set expandtab
set softtabstop=4
set shiftwidth=4

" background
set background=dark
set t_Co=256

" key maps
:nmap L J
:nmap H K
:nmap J 7j
:nmap K 7k

" use Ctrl-s for saving
noremap W :update<CR>
"vnoremap <C-S>		<C-C>:update<CR>
"inoremap <C-S>		<Esc>:update<CR>gi


" copy to system paster
vnoremap Y "+y

" set gui cursor with block
set guicursor=a:block

" fold code
set foldmethod=manual
noremap F zfat<CR>
noremap f za<CR>



" ####################################################3
"
" PLUGS
call plug#begin()
" tags for classes and functions
Plug 'liuchengxu/vista.vim'
" beautiful bar downside
Plug 'itchyny/lightline.vim'
" great companion for writing codes
Plug 'sirver/ultisnips'
" fuzzy file finder
Plug 'junegunn/fzf.vim'
" make table quickly in vim
Plug 'dhruvasagar/vim-table-mode'
"" multiple cursor modify
Plug 'terryma/vim-multiple-cursors'
" edit surrounding elements quickly
Plug 'tpope/vim-surround'
" easily align code by given texts
Plug 'junegunn/vim-easy-align'
" generate table of contents for markdown easily
Plug 'mzlogin/vim-markdown-toc'
" syntax checks for vim 
Plug 'vim-syntastic/syntastic'
" use sudo easily in vim
Plug 'lambdalisue/suda.vim'
" vim LaTeX companion
Plug 'lervag/vimtex'
" easy comment 
Plug 'preservim/nerdcommenter'
" rainbow color brackets
Plug 'luochen1990/rainbow'
" shows changes since last commit
Plug 'airblade/vim-gitgutter'
" display the indentation levels
Plug 'Yggdroot/indentLine'
" auto pair up 
Plug 'jiangmiao/auto-pairs'
" amazing vim start screen
Plug 'mhinz/vim-startify'
" vim wiki
Plug 'vimwiki/vimwiki'
"code debugger for vim
"Plug 'puremourning/vimspector'

"" multiple tabs for vim
"Plug 'mg979/vim-xtabline'
"" great language autocomplete
"Plug 'neoclide/coc.nvim', {'branch': 'release'}
"Plug 'weirongxu/coc-explorer'
"" undo history in tree style
"Plug 'mbbill/undotree'
"Plug 'tpope/vim-fugitive'
"" 
"Plug 'svermeulen/vim-subversive'
"" easily format your code
"Plug 'Chiel92/vim-autoformat'
"" vim motion on speed!
"Plug 'easymotion/vim-easymotion'
"" bomark for vim
"Plug 'kshenoy/vim-signature'
"" rplace text through multiple files
"Plug 'brooth/far.vim'
"" create .gitignore file
"Plug 'fszymanski/fzf-gitignore'
"" calendar in vim
"Plug 'itchyny/calendar.vim'
"" distraction-free writing in vim
"Plug 'junegunn/goyo.vim'

call plug#end()


" Plug configurations, sorted at the same turn with installed 
"
"
" == vista
map <F2> :Vista<CR>
map <F3> :Vista!<CR>
let g:vista_sidebar_width = 50
let g:vista#renderer#enable_icon = 1
let g:vista#renderer#icons = {
\   "function": "⚛",
\   "variable": "\U00000024",
\  }
let g:vista_icon_indent = ["╰─▸ ", "├─▸ "]

" == lightline
set laststatus=2

" == ultisnippets
let g:UltiSnipsExpandTrigger = '<tab>'
let g:UltiSnipsJumpForwardTrigger = '<tab>'
let g:UltiSnipsJumpBackwardTrigger = '<s-tab>'
let g:UltiSnipsSnippetDirectories = ['/media/HOME/ahacad/WORKSTATION/Working/Configurations/config']

"" == coc.nvim

" == fzf 
noremap <C-p> :Files<CR>

" == vim-table-mode

" == vim-multiple-cursor
let g:multi_cursor_use_default_mapping = 0
let g:multi_cursor_start_word_key = '<c-k>'
let g:multi_cursor_select_all_word_key = '<a-a>'
let g:multi_cursor_start_key = 'g<c-k>'
let g:multi_cursor_select_all_key = 'g<a-a>'
let g:multi_cursor_next_key = '<c-k>'
let g:multi_cursor_prev_key = '<c-p>'
let g:multi_cursor_skip_key = '<C-s>'
let g:multi_cursor_quit_key = '<Esc>' 

" == vim surrond

" == vim easy-align
xmap ga <Plug>(EasyAlign)
nmap ga <Plug>(EasyAlign)

" == suda
cnoreabbrev sudowrite w suda://%


" == nerdcommenter

" == vim rainbow
let g:rainbow_active = 1 "set to 0 if you want to enable it later via :RainbowToggle
let lightcolors =  ['lightblue', 'lightyellow', 'darkgreen', 'darkyellow', 'lightred', 'yellow', 'cyan', 'magenta', 'white']
let darkcolors = ['DarkBlue', 'Magenta', 'Black', 'Red', 'DarkGray', 'DarkGreen', 'DarkYellow']

let g:rainbow_conf = {
\	'guifgs': ['royalblue3', 'darkorange3', 'seagreen3', 'firebrick'],
\	'ctermfgs': lightcolors,
\	'guis': [''],
\	'cterms': [''],
\	'operators': '_,_',
\	'parentheses': ['start=/(/ end=/)/ fold', 'start=/\[/ end=/\]/ fold', 'start=/{/ end=/}/ fold'],
\	'separately': {
\		'*': {},
\		'markdown': {
\			'parentheses_options': 'containedin=markdownCode contained',
\		},
\		'lisp': {
\			'guifgs': ['royalblue3', 'darkorange3', 'seagreen3', 'firebrick', 'darkorchid3'],
\		},
\		'haskell': {
\			'parentheses': ['start=/(/ end=/)/ fold', 'start=/\[/ end=/\]/ fold', 'start=/\v\{\ze[^-]/ end=/}/ fold'],
\		},
\		'vim': {
\			'parentheses_options': 'containedin=vimFuncBody',
\		},
\		'perl': {
\			'syn_name_prefix': 'perlBlockFoldRainbow',
\		},
\		'stylus': {
\			'parentheses': ['start=/{/ end=/}/ fold contains=@colorableGroup'],
\		},
\		'css': 0,
\	}
\}


" == vim-gitgutter

" == indentLine
let g:indentLine_char_list = ['|', '¦', '┆', '┊']
"let g:indentLine_setColors = 0
let g:indentLine_color_term = 147
"let g:indentLine_bgcolor_term = 202
"let g:indentLine_bgcolor_gui = '#3DAEEB'
"let g:indentLine_setConceal = 0

" == vimspector
let g:vimspector_enable_mappings = 'HUMAN'


" #########################################################3
"
" Functions

" Compile function
noremap r :call CompileRunGcc()<CR>
func! CompileRunGcc()
	exec "w"
	if &filetype == 'c'
		exec "!clear && g++ % -o %<"
		exec "!time ./%<"
	elseif &filetype == 'cpp'
		set splitbelow
		exec "!clear && g++ -std=c++11 % -Wall -o %<"
		:sp
		":res -15
		:term ./%<
	elseif &filetype == 'sh'
		:!time bash %
	elseif &filetype == 'python'
		set splitbelow
		:sp
        ":res -15
		:term python3 %
	elseif &filetype == 'html'
        silent! exec "!chromium % &"
		"silent! exec "!".g:mkdp_browser." % &"
	elseif &filetype == 'javascript'
		set splitbelow
		:sp
		":term export DEBUG="INFO,ERROR,WARNING"; node --trace-warnings .
        :term node %
	"elseif &filetype == 'java'
		"exec "!javac %"
		"exec "!time java %<"
	"elseif &filetype == 'markdown'
		"exec "MarkdownPreview"
	"elseif &filetype == 'tex'
		"silent! exec "VimtexStop"
		"silent! exec "VimtexCompile"
	"elseif &filetype == 'dart'
		"exec "CocCommand flutter.run -d ".g:flutter_default_device
		"CocCommand flutter.dev.openDevLog
	"elseif &filetype == 'go'
		"set splitbelow
		":sp
		":term go run .
	endif
endfunc

