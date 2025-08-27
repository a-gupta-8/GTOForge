#include <TerminalUI.h>

int main() {

  //  Initialize ncurses window
    InitializeNCurses();
 
  // Display Menu and Enable option toggle
    PrintMenu();
    std::vector<int> MenuOptionSizes = {static_cast<int>(strlen(SHOOption())), static_cast<int>(strlen(GBOOption())), static_cast<int>(strlen(InformationOption()))};
    int option = ToggleOptions(MenuStartPosY, MenuStartPosX, MenuOptionSizes, stdscr);

  // Start Mode
    if (option == 0) {
      GameState SHOState;
      auto [CmdWin, MainWin] = CreateSHOWindow();
      SHOGameState(CmdWin, SHOState);

    } else if (option == 1) {
    } else if (option == 2) {
    }

    return 0;
}
