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

--- F equals save without autoformatting, etc.
map("n", "F", ":noa w<CR>")

map("n", "<leader>nd", "<cmd>Noice disable<cr>", { desc = "Disable Noice" })
map("n", "<leader>ne", "<cmd>Noice enable<cr>", { desc = "Enable Noice" })
map("n", "<leader>nl", "<cmd>Noice last<cr>", { desc="Get last Noice message" })
map("n", "<leader>nh", "<cmd>Noice history", { desc = "Get Noice history" })
map("n", "<leader>ni", "<cmd>Noice dismiss<cr>", { desc = "Dismiss Noice messages" })
