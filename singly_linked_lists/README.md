# Project README

## Description

This project contains a collection of C source files that implement various functions to manipulate a singly linked list data structure. The linked list used in this project is defined by the `list_t` structure, and the functions provide basic operations such as printing the list, calculating its length, adding nodes to the beginning and end, and freeing the memory used by the list.

## Files

1. **File 0-print_list.c**: This file contains a function `print_list` that prints all the elements of a given `list_t` linked list.

2. **File 1-list_len.c**: This file contains a function `list_len` that returns the number of elements in a `list_t` linked list.

3. **File 2-add_node.c**: This file contains a function `add_node` that adds a new node at the beginning of a `list_t` linked list.

4. **File 3-add_node_end.c**: This file contains a function `add_node_end` that adds a new node at the end of a `list_t` linked list.

5. **File 4-free_list.c**: This file contains a function `free_list` that frees the memory occupied by a `list_t` linked list.

## Usage

To use these functions in your C program, follow the steps below:

1. Clone or download this project into your local development environment.

2. Include the necessary source files in your C program by compiling them along with your main program.

3. Ensure to include the appropriate header file in your main program that defines the `list_t` structure and the function prototypes for the linked list operations.

4. Call the desired functions from your main program to perform operations on the linked list.

## Example

Here's a simple example demonstrating the usage of the functions:

```c
#include <stdio.h>
#include "list.h"

int main() {
    list_t *list = NULL;

    // Adding nodes to the list
    add_node(&list, "Hello");
    add_node(&list, "World");
    add_node_end(&list, "Linked");
    add_node_end(&list, "List");

    // Printing the list
    printf("List elements: ");
    print_list(list);

    // Getting the length of the list
    int length = list_len(list);
    printf("List length: %d\n", length);

    // Freeing the memory used by the list
    free_list(list);

    return 0;
}
```

## Compilation

To compile the example program with the provided functions, you can use a command like this:

```bash
gcc -Wall -Werror -Wextra -pedantic main.c File0-print_list.c File1-list_len.c File2-add_node.c File3-add_node_end.c File4-free_list.c -o main
```

Ensure to replace `main.c` with the name of your main program, and you can add other C files if needed.

## Contributions

This project is intended for educational purposes and may not cover all possible scenarios or error handling. Contributions to improve the code and add more functionality are welcome. If you find any bugs or issues, please report them in the repository.

---

Please note that this README assumes you have a header file (e.g., "list.h") where the `list_t` structure and function prototypes are defined for the linked list operations. Additionally, the compilation command provided assumes that you have GCC (GNU Compiler Collection) installed on your system.

Feel free to modify this README as needed for your specific project and repository structure.
