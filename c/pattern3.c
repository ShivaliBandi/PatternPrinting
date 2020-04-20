#include<stdio.h>
/*

input:4
output: # 1 * # 2 * # 3 * # 4 *
*/
void pattern(int inum)
{
   int icnt=1;
   
    while(inum!=0)
    {
        printf("# %d * ",icnt);
        inum--;
        icnt++;

    }
    

}



int main()
{
    int inum=0;
    printf("enter number\n");
    scanf("%d",&inum);
    pattern(inum);

}