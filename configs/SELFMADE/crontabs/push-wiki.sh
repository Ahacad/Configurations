#! /bin/bash

wikiPage="/media/HOME/ahacad/WORKSTATION/Working/-learn/#wiki"

cd $wikiPage
git add .
git -c commit.gpgsign=false commit -m `date +'%Y-%m-%d'`

date=`date +"%w"`
if [ $dat -eq 7 ]; then
    git push
fi

notePage="/media/HOME/ahacad/WORKSTATION/Working/-learn/#notebooks"
cd $notePage
git add .
git -c commit.gpgsign=false commit -m `date +'%Y-%m-%d'`

date=`date +"%w"`
if [ $dat -eq 7 ]; then
    git push
fi

learnPage="/media/HOME/ahacad/WORKSTATION/Working/-learn/#learning"

cd $learnPage
git add .
git -c commit.gpgsign=false commit -m `date +'%Y-%m-%d'`

date=`date +"%w"`
if [ $dat -eq 7 ]; then
    git push
fi
