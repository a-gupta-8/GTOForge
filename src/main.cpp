#include <TerminalUI.h>

int main() {

  //  Initialize ncurses window
    InitializeNCurses();
 
  // Display Menu and Enable option toggle
    PrintMenu();
    int option = ToggleOptions();

  // Start Mode
    if (option == 1) {

      WINDOW* {CmdWin, MainWin} = CreateSHOWindow();
      


    } else if (option == 2) {
    } else if (option == 3) {
    }

    return 0;
}
