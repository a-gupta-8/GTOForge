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


int ToggleOptions(int startPosY, int startPosX, const std::vector<int>& optionsLen, WINDOW* window) {
  // Highlight first option as current
    wmove(window, startPosY, startPosX);
    wchgat(window, optionsLen[0], A_REVERSE, 0, NULL);

  // Scroll through options logic
    int SelectedIndex = 0;
    int CharPressed = getch();
    while (true) {

      if (CharPressed == QUIT) {
        endwin();
        break;
      }

      if (CharPressed == '\n') {
        return SelectedIndex;
      }

      if (CharPressed == DOWN && SelectedIndex != optionsLen.size()-1) {
        wmove(window, startPosY+SelectedIndex, startPosX);
        wchgat(window, optionsLen[SelectedIndex], A_NORMAL, 0, NULL);

        SelectedIndex += 1;

        wmove(window, startPosY+SelectedIndex, startPosX);
        wchgat(window, optionsLen[SelectedIndex], A_REVERSE, 0, NULL);
      }
      else if (CharPressed == UP && SelectedIndex != 0) {
        wmove(window, startPosY+SelectedIndex, startPosX);
        wchgat(window, optionsLen[SelectedIndex], A_NORMAL, 0, NULL);

        SelectedIndex -= 1;

        wmove(window, startPosY+SelectedIndex, startPosX);
        wchgat(window, optionsLen[SelectedIndex], A_REVERSE, 0, NULL);
      }

      refresh();

      CharPressed = getch();
    }

    return -1;
}

std::pair<WINDOW*, WINDOW*> CreateSHOWindow() {
  // Create Connector
  move(MenuStartPosY, MenuStartPosX + strlen(SHOOption()));
  printw("--------------------------------------------------------");

  WINDOW * CommandWindow = newwin(SIDE_WIN_HEIGHT, SIDE_WIN_WIDTH, SIDE_WIN_Y, SIDE_WIN_X);
  WINDOW * MainViewWindow = newwin(MAIN_WIN_HEIGHT, MAIN_WIN_WIDTH, MAIN_WIN_Y, MAIN_WIN_X);
  refresh();

  box(CommandWindow, 0, 0);
  box(MainViewWindow, 0, 0);
  wrefresh(CommandWindow);
  wrefresh(MainViewWindow);

  WINDOW * CmdWin = newwin(SIDE_WIN_HEIGHT-2, SIDE_WIN_WIDTH-2, SIDE_WIN_Y+1, SIDE_WIN_X+1);
  WINDOW * MainWin = newwin(MAIN_WIN_HEIGHT-2, MAIN_WIN_WIDTH-2, MAIN_WIN_Y+1, MAIN_WIN_X+1);

  return {CmdWin, MainWin};
}

const char* CMDOptions() {
  static const std::string CMDTitle = "Set Game State before starting\noptimizer:";
  return CMDTitle.c_str();
}

const char* CMDSetBoard() {
  static const std::string CMDBoard = "  - Set Board";
  return CMDBoard.c_str();
}

const char* CMDActionOn() {
  static const std::string CMDActionOn = "  - First To Act";
  return CMDActionOn.c_str();
}

const char* CMDHand() {
  static const std::string CMDHand = "  - Set Hero Hand";
  return CMDHand.c_str();
}

const char* CMDPotSize() {
  static const std::string CMDPotSize = "  - Set Pot Size";
  return CMDPotSize.c_str();
}

const char* CMDBetSize() {
  static const std::string CMDBetSize = "  - Set Bet Size";
  return CMDBetSize.c_str();
}


void SHOGameState(WINDOW* CMDWINDOW) {
  refresh();

  wprintw(CMDWINDOW, "%s\n", CMDOptions());
  wprintw(CMDWINDOW, "%s\n", CMDSetBoard());
  wprintw(CMDWINDOW, "%s\n", CMDActionOn());
  wprintw(CMDWINDOW, "%s\n", CMDHand());
  wprintw(CMDWINDOW, "%s\n", CMDPotSize());
  wprintw(CMDWINDOW, "%s\n", CMDBetSize());
  wrefresh(CMDWINDOW);

  const std::vector<int> ba = {5, 5, 5, 5, 5};
  ToggleOptions(2, 3, ba, CMDWINDOW);
  getch();

}
