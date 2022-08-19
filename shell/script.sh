#! /bin/bash
# NOTE!!! BASH is case and space sensitive...

# ECHO COMMAND  
# echo Hello world!

# variables
# uppercase by convetion, can start with letters, numbers and underscores
NAME="Romeo"
SURNAME="Mamphekgo"
# echo "My name is ${NAME}"

# get user input
# read -p "Enter your surname: " SURNAME
echo "Hello $SURNAME, nice to meeet you!"

# if statment
# if [ "$SURNAME" == "Mamphekgo" ]
# then
#     echo "Your surname is Mamphekgo"
# fi

# if else
if [ "$SURNAME" == "Mamphekgo" ]
then
    echo "Your surname is Mamphekgo"
else
    echo "Your surname is not Mamphekgo"
fi