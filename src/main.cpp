#include <string.h>
#include <ncurses.h>
#include <TerminalUI.h>

int main() {


  //  Initialize ncurses window
    InitializeNCurses();
 
  // Display Menu and Enable option toggle
    PrintMenu();
    int option = ToggleOptions();

  // Start Mode
    if (option == 1) {
      StartSHO();
    } else if (option == 2) {
      StartGBO();
    } else if (option == 3) {
      ShowInformation();
    }

    return 0;
}
