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
