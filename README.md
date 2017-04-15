# Epitech-Year1-Dante_Star

This project is about making a maze generator, and 3 different maze solver with different algorithm to solve maze.
The 4 parts of this Project are the following:
- A maze generator for perfect and imperfect maze
- A maze solver using a Depth-First search algorithm
- A maze solver using a Breadth-First search algorithm
- A maze solver using a A* algorithm

But we must follow some rules for those maze, which are:
- The maze starts at the top left and his exit is at the bottom right of it.
- There is only one entrance and exit
- The maze has to be a rectangle
- The maze must have a solution when we create it
- The maze solver must handle mazes with no solution

We will now start to look deeper into every of the parts of the project one by one, starting by, of course...

# The Maze Generator

The Maze Generator is a generator of random maze that works by giving the proportion of the map the following way:
./generator {size x} {size y}
Giving us then an imperfect maze of the chosen size, but what's an imperfect maze ?
An imperfect maze has:
- Clusters and dead-ends
- Loops
- At least one solution

And while we're at it, a perfect maze has:
- No clusters and no dead-ends
- No loops
- One and only path
- The only path must be the solution

If the user wants a perfect maze, he can use the command ./generator {size x} {size y} {perfect}
By default the maze generator is an imperfect maze generator

# The Depth-First Solver

The Depth-First Solver use a Depth-First search algorithm.
So what does a Depth-First search algorithm does ?
Well what it does is pretty simple:
- Travels across the maze until he finds a dead-end
- When finding a dead-end he travels back
- While traveling back he remembers that path so he never takes it again
- He ho back until he finds a cross-road with a path he hasn't take
- He does that until he finds the exit

# The Breadth-First Solver

The Breadth-First Solver use a Breadth-First search algorithm.
What's the difference with the Depth-First algorithm ?
Well this is pretty much how a Breadth-First search algorithm works:
- Travels through the maze until he finds a cross-road
- Separate himself to explore the new path discovered while he continues to walk in his path
- If the program finds a dead-end, the program stop while the other continues to explore
- Continues to do that until he finds the exit

# The A* Solver

To explain more in details next time
