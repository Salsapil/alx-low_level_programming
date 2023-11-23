void print_binary(unsigned long int n)
{
    if (n > 1)
    {
        print_binary(n >> 1); // equivalent to n / 2 "Binary"
    }
    _putchar((n & 1) + '0'); // equivalent to % 
}
