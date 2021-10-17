#!/bin/bash
read input

case $input in 
[nN]) echo "NO" ;;
[yY]) echo "YES";;
*) echo "Invalid option. Only enter 'y' or 'n' [case insensitive]";;
  
esac