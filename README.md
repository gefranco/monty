Stacks, Queues -LIFO, FIFO
------------------------------

 <img src = "https://d2z6c3c3r6k4bx.cloudfront.net/uploads/event/logo/1061432/a991d937097e8176adf1ea7196beb80f.png">

-------------------------------
Description
----------------
The objectives of this project is to develop the exercises designed for the next project..<br>

----------------
Learning Objectives
----------------
* What do LIFO and FIFO mean.<br>
* What is a stack, and when to use it.<br>
* What is a queue, and when to use it.<br>
* What are the common implementations of stacks and queues.<br>
* What are the most common use cases of stacks and queues.<br>
* What is the proper way to use global variables.<br>
* How to work with git submodules.<br>

-----------------
Requirements
----------------
* Allowed editors: vi, vim, emacs.<br>
* All your files will be compiled on Ubuntu 14.04 LTS.<br>
* Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic.<br>
* All your files should end with a new line.<br>
* A README.md file, at the root of the folder of the project is mandatory.<br>
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl.<br>
* You allowed to use a maximum of one global variable.<br>
* No more than 5 functions per file.<br>
* You are allowed to use the C standard library.<br>
* The prototypes of all your functions should be included in your header file called monty.h.<br>
* Don’t forget to push your header file.<br>
* All your header files should be include guarded.<br>
* You are expected to do the tasks in the order shown in the project.<br>
* The repository monty should be added as a submodule to your holbertonschool-low_level_programming repository, under the name 0x19-stacks_queues_lifo_fifo.<br>
-----------------------
Test
----------------------
The Monty language
---------------------
Monty 0.98 is a scripting language that is first compiled into Monty byte codes(Just like Pythn). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter fot Monty ByteCodes files.<br>
---------------------
Monty byte code file
--------------------
Files containing Monty byte codes usually have the .m extension. Most of the industry uses this standard but is not required by the specification of the language. there is not more than one instruction per line. There can be any number of spaces or after the opcode and its argument:
```
julien@ubuntu:~/0x19-stacks_queues_lifo_fifo$ cat -e bytecodes/000.m
push 0$
push 1$
push 2$
  push 3$
                   pall    $
push 4$
    push 5    $
      push    6        $
pall$
julien@ubuntu:~/0x19-stacks_queues_lifo_fifo$
```
Monty byte code files can contain blank lines (empty or made of spaces only, and any additional text ofter the opcode or its required is not taken into account:
```
julien@ubuntu:~/0x19-stacks_queues_lifo_fifo$ cat -e bytecodes/001.m
push 0 Push 0 onto the stack$
push 1 Push 1 onto the stack$
$
push 2$
  push 3$
                   pall    $
$
$
                           $
push 4$
$
    push 5    $
      push    6        $
$
pall This is the end of our program. Monty is awesome!$
julien@ubuntu:~/0x19-stacks_queues_lifo_fifo$
```
 ---------------
 Authors
 --------------

* **Vivian Ortiz** - [vivianlorenaortiz](https://github.com/vivianlorenaortiz)
* **German Franco** -[gefranco](https://github.com/gefranco/monty)
--------------