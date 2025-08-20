
#include <TerminalUI.h>
#include <algorithm>

const char* GTOForgeBanner() {
    static const std::string banner = R"(
_____________/\\\\\\\\\\\\__/\\\\\\\\\\\\\\\_____/\\\\\_______/\\\\\\\\\\\\\\\____/\\\\\_________/\\\\\\\\\_________/\\\\\\\\\\\\__/\\\\\\\\\\\\\\\________________
___________/\\\//////////__\///////\\\/////____/\\\///\\\____\/\\\///////////___/\\\///\\\_____/\\\///////\\\_____/\\\//////////__\/\\\///////////__________________
___________/\\\___________________\/\\\_______/\\\/__\///\\\__\/\\\____________/\\\/__\///\\\__\/\\\_____\/\\\____/\\\_____________\/\\\______________________________
___________\/\\\____/\\\\\\\_______\/\\\______/\\\______\//\\\_\/\\\\\\\\\\\___/\\\______\//\\\_\/\\\\\\\\\\\/____\/\\\____/\\\\\\\_\/\\\\\\\\\\\_______________________
____________\/\\\___\/////\\\_______\/\\\_____\/\\\_______\/\\\_\/\\\///////___\/\\\_______\/\\\_\/\\\//////\\\____\/\\\___\/////\\\_\/\\\///////__________________________
_____________\/\\\_______\/\\\_______\/\\\_____\//\\\______/\\\__\/\\\__________\//\\\______/\\\__\/\\\____\//\\\___\/\\\_______\/\\\_\/\\\___________________________________
______________\/\\\_______\/\\\_______\/\\\______\///\\\__/\\\____\/\\\___________\///\\\__/\\\____\/\\\_____\//\\\__\/\\\_______\/\\\_\/\\\_____________________________________
_______________\//\\\\\\\\\\\\/________\/\\\________\///\\\\\/_____\/\\\_____________\///\\\\\/_____\/\\\______\//\\\_\//\\\\\\\\\\\\/__\/\\\\\\\\\\\\\\\____________________________
_________________\////////////__________\///___________\/////_______\///________________\/////_______\///________\///___\////////////____\///////////////________________________________
    )";
  return banner.c_str();
}

const char* SHOOption() {
  static const std::string SHO = "Single Hand Optimizer";
  return SHO.c_str();
}

const char* GBOOption() {
  static const std::string GBO = "Game Based Optimizer";
  return GBO.c_str();
}

const char* InformationOption() {
  static const std::string Info = "Info";
  return Info.c_str();
}

void InitializeNCurses() {
    initscr();              // Start ncurses mode
    noecho();               // Don't show typed input
    cbreak();               // Immediate input (no Enter needed)
}

void PrintMenu() {
  //   Banner
    printw("%s\n", GTOForgeBanner());

  // Main Menu
    move(MenuStartPosY, MenuStartPosX);
    printw("%s\n", SHOOption());

    move(MenuStartPosY + 1, MenuStartPosX);
    printw("%s\n", GBOOption());

    move(MenuStartPosY + 2, MenuStartPosX);
    printw("%s\n", InformationOption());
    
    refresh();
}


int ToggleOptions() {
  // Highlight first option as current
    move(MenuStartPosY, MenuStartPosX);
    chgat(strlen(SHOOption()), A_REVERSE, 0, NULL);

  // Scroll through options logic
    int SelectedIndex = 1;
    int CharPressed = getch();
    while (true) {

      if (CharPressed == QUIT) {
        endwin();
        break;
      }

      if (CharPressed == '\n') {
        switch(SelectedIndex) {
          case 1:
            return 1;
          case 2:
            return 2;
          case 3:
            return 3;
          default:
            endwin();
            break;
        }
      }

      if (CharPressed == DOWN && SelectedIndex == 1) {
        SelectedIndex = 2;

        move(MenuStartPosY, MenuStartPosX);
        chgat(strlen(SHOOption()), A_NORMAL, 0, NULL);
        refresh();

        move(MenuStartPosY + 1, MenuStartPosX);
        chgat(strlen(GBOOption()), A_REVERSE, 0, NULL);
        refresh();
      }

      else if (CharPressed == DOWN && SelectedIndex == 2) {
        SelectedIndex = 3;

        move(MenuStartPosY + 1, MenuStartPosX);
        chgat(strlen(GBOOption()), A_NORMAL, 0, NULL);
        refresh();

        move(MenuStartPosY + 2, MenuStartPosX);
        chgat(strlen(InformationOption()), A_REVERSE, 0, NULL);
        refresh();
      }

      if (CharPressed == UP && SelectedIndex == 3) {
        SelectedIndex = 2;

        move(MenuStartPosY + 2, MenuStartPosX);
        chgat(strlen(InformationOption()), A_NORMAL, 0, NULL);
        refresh();

        move(MenuStartPosY + 1, MenuStartPosX);
        chgat(strlen(GBOOption()), A_REVERSE, 0, NULL);
        refresh();
      }

      else if (CharPressed == UP && SelectedIndex == 2) {
        SelectedIndex = 1;

        move(MenuStartPosY + 1, MenuStartPosX);
        chgat(strlen(GBOOption()), A_NORMAL, 0, NULL);
        refresh();

        move(MenuStartPosY, MenuStartPosX);
        chgat(strlen(SHOOption()), A_REVERSE, 0, NULL);
        refresh();
      }

      CharPressed = getch();

      refresh();
    }

    return 0;
}

void CreateSHOWindow() {
  WINDOW * CommandWindow = newwin(SIDE_WIN_HEIGHT, SIDE_WIN_WIDTH, SIDE_WIN_Y, SIDE_WIN_X);
  refresh();
  box(CommandWindow, 0, 0);
  wrefresh(CommandWindow);
  getch();

}
