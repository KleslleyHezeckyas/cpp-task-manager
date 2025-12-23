# C++ Task Manager (Console Application)

## Overview

This project is a simple **console-based task manager** developed in **C++**.  
It allows users to manage daily tasks through a text-based menu, providing a clean and beginner-friendly introduction to C++ fundamentals while still resembling a real-world application.

The goal of this project is to demonstrate core C++ concepts such as structures, vectors, input handling, and control flow.

---

## Features

- Add new tasks  
- List all tasks  
- Mark tasks as completed  
- Interactive menu system  
- Runs entirely in the terminal  

---

## Technologies Used

- C++
- Standard Template Library (STL)
- GCC (g++) compiler

---

## Project Structure

cpp-task-manager
│── main.cpp
└── .vscode
├── launch.json
└── tasks.json
---

## How to Build and Run

### Prerequisites

- GCC compiler (g++)
- Windows with MSYS2 UCRT64 or Linux/macOS with GCC installed

### Build

```bash
g++ main.cpp -o TaskManagerCPP
./TaskManagerCPP
Example Usage

When the program starts, a menu is displayed allowing the user to:

Add a task

List all tasks

Complete a task

Exit the program

All interactions are handled through standard input/output.

Learning Objectives

This project was created to practice:

Basic C++ syntax

Structs and vectors

Conditional statements and loops

User input handling

Simple application flow design

Future Improvements

Persist tasks using files

Refactor into classes (OOP)

Add task priorities and deadlines

Improve input validation

Cross-platform build with CMake

Author

Developed by Kleslley Hezeckyas
