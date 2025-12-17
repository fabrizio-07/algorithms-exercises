# BST recursion

### How to compile
Move in the folder of the file you want to compile using:

```bash
cd <folder_name>
```

and than use the command:

```bash
g++ main.cpp ../../../lib/bst.cpp [-o executable_name]
```

to link the BST library to the main file and generate the executable file.

### How to execute executable file
There are two ways to execute it:

```bash
./<executable_file>
```

or passing arguments to the program:

```bash
./<executable_file> [argv1] [argv2] ... [argvn]
```

## `argv`s:

`argv`s depends on what the program does. Follows a list of what they mean in each `main.cpp` files related to every `.h` files:

- *countNodes.h*: it allows `n` `int` arguments, which are the nodes of the BST, in which to count the nodes of.
- *sumNodes.h*: it allows `n` `int` arguments, which are the nodes of the BST, whose to be sum.
- *searchValue.h*: it allows `n` `int` arguments, which are the nodes of the BST, in which to search for a certain value.
- *getHeight.h*: it allows `n` `int` arguments, which are the nodes of the BST, in which to calculate the height.
- *countLeaves.h*: it allows `n` `int` arguments, which are the nodes of the BST, in which to count the number of leaves.
- *checkBST.h*: it allows `n` `int` arguments, which are the nodes of the BST, in which to check if it follows the ordering properties of BSTs.
- *getMin.h*: it allows `n` `int` arguments, which are the nodes of the BST, in which to calculate the minimum value.
- *getMax.h*: it allows `n` `int` arguments, which are the nodes of the BST, in which to calculate the maximum value.
- *countSingleChildNodes.h*: it allows `n` `int` arguments, which are the nodes of the BST, in which to count the number of nodes with only one child.
- *sumPath.h*: it allows `n` `int` arguments, which are the nodes of the BST, in which to calculate if is there any path from root to any leaves, so that the sum of its nodes values is equal to a certain value.
- *sumLevelNodes.h*: it allows `n` `int` arguments, which are the nodes of the BST, in which to sum the nodes values of a certain level of it.
- *sumRange.h*: it allows `n` `int` arguments, which are the nodes of the BST, in which to sum the nodes values included in a range of bounds a and b.
- *copyBST.h*: it allows `n` `int` arguments, which are the nodes of the BST, whose will be copied in the new BST.

### N.B.
*BSTCmp* doesn't allow any arguments.
