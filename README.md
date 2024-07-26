# memory-leak-example

## Memory leaks can prove fatal for any application if they exist within a program. This repository's goal is to show how a memory leak occurs, and how to see a memory leak happening. It is meant to be simple.

You can try it out for yourself. Simply clone the repo, and compile any file.

I'm using g++ personally for the compilation of these code snippets.

## Checking for memory leaks

- Linux
  Use `valgrind` to run the program and check for memory leaks.

- MacOS
  use MacOS's `leaks` to run the program and check for memory leaks.

```
leaks -atExit -- ./simple_memory_leak
leaks -atExit -- ./simple_memory_leak_fix
```
