#! /bin/bash

wikiPage="/media/HOME/ahacad/WORKSTATION/Working/#wiki"

cd $wikiPage
git add .
git commit -m `date +'%Y-%m-%d'`

date=`date +"%w"`
if [ $dat -eq 7 ]; then
    git push
fi

notePage="/media/H/a/W/Working/#notebooks"
cd $notePage
git add .
git commit -m `date +'%Y-%m-%d'`

date=`date +"%w"`
if [ $dat -eq 7 ]; then
    git push
fi
