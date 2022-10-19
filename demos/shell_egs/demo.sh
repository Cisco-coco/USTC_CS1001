#!/bin/bash
# use chmod +x demo.sh to make it executable
# run it with ./demo.sh
script=$0
echo ${PWD}
echo "Delteing script $script"
rm -f $script 
echo "Script deleted"