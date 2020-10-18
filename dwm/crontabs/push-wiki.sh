#! /bin/bash

wikiPage="/media/HOME/ahacad/WORKSTATION/Working/#wiki"

cd $wikiPage
git add .
git commit -m `date +'%Y-%m-%d'`
