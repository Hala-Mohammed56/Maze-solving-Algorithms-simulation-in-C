# Maze-solving-Algorithms-simulation-in-C

## Description
This repository contains three mazes that can be solved using the algorithms implemented in C. All these algorithms work through an API to simulate the maze environment and navigate through it. These algorithms are the Flood-Fill, which is able to obtain good routes moving throughout the maze in systematic paths, the Right-Hand Rule (RH), which follows the right wall and the Left-Hand Rule (LH), which follows the left wall. Each algorithm has its own different technique that has evolved beyond mere wall-following to more complicated path finding methods.

## Algorithms

### Flood Fill Algorithm
Flood-fill is the algorithmic maze solver that methodically searches every possible path to the goal. It assigns travel distance values to each cell, continuously modifying them on the basis of adjacent paths. The rule operation thus finds the shortest and the most efficient route thereby increasing the efficacy of the algorithm with which complex mazes can be solved and enhanced with the navigation.

### Right-Hand Rule Algorithm (RH)
The Right-Hand Rule algorithm is simply a wall-following method in maze navigation, whereby the individual keeps the right wall in contact in order to follow it through the passages of the maze. It will turn right whenever possible and proceed straight if clear. This is simple and efficient in mazes where such a solution is possible by consistently following the right side, although it may not generate the shortest path.

### Left-Hand Rule Algorithm (LH)
The Left-Hand Rule algorithm works like the Right-Hand Rule, but here, we keep the left wall to our left. The maze is traversed by turning left whenever possible, and in case the left side is blocked, either one moves as forward or turns to the right as required to proceed through the maze. Just like that, the Left-Hand Rule would likewise work in the case of a left-side solution through a maze, providing a simple yet reliable method of navigating those mazes.

## Utilization of the Simulator
1. Download the Micromouse simulator.  
2. Open the simulator and click the "+" button to add a new algorithm.  
3. Enter your algorithm's configuration details, including its name, directory, and run command.  
4. Click the "Run" button to execute your algorithm.

## Examples
- _Flood fill setup:_  
- _Right-Hand rule setup:_  
- _Left-Hand rule setup:_  

## Contributors
- Hala Mohammed  
- Diana Naseer  
- Jenan Mohammad  
- Sara Kafena
