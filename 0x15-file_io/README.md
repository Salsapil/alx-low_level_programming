0TASK: Write a function that reads a text file and prints it to the POSIX standard output.
Function:
1- Opens the file using open system call with O_RDONLY flag "using open".
2- Allocates memory for a buffer of size letters "using malloc".
3- Reads letters bytes from the file into the buffer "using read".
4- Writes the contents of the buffer to the standard output "using write".
5- Frees the buffer, closes the file descriptor and returns the number of bytes written.
