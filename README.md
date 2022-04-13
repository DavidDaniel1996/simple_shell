# 0x16.C - Simple Shell
![The Gates of Shell](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/235/shell.jpeg)  

##Descritpion
This is a Simple command interpreter that replicates the shell.  

## Return
When succesfully compiled, the users promtp will be sent to seartyc the matching command line thta is meant to be excecuted, if the said command has no matches an error will be sent.  

## Prototype
1. char **_tokenizer(char *string, char *delim)  
2. char *_getpath(char *envp[], char *name)  
3. char *_dirmatch(char *path, char *input)  
4. int _printenv(char *envp[])  
5. int _free_double(char **token)  
6. int _exec(char *string, char **command, char **envp)  
7. int _check_program(char *string)  
8. int _verifier(char *string, char **envp)  

## Compile

The shell will be compiled with this flags:  

**gcc -Wall -Werror -Wextra -pedantic -std=gnu89 \*.c -o hsh**  

## Builtins
1. **env:** prints the current environment.
2. **exit:** exit the shell.

## Interactive mode:
$ ./hsh  
($) /bin/ls  
hsh main.c shell.c  
($)  
($) exit  
$  

## Non-Interactive Mode:

$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2  
$  
$ cat test_ls_2  
/bin/ls  
/bin/ls  
$  
$ cat test_ls_2 | ./hsh  
hsh main.c shell.c test_ls_2  
hsh main.c shell.c test_ls_2  
$  

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


