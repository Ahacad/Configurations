-- Options are automatically loaded before lazy.nvim startup
-- Default options that are always set: https://github.com/LazyVim/LazyVim/blob/main/lua/lazyvim/config/options.lua
-- Add any additional options here

local opt = vim.opt

opt.relativenumber = false -- absolute linu numbers
opt.tabstop = 4 --  number of space tabs count for
opt.shiftwidth = 4 -- size of a indent
opt.softtabstop = 4 -- number of columns the cursor moves right when pressing tab
opt.wrap = true -- wrap lines
vim.cmd("set guicursor=a:block") -- always use block in typing, block is better :)
