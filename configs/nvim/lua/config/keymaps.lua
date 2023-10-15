-- Keymaps are automatically loaded on the VeryLazy event
-- Default keymaps that are always set: https://github.com/LazyVim/LazyVim/blob/main/lua/lazyvim/config/keymaps.lua
-- Add any additional keymaps here

local Util = require("lazyvim.util")

local map = Util.safe_keymap_set

--- J equals 5j, K equals 5k, move cursor faster
map("x", "J", "5j", { desc = "move 5 lines up" })
map("n", "J", "5j", { desc = "move 5 lines up" })
map("n", "K", "5k", { desc = "move 5 lines down" })
map("x", "K", "5k", { desc = "move 5 lines down" })

--- Q equals quit file, quit faster
map("n", "Q", ":q<CR>", { desc = "quit file" })
