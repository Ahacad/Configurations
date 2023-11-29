return {

  -- tokyonight
  {
    "folke/tokyonight.nvim",
    lazy = true,
    opts = {
      style = "moon",
      transparent = false,
      styles = {
        sidebars = "transparent",
      },
    },
  },

  {
    "rebelot/kanagawa.nvim",
    lazy = true,
    opts = {
      transparent = true,
    },
  },

  {
    "LazyVim/LazyVim",
    opts = {
      colorscheme = "tokyonight",
    },
  },
}
