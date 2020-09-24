" experiments
":nnoremap <leader>" viw<esc>a"<esc>bi"<esc>lel
:nnoremap <leader>' :tabe<cr>:term<cr> a

" terminal mode mapping 
:tnoremap <Esc> <C-\><C-n>

set wrap

filetype plugin on
set nocompatible

"
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
set termguicolors

" key maps
:nnoremap L J
:nnoremap H K
:nnoremap J 7j
:nnoremap K 7k

" leader
:let mapleader = "\\"

:nnoremap <space> viw 

" edit init.vim quickly
:nnoremap <leader>ev :vsplit $MYVIMRC<cr>
:nnoremap <leader>sv :source $MYVIMRC<cr>


" use Ctrl-s for saving
noremap W :update<CR>
noremap Q :q<CR>
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

"netrw
let g:netrw_banner = 0
let g:netrw_liststyle = 3
let g:netrw_browse_split = 4
let g:netrw_altv = 1
let g:netrw_winsize = 25
"augroup ProjectDrawer
  "autocmd!
  "autocmd VimEnter * :Vexplore
"augroup END
"map <F4> :Vexplore<CR>
"map <F5> <C-w>h
"map <F6> :q<CR>

" spell check
map <F7> :setlocal spell! spelllang=en,cjk<CR>
hi clear SpellBad
hi SpellBad cterm=underline
hi SpellBad gui=undercurl
hi SpellBad ctermfg=red ctermbg=black
hi SpellCap cterm=bold ctermfg=blue ctermbg=black


" Tab navigation like Firefox.
nnoremap <C-t>     :tabnew<CR>


" ####################################################3
"
" PLUGS
call plug#begin()

""" 1. file related
" fuzzy file finder
Plug 'junegunn/fzf.vim'

""" 2. typing productivity tools
" make table quickly in vim
Plug 'dhruvasagar/vim-table-mode'
"" multiple cursor modify
Plug 'terryma/vim-multiple-cursors'
" edit surrounding elements quickly
Plug 'tpope/vim-surround'
" easily align code by given texts
Plug 'junegunn/vim-easy-align'
" great companion for writing codes
Plug 'sirver/ultisnips'
" rainbow color brackets
Plug 'luochen1990/rainbow'
" easy comment 
Plug 'preservim/nerdcommenter'
" auto pair up 
Plug 'jiangmiao/auto-pairs'

""" 3. program info assisstance
" display the indentation levels
Plug 'Yggdroot/indentLine'
" tags for classes and functions
Plug 'liuchengxu/vista.vim'
" beautiful bar downside
Plug 'itchyny/lightline.vim'
" syntax checks for vim 
Plug 'vim-syntastic/syntastic'

""" 4. language specific tools
" vim LaTeX companion
Plug 'lervag/vimtex'
" generate table of contents for markdown easily
Plug 'mzlogin/vim-markdown-toc'
" vim wiki
Plug 'vimwiki/vimwiki'
" flutter
Plug 'dart-lang/dart-vim-plugin'
Plug 'thosakwe/vim-flutter'
" immediate color for html
"Plug 'gko/vim-coloresque'
Plug 'ap/vim-css-color'
" match html tags always
Plug 'valloric/MatchTagAlways'

""" 5. delicate little tool
" use sudo easily in vim
Plug 'lambdalisue/suda.vim'
" shows changes since last commit
Plug 'airblade/vim-gitgutter'
" amazing vim start screen
Plug 'mhinz/vim-startify'
" easily format your code
Plug 'Chiel92/vim-autoformat'
" line up texts easily
Plug 'godlygeek/tabular'
Plug 'MattesGroeger/vim-bookmarks'
" snippets 
Plug 'honza/vim-snippets'
"" do git inside vim
"Plug 'tpope/vim-fugitive'
"code debugger for vim
"Plug 'puremourning/vimspector'

""" 6. color schemes
Plug 'embark-theme/vim', { 'as': 'embark' }
" dracula
"Plug 'dracula/vim', { 'name': 'dracula' }

