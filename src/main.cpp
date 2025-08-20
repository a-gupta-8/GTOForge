#include <TerminalUI.h>

int main() {

  //  Initialize ncurses window
    InitializeNCurses();
 
  // Display Menu and Enable option toggle
    PrintMenu();
    int option = ToggleOptions();

  // Start Mode
    if (option == 1) {

      CreateSHOWindow();
      // TODO
      // Split into 2 screens
      // 1 for display winow to display all players and chips stacks and community cards etc.. basically the board
      // 1 screen to take usr commands. (in this case have a options menu to abe abble to select usr actions)
    } else if (option == 2) {
    } else if (option == 3) {
    }

    return 0;
}
