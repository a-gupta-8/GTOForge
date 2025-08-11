#include <string>
#include <ncurses.h>
#include <TerminalUI.h>

int main() {


  //  Initialize ncurses window
    initscr();              // Start ncurses mode
    noecho();               // Don't show typed input
    cbreak();               // Immediate input (no Enter needed)
  
    PrintMenu();
    refresh();              // Update the screen with what we printed
    getch();                // Wait for a key press so we can see output

  // End ncurses and Program
    endwin();               // End ncurses mode
    return 0;
}
