#pragma once

#include <ncurses.h>
#include <string>

constexpr int MenuStartPosX = 30;
constexpr int MenuStartPosY = 15;
constexpr char QUIT = 'q';
constexpr char UP = 'k';
constexpr char DOWN = 'j';

const char* GTOForgeBanner();

const char* SHOOption();

const char* GBOOption();

const char* InformationOption();

void StartSHO();

void StartGBO();

void ShowInformation();

void InitializeNCurses();

void PrintMenu();

int ToggleOptions();