""" 7. this thing is awesome
Plug 'neoclide/coc.nvim', {'branch': 'release'}

"multiple tabs for vim
"Plug 'mg979/vim-xtabline'
" great language autocomplete
"Plug 'weirongxu/coc-explorer'
"" undo history in tree style
"Plug 'mbbill/undotree'
"Plug 'tpope/vim-fugitive'
"" 
"Plug 'svermeulen/vim-subversive'
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

"colorscheme dracula
"colorscheme embark

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
let g:UltiSnipsExpandTrigger = '<C-y>'
let g:UltiSnipsJumpForwardTrigger = '<C-y>'
let g:UltiSnipsJumpBackwardTrigger = '<s-C-y>'
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

xmap ga <Plug>(EasyAlign)
nmap ga <Plug>(EasyAlign)

" == suda
cnoreabbrev sudowrite w suda://%


" == nerdcommenter

" == vim rainbow

let g:rainbow_active = 1 "set to 0 if you want to enable it later via :RainbowToggle
let lightcolors =  ['lightblue', 'cyan', 'lightyellow', 'darkyellow', 'magenta', 'lightred', 'yellow', 'white']
let darkcolors = ['DarkBlue', 'Magenta', 'Black', 'Red', 'DarkGray', 'DarkGreen', 'DarkYellow']
" 'royalblue3', 
" ['darkorange3', 'seagreen3', 'firebrick']
let g:rainbow_conf = {
\	'guifgs': lightcolors,
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

" == vimtex
let g:tex_flavor = 'latex'


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

" == COC
" coc extensions
let g:coc_global_extensions = [
    \ 'coc-explorer',
    \ 'coc-actions',
    \ 'coc-vimlsp',
    \ 'coc-python', 
    \ 'coc-tsserver',
    \ 'coc-flutter-tools',
    \ 'coc-marketplace']

" use <TAB> to choose the completion you want
inoremap <silent><expr> <TAB>
      \ pumvisible() ? "\<C-n>" :
      \ <SID>check_back_space() ? "\<TAB>" :
      \ coc#refresh()
inoremap <expr><S-TAB> pumvisible() ? "\<C-p>" : "\<C-h>"

function! s:check_back_space() abort
  let col = col('.') - 1
  return !col || getline('.')[col - 1]  =~# '\s'
endfunction

" trigger completion by <c-o>
inoremap <silent><expr> <c-o> coc#refresh()

" use cr to complete
if exists('*complete_info')
  inoremap <expr> <cr> complete_info()["selected"] != "-1" ? "\<C-y>" : "\<C-g>u\<CR>"
else
  inoremap <expr> <cr> pumvisible() ? "\<C-y>" : "\<C-g>u\<CR>"
endif

" find warnings with [g
nmap <silent> [g <Plug>(coc-diagnostic-prev)
nmap <silent> ]g <Plug>(coc-diagnostic-next)

" GoTo code navigation.
nmap <silent> gd <Plug>(coc-definition)
nmap <silent> gy <Plug>(coc-type-definition)
nmap <silent> gi <Plug>(coc-implementation)
nmap <silent> gr <Plug>(coc-references)

" use <leader>h to shell documentation
nnoremap <silent> <leader>h :call <SID>show_documentation()<CR>
function! s:show_documentation()
  if (index(['vim','help'], &filetype) >= 0)
    execute 'h '.expand('<cword>')
  else
    call CocActionAsync('doHover')
  endif
endfunction

" Remap for do codeAction of selected region
function! s:cocActionsOpenFromSelected(type) abort
  execute 'CocCommand actions.open ' . a:type
endfunction
xmap <silent> <leader>a :<C-u>execute 'CocCommand actions.open ' . visualmode()<CR>
nmap <silent> <leader>a :<C-u>set operatorfunc=<SID>cocActionsOpenFromSelected<CR>g@




" == match tag always
let g:mta_filetypes = {
    \ 'html' : 1,
    \ 'xhtml' : 1,
    \ 'xml' : 1,
    \ 'jinja' : 1,
    \ 'javascript' : 1,
    \}
let g:mta_use_matchparen_group = 0
let g:mta_set_default_matchtag_color = 0
highlight MatchTag ctermfg=black ctermbg=lightblue guifg=black guibg=lightblue

let g:lightline = {
      \ 'colorscheme': 'embark',
      \ }




" #########################################################3
"
" Functions

" Compile function
noremap r :call CompileRunGcc()<CR>
func! CompileRunGcc()
	exec "w"
	if &filetype == 'c'
        set splitbelow
		exec "!clear && gcc % -o %<"
        :sp
		"exec "!time ./%<"
		":res -15
		:term ./%<
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
    elseif &filetype == 'go'
        set splitbelow
        :sp
        :term go run %
    elseif &filetype == 'scss'
        exec "!clear && sass % fdxk/%<.css && ./useme.sh"
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

