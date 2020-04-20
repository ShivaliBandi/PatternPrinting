#include<stdio.h>
/*

input:5
output:A B C D E
*/
void pattern1(int inum)
{
    char ch='A';
    while(inum!=0)
    {
        printf("%c ",ch);
        ch++;
        inum--;

    }

}



int main()
{
    int inum=0;
    printf("enter number\n");
    scanf("%d",&inum);
    pattern1(inum);

}