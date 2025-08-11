#include <string.h>
#include <ncurses.h>
#include <TerminalUI.h>

int main() {


  //  Initialize ncurses window
    InitializeNCurses();
 
  // Display Menu and Enable option toggle
    PrintMenu();
    ToggleOptions();

    return 0;
}
