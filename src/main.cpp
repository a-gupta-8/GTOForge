#include <TerminalUI.h>

int main() {

  //  Initialize ncurses window
    InitializeNCurses();
 
  // Display Menu and Enable option toggle
    PrintMenu();
    std::vector<int> MenuOptionSizes = {static_cast<int>(strlen(SHOOption())), static_cast<int>(strlen(GBOOption())), static_cast<int>(strlen(InformationOption()))};
    int option = ToggleOptions(MenuStartPosY, MenuStartPosX, MenuOptionSizes, stdscr);


  // Start Mode
    if (option == 1) {

      // WINDOW* {CmdWin, MainWin} = CreateSHOWindow();
      


    } else if (option == 2) {
    } else if (option == 3) {
    }

    return 0;
}
