#pragma once

#include <ncurses.h>
#include <string>

constexpr int MenuStartPosX = 30;
constexpr int MenuStartPosY = 15;
constexpr char QUIT = 'q';
constexpr char UP = 'k';
constexpr char DOWN = 'j';
constexpr int SIDE_WIN_HEIGHT = 34;
constexpr int SIDE_WIN_WIDTH = 40;
constexpr int SIDE_WIN_Y = 15;
constexpr int SIDE_WIN_X = 65;

void InitializeNCurses();

void PrintMenu();

int ToggleOptions();

const char* GTOForgeBanner();

const char* SHOOption();

const char* GBOOption();

const char* InformationOption();


