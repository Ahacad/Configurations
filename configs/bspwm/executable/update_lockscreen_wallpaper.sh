folder="/media/HOME/ahacad/WORKSTATION/Working/-working/#wallpaper"
subfolder="painters"
while true
do
    rand=$(ls "${folder}/${subfolder}" | shuf -n 1);
    echo ${rand}
    betterlockscreen -u "${folder}/${subfolder}/${rand}"
    sleep 20m
done
