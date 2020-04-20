#include<stdio.h>
void Pattern(int iRow, int iCol)
{
    int icnt=iCol;
   for(int i=1;i<=iRow;i++)
   {
       for(int j=1;j<=iCol;j++)
       {
           if(icnt==j || i==1 || j==1 || i==iRow || j==iCol )
           printf("* ");
           else
           {
               printf("  ");
           }
           
           
       }
       icnt--;
       printf("\n");

   }
        

}
int main()
{
int iValue1 = 0, iValue2 = 0;
printf("Enter number of rows and columns");
scanf("%d %d",&iValue1, &iValue2);
Pattern(iValue1, iValue2);
return 0;
}