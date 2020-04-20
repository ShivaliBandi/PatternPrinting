#include<stdio.h>
#include<string.h>
int iRow,iCol;
char str[20];
void Pattern(char *str)
{
   int m=0;
   for(int i=0;i<=2*iRow;i++)
   {
       int icnt=0;
        if (i<iRow)
             m=i;
        else if(i==iRow || i==iRow+1)
           continue;
       else
            m=2*iRow-i;
           
       for(int j=iCol-1;j>=0;j--)
       {
          
           if(m<=j)
           {
               printf("%c ",str[icnt]);
              
           }
        
        
           else
           {
               printf("* ");
           }
            icnt++;
       }
       printf("\n");
   }

}
int main()
{

printf("Enter a string\n");
scanf("%s",str);
printf("--------------------------------------------------------\n");

iCol=strlen(str);
iRow=strlen(str);
/*if(strlen(str)%2==0)
    iRow=2*iCol;
else
    iRow=2*iCol-1;
*/
Pattern(str);
return 0;
}