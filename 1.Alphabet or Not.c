/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    //Wap to check whether a character is alphabet or not
    char num;
    printf("Enter a character");
    scanf("%c",&num);
    if((num>= 'a'&& num<= 'z')||(num>= 'A'&& num>= 'Z'))
    {
        printf("Yes Alphabet");
    }
    else
    {
      printf("No Alphabet");
    }
    return 0;
}
