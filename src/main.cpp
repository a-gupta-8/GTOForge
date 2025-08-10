#include <string>
#include <ncurses.h>
#include <Terminal.h>

int main() {


  //  Initialize ncurses window
    initscr();              // Start ncurses mode
    noecho();               // Don't show typed input
    cbreak();               // Immediate input (no Enter needed)

  //   Banner
    printw("%s\n", GTOBanner());
    printw("%s\n", OptionMenu());
  //   Main Menu
    refresh();              // Update the screen with what we printed
    getch();                // Wait for a key press so we can see output

    endwin();               // End ncurses mode
    return 0;
}
