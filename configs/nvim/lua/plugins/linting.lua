return {
    {
        "mfussenegger/nvim-lint",
        opts = {
            linters_by_ft = {
                javascript = { "eslint" },
                python = { "pylint" },
                c = { "clangtidy" },
                cpp = { "clangtidy" },
            }
        }
    }
}

