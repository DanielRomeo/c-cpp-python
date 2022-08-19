#! /bin/bash

# ECHO COMMAND  
echo Hello world!

# variables
# uppercase by convetion, can start with letters, numbers and underscores
NAME="ROMEO"
echo "My name is ${NAME}"

# get user input
read -p "Enter your surname: " SURNAME
echo "Hello $SURNAME, nice to meeet you!"

# if statment
# if ["$SURNAME" == "Mamphekgo"]
# then
#     echo "Your surname is Mamphekgo"
# fi