CommitMessage=`date +'%Y%m%d-%H:%M:%S'`"-backup"
cd "/home/ahacad/Logseq" || exit
git add .
git -c commit.gpgsign=false commit -m "$CommitMessage" --author="ahacad-bot <bot@ahacad.cool>"
git push
