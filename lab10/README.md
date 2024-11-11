# Recursive Maze Solver

## Project Overview

This project is a recursive maze solver built in C++ that finds a path through a 2D grid maze. The maze is represented as a grid where cells can be open, blocked, or part of the path. This project helps to understand recursive algorithms, backtracking, and array manipulation.

## Requirements

- **Language**: C++
- **Environment**: GitHub Codespaces
- **Submission**: A GitHub repository link

## How It Works

The maze is represented by a 2D array:
- `0` - Open path
- `1` - Wall
- `2` - Part of the solution path

The `solveMaze` function uses recursion and backtracking to find a path from the starting point (0, 0) to the end point (4, 4). The function marks each cell on the solution path and backtracks when it hits a dead end.

### Functions
- **solveMaze**: Recursive function to find the path, checking each direction (up, down, left, right).
- **printMaze**: Prints the maze, displaying walls as `#`, open paths as spaces, and the solution path as dots `.`.

## How to Run

1. Clone the repository to your GitHub Codespaces or local development environment.
2. Open `maze_solver.cpp` and run the following commands:

   ```bash
   g++ maze_solver.cpp -o maze_solver
   ./maze_solver
