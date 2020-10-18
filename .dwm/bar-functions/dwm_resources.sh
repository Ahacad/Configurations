

dwm_resources() {
        MEMUSED=$(free -h | awk '(NR == 2) {print $3}')
        MEMTOT=$(free -h | awk '(NR == 2) {print $2}')
        STOUSED=$(df -h | grep '/$' | awk '{print $3}')
        STOTOT=$(df -h | grep '/$' | awk '{print $2}')
        STOPER=$(df -h | grep '/$' | awk '{print $5}')
        EXTRAUSED=$(df -h | grep 'Seagate' | awk '{print $3}')
        EXTRATOT=$(df -h | grep 'Seagate' | awk '{print $2}')
        EXTRAPER=$(df -h | grep 'Seagate' | awk '{print $5}')
        EXTRAUSEDD=$(df -h | grep 'HOME' | awk '{print $3}')
        EXTRATOTD=$(df -h | grep 'HOME' | awk '{print $2}')
        EXTRAPERD=$(df -h | grep 'HOME' | awk '{print $5}')
        TEMPER=$(sensors | awk '/^Core 0/ {print $3}')
        printf "%s" "$SEP1"
        if [ "$IDENTIFIER" = "unicode"  ]; then
            printf "💻 %s/%s 🌡%s 💾 %s/%s: %s 💾 %s/%s: %s 💾 %s/%s: %s" "$MEMUSED" "$MEMTOT" "$TEMPER" "$STOUSED" "$STOTOT" "$STOPER" "$EXTRAUSED" "$EXTRATOT" "$EXTRAPER" "$EXTRAUSEDD" "$EXTRATOTD" "$EXTRAPERD"
        else 
            printf "MEM %s/%s STO %s/%s: %s" "$MEMUSED" "$MEMTOT" "$STOUSED" "$STOTOT" "$STOPER"
        fi
        printf "%s\n" "$SEP2"
       
}
