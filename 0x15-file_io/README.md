0TASK: Write a function that reads a text file and prints it to the POSIX standard output.
Function:
1- Opens the file using open system call with O_RDONLY flag.
2- Allocates memory for a buffer of size letters "using malloc".
3- Reads letters bytes from the file into the buffer "using read".
4- Writes the contents of the buffer to the standard output "using write".
5- Frees the buffer, closes the file descriptor and returns the number of bytes written.

1Task: Create a function that creates a file.
Function:
1- Opens the file using open system call with O_WRONLY | O_CREAT | O_TRUNC "zero length if it already exists" flags and 0600 mode "rw permissions for owner".
2- Writes the contents of text_content to the file "using write".
3- Closes the file descriptor and returns 1.

2Task: Write a function that appends text at the end of a file.
Function:
1- Opens the file using open system call with O_WRONLY | O_APPEND.
2- Writes the contents of text_content to the file "using write".
3- Closes the file descriptor and returns 1.

3Task: Write a program that copies the content of a file to another file.
Program:
1- Checks if the number of arguments is correct. If it is not, print an error message and returns 97.
2- Opens file cp_from with O_RDONLY flag. If it fails, print an error message and returns 98.
3- Opens file cp_to with O_WRONLY | O_CREAT | O_TRUNC flags and 0664 mode. If it fails print an error message, closes the file descriptor of cp_from, and returns 99.
4- Reads the contents of cp_from file into a buffer of size BUF_SIZE "using read" and writes the contents of the buffer to cp_to "using write". If write fails or does not write the expected amount of bytes, prints an error message, closes the file descriptors of cp_from and cp_to, and returns 99. 
5- Repeats this process until the end of cp_from is reached.
6- If read fails, print an error message, closes the file descriptors of cp_from and cp_to, and returns 98.
7- Closes the file descriptors. If it fails, print an error message and returns 100.
after edit:
The permissions of the created file are rw-rw-r--.
Reads 1,024 bytes at a time "Buffer".
