#include <iostream>
using namespace std;

const int WIDTH = 5;
const int HEIGHT = 5;

// Maze representation: 0 - Open path, 1 - Wall, 2 - Solution path
int maze[HEIGHT][WIDTH] = {
    {0, 1, 0, 0, 0},
    {0, 1, 0, 1, 0},
    {0, 0, 0, 1, 0},
    {0, 1, 1, 1, 0},
    {0, 0, 0, 0, 0}
};

// Function to print the maze with solution path
void printMaze() {
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            if (maze[i][j] == 1)
                cout << "# ";  // Wall
            else if (maze[i][j] == 2)
                cout << ". ";  // Solution path
            else
                cout << "  ";  // Open path
        }
        cout << endl;
    }
}

// Recursive function to solve the maze
bool solveMaze(int x, int y) {
    // Base cases
    if (x < 0 || x >= HEIGHT || y < 0 || y >= WIDTH || maze[x][y] == 1 || maze[x][y] == 2)
        return false;

    // Goal check
    if (x == HEIGHT - 1 && y == WIDTH - 1) {
        maze[x][y] = 2;
        return true;
    }

    // Mark this cell as part of the solution path
    maze[x][y] = 2;

    // Move in each direction (down, right, up, left)
    if (solveMaze(x + 1, y) || solveMaze(x, y + 1) || solveMaze(x - 1, y) || solveMaze(x, y - 1))
        return true;

    // Backtrack if path is unsuccessful
    maze[x][y] = 0;
    return false;
}

int main() {
    // Start solving from the top-left corner
    if (solveMaze(0, 0)) {
        cout << "Path found:\n";
    } else {
        cout << "No path found.\n";
    }
    printMaze();  // Display the maze with the solution path
    return 0;
}
