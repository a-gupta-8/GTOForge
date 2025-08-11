#pragma once

#include <ncurses.h>
#include <string>

constexpr int MenuStartPosX = 30;
constexpr int MenuStartPosY = 15;

const char* GTOForgeBanner();

const char* SHOOption();

const char* GBOOption();

const char* InformationOption();

void InitializeNCurses();

void PrintMenu();

void ToggleOptions();
