# The Game of Life - a Command Line Game

This project is a remake of me and my friends' The Game Of Life ([Elämän Peli](https://github.com/ehkuitti/elaman-peli-java)) school game project. That project
was a school project for the course "The Basics of Programming" I took in my school, Laurea University of Applied Sciences. The idea of the original project was to
be a "game of life". The player plays through different stages of life, like birth, going to schools and taking part in various exams. There are also random
accidents that can lead to the player character dying. Basically its' purporse is to simulate life in a fun yet simple way. 

The reason I started the rewriting is because of taking a C++ course from Tampere University's "open" course offering (Finnish: avoin yliopisto).

## Implementation

This project is made with Qt Creator 5.12 and C++17 using MinGW. Recently I've started to move over to Linux Mint for faster compiling times.

## Improvements

This game is written from ground up using C++17 so the performance will be slighly improved. There are also certain improvements on top of the original. For instance,
this version always validates the user's input, e.g. if the required input type is integers, the program will produce an error if letters are found. It also has 
some small improvements, like randomly generated welcome messages using `switch` and `srand`. The C++ version also has improved install and playing instructions
which are read using `std::ifstream` from a text file in the build directory. 

## Additional notes

The commit messages are primarily in Finnish for now due to it being my mother tongue. I'm considering changing the commit language to English. This is to make it easier for international developers to follow what the project is up to, in case more people become interested in it.
