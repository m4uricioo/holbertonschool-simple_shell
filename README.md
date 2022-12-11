
![good-programmer-banner-final](https://user-images.githubusercontent.com/113644952/206517660-f2d302ef-69ea-427a-a4c5-a080298be8e7.jpg)



## General :computer:
Who designed and implemented the original Unix operating system
Who wrote the first version of the UNIX shell

How does a shell work
What is the difference between a function and a system call
How to create processes
How does the shell use the PATH to find the programs
How to execute another program with the execve system call
How to suspend the execution of a process until one of its children terminates
 
 
 ## General Requirements 
~~~
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options

-Wall -Werror -Wextra -pedantic -std=gnu89

All your files should end with a new line


A README.md file, at the root of the folder of the project is mandatory

Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

Your shell should not have any memory leaks

No more than 5 functions per file

All your header files should be include guarde

~~~

_________________________________________________________________________________________________________________________________
   ## What its a Shell?  :sparkle:
 ### A shell is a text-based terminal, used for manipulating programs and files.
 Shell scripts typically manage program execution.
  Is an interface to the operating system. It acts as a command interpreter,

it takes each commands and passes it to the operating system.


<p align="center">
  <img src="https://user-images.githubusercontent.com/113644952/206926217-cbc3fc70-9088-40d1-9262-c0dfa3938d42.png" />
</p>


There are two primary components of the Linux Operating System , the kernel and the shell.
 As the core of the Linux OS, the kernel handles all of the low-level heavy lifting such as 
managing processes, system and user input/output (“I/O”), and interfacing directly with the system hardware.
 ________________________________________________________________________________________________________________________________
:newspaper: Simple Shell project 
Introduction :hammer:


~~~
This simple shell project. It consists of developing and making our own UNIX command interpreter (Shell).
~~~


About this project
The objective of this project was to mirror how the real shell (sh) works using a custom version of almost every library function needed.
A simple shell version of the original one.

What our shell can handle:

:heavy_minus_sign:Executes any command with its arguments

:heavy_minus_sign:Executes any command with its arguments using relative or absolute routes

:heavy_minus_sign:Executes built-in commands

:heavy_minus_sign:Handles ';' command seperator

:heavy_minus_sign:Handles the "end of file" condition (Ctrl+D)

:heavy_minus_sign:Handles errors

:heavy_minus_sign:Handles the PATH

:heavy_minus_sign:Handles exit[arguments] built-in

:heavy_minus_sign:env built-in implemented

| Command | Description |
| --- | --- |
| ls  | List files in the directory |
| pwd | print working directory |
| cat  | show file |
| echo |  display line string that are passed as an argument |
| env |  display your current environment |
| pwd | print working directory |
__________________________________________________________________________________________________________
*Discover some of the processes at work in the shell*

A process started by a program is a parent process; a child process is the product of the parent process.
A parent process can have 
have several child processes, but a child process can only have one parent
wait
The wait function causes the process to wait for the termination of any child and returns the PID of the child process. 
fork
When the fork function is called, it spawns a duplicate of the current process. 
The duplicate shares the current values of all variables, files and other data structures.
 other data structures. The call to fork returns to the parent process 
the identifier of the child process and returns a zero to the child process.
  execve() executes the program referenced by pathname.  This
  causes the program being executed by the process to be replaced by a new program.
  to be replaced by a new program.
system call asks the system for permission to use its resources.
SYSTEM CALL allows us to make use of resources.  
System calls are how a program 
enters the kernel to perform some task.
There are 5 different categories of system calls: process control, file manipulation, device manipulation, data maintenance, and information maintenance, 
device manipulation, information maintenance and communication
They can be used as control units for communication between application processes.
These file manipulation methods include creating, deleting, opening, closing,
writing and reading
create, delete, open, close, write and read).
wait is a system call 
sleep system call
open system call 
fork() create process
getline is not a system call 
getline reads a complete line from stream1, storing the address of the buffer containing the text in *lineptr, the buffer ends in null.

Command line arguments are given after the program name in the operating systems command interpreter. 

int main(int argc, char *argv[]) { "names " }

To pass command line arguments, we normally define main() with two arguments: the first argument is the number of command line arguments and the second argument is the number of command line arguments.
command line arguments and the second argument is the list of command line arguments.
strtok: allows you to split a string using a demilitator, it takes 2 arguments: 1) string to split 2) delimiters

_________________________________________________________________________________________________________________________
 *Flowchart   -  Graphical representation of an algorithm or process*  

<p align="center">
  <img src="https://user-images.githubusercontent.com/113644952/206484364-ea79ef00-57ec-4f5b-8b9d-8f004daefbfa.PNG" />
</p>

__________________________________________________________________________________________________________________________
    
:man_technologist:	
#### You can see more information in the  
[Manual Page](https://github.com/m4uricioo/holbertonschool-simple_shell/blob/main/man_1_simple_shell)
man ./man_1_simple_shell
