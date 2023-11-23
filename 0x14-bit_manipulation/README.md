Task 1:
void print_binary(unsigned long int n)
{
    if (n > 1)
    {
        print_binary(n >> 1); // equivalent to n / 2 "Binary"
    }
    _putchar((n & 1) + '0'); // equivalent to % 
}

Task 2:
Note: The index starting from the rightmost bit
1- n >> index / moves bit at the specified index to the lsb. // 10000000000 -- 0000000001
2- n >> index & 1 / to get the value of bit at the specified index -- sets all bits to 0 except for lsb

