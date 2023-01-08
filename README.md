# Introduction

This projects aims for creating a linked list data structure while using
no arrow operator to access structure members in the C programing language.

# Features

The following features (functions) are avaible in the source code:

* Print the linked list.
* Push a new node at the beginning (as new head) of the list.
* Push a new node at the end (at the tail) of the list.
* Pop a node at the beginning (head) of the list.
* Pop a node at the end (tail) of the list.
* Pop a node at certain position (index) in the list.
* Pop a node by certain value (data) in the list.

# How to compile and run the program

Running the program is pretty easy:

* Clone this repository
* A C compilator; gcc 10.2.0 was used for this, though this project will
likely compile just wine by using older versions of gcc.
* Compile the source code
* Run the program by executing `./ll-noarrows`.

Demonstratiton:

```sh
# Clone this repository
git clone https://github.com/codenoschool/linked-list-no-arrows-in-c
# Move inside the cloned repository
cd linked-list-no-arrows-in-c
# Compile the source code
gcc main.c
# Run the program
./ll-noarrows
```

Alternatively, instead of using gcc (or other C compiler) you can do:

```sh
# Compile the source code
make
# Delete the program
make clean
# Delethe the program and re-compile the source code
make remake
```

Such rules are defined inside the file `Makefile` and can be changed if
needed.

... And that's it.

# How to use

Simply compile the source code and execute the program. Some instructions
have been already being defined inside the main function of program, so
they could be changed or you could also add new functionality. 

# Credits and refereces

This repository was created by [CodeNoSchool](https://github.com/codenoschool).

- Links:
	- [CodeNoSchool](https://www.youtube.com/c/CodeNoSchool)
	- [ISC School](https://www.youtube.com/@ISCSchool)
	- [Blog (Blogger)](https://codenoschool.blogspot.mx/)
	- [Blog (Vivaldi)](https://codenoschool.vivaldi.net/)
	- [Twitter](https://twitter.com/codenoschool)

