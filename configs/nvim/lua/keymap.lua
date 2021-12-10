local map = require('utils').map

-- cursor movements
map('n', 'J', '5j')
map('x', 'J', '5j')
map('n', 'K', '5k')
map('x', 'K', '5k')

map('n', 'Q', ':q<CR>')
map('v', 'Y', '"+y')
map("n", "L", "g_")
map("n", "H", "^")
map("x", "L", "g_")
--map("i", "<C-l>", "<ESC>A")
map("x", "H", "^")
map("n", "X", "Vx")
map("n", "W", ":update<CR>")
map("n", "F", ":noa w<CR>")
map("n", "B", "5b")
--map("n", "<C-z>", "u")
map("n", "<", "<<")
map("n", ">", ">>")
map("x", "<", "<gv")
map("x", ">", ">gv")

map("n", "-", "N")
map("n", "=", "n")
--map("n", ";", ":")

--map("n", "<C-T>h", ":tabprevious<CR>")
--map("n", "<C-T>l", ":tabnext<CR>")
--map("n", "<C-T>n", ":tabnew<CR>")
map("n", "<C-left>", "gT")
map("n", "<C-right>", "gt")
map("n", "<C-S-left>", ":tabm -1<CR>")
map("n", "<C-S-right>", ":tabm +1<CR>")



vim.g.mapleader = "\\"

map("x", "<LEADER>y", [["+y]])

map("n", "<C-p>", [["+p]])

map("n", "<ESC>", ":nohlsearch<CR>")

map("i", "<A-;>", "<ESC>")

map("n", "<up>", ":res +5<CR>")
map("n", "<down>", ":res -5<CR>")
map("n", "<left>", ":vertical resize-5<CR>")
map("n", "<right>", ":vertical resize+5<CR>")

-- center line
map("i", "<C-c>", "<ESC>zzi")

-- nnn
map('n', '<Leader>o', ':NnnPicker %:p:h<CR>')

-- EasyAlign
map("v", "<leader>e", ":EasyAlign<CR>")

-- vim-go
map('n', 'got', ':GoTestFunc<CR>')
map('n', 'gor', ':GoRun<CR>')

-- nvim-tree
map("n", "<space><space>", ":CocCommand explorer<CR>")
map("n", "<space>r", ":NvimTreeRefresh<CR>")

map("n", "<space>v", ":Vista<CR>")

map("n", "<C-\\>", [[:FTermToggle<CR>]])
map("t", "<C-\\>", [[<C-\><C-n>:FTermToggle<CR>]])
map("t", "<C-n>", [[<C-\><C-n>]])

map("n", "<LEADER>tf", [[:lua require('telescope.builtin').find_files{}<CR>]])
map("n", "<LEADER>tg", [[:lua require('telescope.builtin').live_grep{}<CR>]])

map("n", "<LEADER>ng", [[<CMD>Neogit<CR>]])
map("n", "<LEADER>lg", [[<CMD>LazygitToggle<CR>]])

-- anyjump
map("n", "<LEADER>j", ":AnyJump<CR>")

vim.cmd(":noremap <silent> <Leader>vs :<C-u>let @z=&so<CR>:set so=0 noscb<CR>:bo vs<CR>Ljzt:setl scb<CR><C-w>p:setl scb<CR>:let &so=@z<CR>")

