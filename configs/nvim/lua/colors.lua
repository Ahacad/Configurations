-- theme
vim.opt.termguicolors=true
vim.opt.background="dark"
-- Available theme value:
-- "ayu", "kanagawa", "deus"
local theme = "ayu"

local function ayu_setup()
  require('ayu').setup({
      mirage = true,
      overrides = {},
  })
end

local function deus_setup()
  vim.g.deus_background = "hard"
end

local function kanagawa_setup()
  require('kanagawa').setup({
      undercurl = true,           -- enable undercurls
      commentStyle = "italic",
      functionStyle = "bold",
      keywordStyle = "italic",
      statementStyle = "bold",
      typeStyle = "NONE",
      variablebuiltinStyle = "italic",
      specialReturn = true,       -- special highlight for the return keyword
      specialException = true,    -- special highlight for exception handling keywords
      transparent = false,        -- do not set background color
      colors = {},
      overrides = {},
  })
end

local function github_setup()
end

local theme_opt = {
  ["ayu"] = ayu_setup,
  ["deus"] = deus_setup,
  ["kanagawa"] = kanagawa_setup,
  ["github"] = github_setup,
}

theme_opt[theme]()

vim.cmd("colorscheme "..theme)
vim.cmd("hi Normal guibg=NONE ctermbg=NONE") -- transparent background
vim.cmd("let g:markdown_fenced_languages = ['rust', 'python', 'cpp', 'c', 'javascript', 'typescript']") -- syntax highlighting for fenced code blocks

vim.cmd("hi DiffAdd    gui=none guifg=None guibg=#46954a ctermbg=None ctermfg=None")
vim.cmd("hi DiffChange gui=none guifg=None guibg=#283628 ctermbg=None ctermfg=None")
vim.cmd("hi DiffDelete gui=bold guifg=None guibg=#e5534b ctermbg=None ctermfg=None")
vim.cmd("hi DiffText   gui=none guifg=None guibg=#6f6585 ctermbg=None ctermfg=None")
