#! /bin/bash
# NOTE!!! BASH is case and space sensitive...

# ECHO COMMAND  
# echo Hello world!

# variables
# uppercase by convetion, can start with letters, numbers and underscores
NAME="Romeo"
SURNAME="fR"
# echo "My name is ${NAME}"

# get user input
# read -p "Enter your surname: " SURNAME
echo "Hello $NAME, nice to meeet you!"

# if statment
# if [ "$SURNAME" == "Mamphekgo" ]
# then
#     echo "Your surname is Mamphekgo"
# fi

# if else
if [ "$SURNAME" == "Mamphekgo" ]
then
    echo "Your surname is Mamphekgo"
elif [ "$SURNAME" == "Jack" ]
then
    echo "Your surname is Jack"
else
    echo "Your surname is NEITHER"
fi