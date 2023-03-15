# Prufer Code
## Problem
Each tree is labeled with n vertex can only be represented by its Prufer code. Due to the size short of the Prufer code, we think of it as a compressed representation of the tree. Write an input program into a labeled tree and print its Prufer code to the screen.

Specifically, you must install the following working program.
- Input (keyboard input): Label tree {0, ..., n − 1} with the number of vertices n < 100000. This tree represented by the edge list.
- Output (to the screen): Prufer code of this tree.

### Example
With input:
```bash
9
0 2
0 3
2 4
2 6
2 9
6 1
6 5
9 7
9 8
```
Explain: The first line shows the number of edges of the tree; each subsequent line represents an edge of the tree:

![tree](https://user-images.githubusercontent.com/89787228/225334441-9945a8e8-1ce9-4716-9afe-fdb44ad6a591.png)

With this data, the program should output the Prufer code:
```bash
6 0 2 6 2 9 9 2
```
## Solution

