#include<stdio.h>
/*

input:8
output:2 4 6 8 10 12 14 16
*/
void pattern(int inum)
{
   int isum=1;
    while(inum!=0)
    {
        printf(" %d  ",isum*2);
        inum--;
       isum++;

    }
    

}



int main()
{
    int inum=0;
    printf("enter number\n");
    scanf("%d",&inum);
    pattern(inum);

}