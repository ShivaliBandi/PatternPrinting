#include<stdio.h>
/*

input:5
output:5 # 4 # 3 # 2 # 1 #
*/
void pattern(int inum)
{
   
    while(inum!=0)
    {
        printf("%d  #  ",inum);
        inum--;

    }

}



int main()
{
    int inum=0;
    printf("enter number\n");
    scanf("%d",&inum);
    pattern(inum);

}