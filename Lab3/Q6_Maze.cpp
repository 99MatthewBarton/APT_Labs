#include <iostream>

#define ROWS   4
#define COLS   5

void readMaze(char maze[ROWS][COLS]);

int main (void) {
   char maze[ROWS][COLS] = {};

   readMaze(maze);
   std::cout << maze[0][0] << std::endl;

   return EXIT_SUCCESS;
}

void readMaze(char maze[ROWS][COLS]) {
   // TODO
   maze[0][0] = '?';
}

/*    12345
    1 ===S=
    2 =...=
    3 =.=.=
    4 =E===

    S is at (4, 1)
    E is at (2, 4)
 */