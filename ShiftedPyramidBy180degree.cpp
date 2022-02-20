/*
        * 
      * * 
    * * * 
  * * * * 
* * * * * 
*/
#include<iostream>
using namespace std;
void pattern(int inumber)
{
    for(int i=0;i<inumber;i++)
    {
        for(int j=0;j<inumber;j++)
        {
                if(j>=inumber-i)
                    cout<<"*";
                else
                    cout<<" ";
            
        }
        
        cout<<endl;
    }
}
int main()
{
    int inumber=0;
    cout<<"Enter inumber";
    cin>>inumber;
    pattern(inumber);
    return 0;
}