#include<stdio.h>
#include<string.h>
int iRow,iCol;
char str[20];
void Pattern(char *str)
{
    
   for(int i=0;i<iRow;i++)
   {
       for(int j=0;j<iCol;j++)
       {
           if(i>=j)
           printf("%c ",str[j]);
           else
           {
               printf("* ");
           }
           
           
       }
       
       printf("\n");

   }
        

}
int main()
{

printf("Enter a string\n");
scanf("%s",str);
iRow=iCol=strlen(str);
Pattern(str);
return 0;
}