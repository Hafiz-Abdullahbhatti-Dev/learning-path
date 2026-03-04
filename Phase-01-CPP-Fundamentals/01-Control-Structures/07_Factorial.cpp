#include <iostream>
using namespace std;
int main()
{
    int num, factorial = 1,a;
    cout<<"enter a number  ";
    cin>>num;
    if (num > 0)
    {
        int i = 1;
       while (i<=num)
       {
        factorial*= i;
        i++;
   
       }cout<<"factorial of "<<num<<"is  "<<factorial;
      
    } else cout<<" number is negtive ";
    
    
}