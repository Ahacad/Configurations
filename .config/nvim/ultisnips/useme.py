import os

path = "/home/ahacad/Workstation/Prepared/Configurations/config/html.snippets"

with open(path, 'a') as fil:
    for i in range(1, 7):
        fil.write("snippet h" + str(i) + "\n    <h" + str(i) + ">$1</h" 
                + str(i) + ">$0\nendsnippet\n\n" 
                + "snippet h" + str(i) + ".\n    <h" + str(i) + " class=\"$1\">$2</h"
                + str(i) + ">$0\nendsnippet\n\n"
                + "snippet h" + str(i) + "#\n    <h" + str(i) + " id=\"$1\">$2</h"
                + str(i) + ">$0\nendsnippet\n\n")
                



