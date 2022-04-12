# 0x16.C - Simple Shell
![The Gates of Shell](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/235/shell.jpeg)  
## Description
This project is our version of a simple shell. It aims to replicate some of the functionalities available in the regular shell.
## Return
The program should return 0 if excecuted correctly.
## Prototype
`int main(unused int argc, unused char *argv[], char *envp[])`

Argc is the argument count passed in the command line. It is unused.
Argv is the argument vector passed in the command line. It is unused.
Envp contains the environment accessbile through the shell.

## Compile

The shell will be compiled with this flags:  

**gcc -Wall -Werror -Wextra -pedantic -std=gnu89 \*.c -o hsh**  

## Builtins

## Output
Our code should output this if the compilation process was succesfully completed

## Learning Objectirves

1. Who designed and implemented the original Unix operating system  
2. Who wrote the first version of the UNIX shell  
3. Who invented the B programming language (the direct predecessor to the C programming language)  
4. Who is Ken Thompson  
5. How does a shell work  
6. What is a pid and a ppid  
7. How to manipulate the environment of the current process  
8. What is the difference between a function and a system call  
9. How to create processes  
10. What are the three prototypes of main  
11. How does the shell use the PATH to find the programs  
12. How to execute another program with the execve system call  
13. How to suspend the execution of a process until one of its children terminates  
14. What is EOF / “end-of-file”?  

## Authors

David Daniel Rodriguez Jimenez | [@DavidDaniel1996](https://github.com/DavidDaniel1996)  
Jose Andres Fabre Lopez | [@Joanfa7](https://github.com/Joanfa7)  


