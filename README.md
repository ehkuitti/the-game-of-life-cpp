# The Game of Life - a Command Line Game

This project is a remake of me and my friends' The Game Of Life ([Elämän Peli](https://github.com/ehkuitti/elaman-peli-java)) school game project. That project
was a school project for the course "The Basics of Programming" I took in my school, Laurea University of Applied Sciences. The idea of the original project was to
be a "game of life". The player plays through different stages of life, like birth, going to schools and taking part in various exams. There are also random
accidents that can lead to the player character dying. Basically its' purporse is to simulate life in a fun yet simple way. 

The reason I started the rewriting is because of taking a C++ course from Tampere University's "open" course offering (Finnish: avoin yliopisto).

## Implementation

This project is made with Qt Creator 5.12 and C++17 using MinGW. Recently I've started to move over to Linux Mint for faster compile times.

## Improvements

This game is written from the ground up using C++17, so the performance will be slighly improved. There are also certain improvements on top of the original. For instance,
this version always validates the user's input, e.g. if the required input type is an integer, the program will print an error if the input contains letters. It also has 
some minor improvements, like randomly generated welcome messages using `switch` and `srand`. The C++ version also comes with installation and playing instructions, which are read using `std::ifstream` from a text file within the build directory. 

## Additional notes

The commit messages are mainly in Finnish, for now, due to it being my mother tongue. I'm considering changing the commit language to English in future releases. This is to make it easier for international developers to follow what the project is up to, in case of more people becoming interested in it.
