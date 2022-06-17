# The Game of Life - a Command Line Game

## Crucial info
The project was restarted on June 14th, 2022, please see ([commit 481449d])(https://github.com/ehkuitti/the-game-of-life-cpp/commit/481449d9aa291a6ebd9417e44ad5019b4fa9e0a6). **Do not revert beyond this point. This WILL cause problems because of a different project structure.**

## About the project

This project is a remake of me and my friends' The Game Of Life ([Elämän Peli](https://github.com/ehkuitti/elaman-peli-java)) school game project. That project
was a school project for the course "The Basics of Programming" I took in my school, Laurea University of Applied Sciences. The idea of the original project was to
be a "game of life". The player plays through different stages of life, like birth, going to schools and taking part in various exams. There are also random
accidents that can lead to the player character dying. Basically its' purporse is to simulate life in a fun yet simple way. 

The reason I started the rewriting is because of taking a C++ course from Tampere University's "open" course offering (Finnish: avoin yliopisto).

## Implementation

This project is made with Qt Creator 7.0.2 and C++17 using MinGW.

## Improvements

This game is written from the ground up using C++17, so the performance will be slighly improved compared to the original Java implementation. There are also certain improvements on top of the original. For instance,
this version always validates the user's input, e.g. if the required input type is an integer, the program will print an error if the input contains letters. It also has 
some minor improvements, like randomly generated welcome messages using `switch` and `srand`. The C++ version also comes with installation and playing instructions, which are read using `std::ifstream` from a text file within the build directory. 

## Additional notes

The project language was changed to English from Finnish in June 2022. Please note, however, that since I'm Finnish, my English isn't perfect for it not being my mother tongue. If you notice some errors and/or grammar mistakes in here in GitHub or in the code itself, please don't hesitate to 
