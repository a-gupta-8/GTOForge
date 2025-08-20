#pragma once

#include <ncurses.h>
#include <string>
#include <utility>

constexpr int MenuStartPosX = 30;
constexpr int MenuStartPosY = 15;
constexpr char QUIT = 'q';
constexpr char UP = 'k';
constexpr char DOWN = 'j';
constexpr int SIDE_WIN_HEIGHT = 34;
constexpr int SIDE_WIN_WIDTH = 40;
constexpr int SIDE_WIN_Y = 15;
constexpr int SIDE_WIN_X = 65;
constexpr int MAIN_WIN_HEIGHT = 34;
constexpr int MAIN_WIN_WIDTH = 90; 
constexpr int MAIN_WIN_Y = 15;
constexpr int MAIN_WIN_X = 107; // SIDE_WIN_X position + SIDE_WIN_WIDTH + 2 "--" overended connecters

void InitializeNCurses();

void PrintMenu();

int ToggleOptions();

const char* GTOForgeBanner();

const char* SHOOption();

const char* GBOOption();

const char* InformationOption();

std::pair<WINDOW*, WINDOW*> CreateSHOWindow();

void SHOGameState(WINDOW* CMDWINDOW);

