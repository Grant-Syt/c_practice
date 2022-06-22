#include <stdio.h>

void print_bin(unsigned int number);
void print_bin_helper(unsigned int number, int i);

int main() {
    int a = -7;
    print_bin(a);
}

// prints binary representation of integers
// inputs:
// number - an int or unsigned int
// output:
// void
// result:
// prints formatted binary representation
void print_bin(unsigned int number) {
    print_bin_helper(number, 0);
}

void print_bin_helper(unsigned int number, int i)
{
    if (number >> 1) {
        print_bin_helper(number >> 1, i + 1);
    }
    putc((number & 1) ? '1' : '0', stdout);
    
    // byte formatting
    if ((i) % 4 == 0) {
        printf(" ");
    }
    if ((i) % 8 == 0) {
        printf("\n");
    }
}