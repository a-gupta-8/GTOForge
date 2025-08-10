#include <string>
#include <ncurses.h>
int main() {


  //  Initialize ncurses window
    initscr();              // Start ncurses mode
    noecho();               // Don't show typed input
    cbreak();               // Immediate input (no Enter needed)

  //   Banner
    printw("%s\n", GTOBanner());

    WINDOW *Wind = newwin(4,30, 20, 10);
    refresh();

    wprintw(Wind, "HELLO");
    wrefresh(Wind);

  //   Main Menu
    refresh();              // Update the screen with what we printed
    getch();                // Wait for a key press so we can see output

    endwin();               // End ncurses mode
    return 0;
}
