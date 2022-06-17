# CODE DOCUMENTATION

## File structure

### askPlayerInfo.cpp

This file handles the asking of basic information from the player. These are name and place of birth. They both use reference parameters to transmit information to main.cpp for later usage. Neither of the functions returns any values.

### main.cpp

This file takes care of the whole program. It is run when the game starts and its funtion is to run code and functions from other, separate code files. Main also takes care of exiting the program, either by crashing it on purpose where necessary (Ctrl + F "EXIT_FAILURE") or closing it once the execution has finished (Ctrl + F "EXIT_SUCCESS"). 