#include<stdio.h>
void Pattern(int iRow, int iCol)
{
    int icnt=0;
   for(int i=1;i<=iRow;i++)
   {
       icnt=i;
       for(int j=1;j<=iCol;j++)
       {
           
           printf("%d ",icnt);
           icnt++;
       }
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