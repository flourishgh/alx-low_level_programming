ALX SE PROGRAM PROJECT 0x0E-structure_typedef

Task 0
 Define a new type struct dog with the following elements:
 name type char *
 age type float
 owner type char *


 Task 1
 Write function that initialize a variable of type struct dog
 filename: 1-init_dog.c


 Task 2
 Write a function to print a struct dog. If an element d is NULL print (nil) instead of this element. (if name is NULL, print Name: (nil)). If d is NULL print nothing.
 filename: 2-print_dog.c


 Task 3
 Define a new type dog_t as a new name for the type struct dog.


 filename: dog.h


 Task 4
 a function that creates a new dogPrototype: dog_t *new_dog(char *name, float age, char *owner);
You have to store a copy of name and owner
Return NULL if the function fails
File: 4-new_dog.c

