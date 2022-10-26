#include<iostream>
using namespace std;

int main(){
  /*  int n;
    cout<<"Eneter The NUmber: ";
    cin>>n;
    if (n>0)
    {
        cout<<"The Number Is +ve ";
    } else{
        cout<<"The Number Is -ve ";
    }
   */
    /*  int a,b;
    cout<<"Enetr The value Of a and b:";
    cin>>a>>b;
    if (a>b)
    {
        cout<<"A";
    }else{
        cout<<"B";
    }   */

    // homework
  /*  cout<<"Enetr The character";
    char ch;
    cin>>ch;
    if (ch>='a' && ch<='z')
    {
        cout<<"This is Lower case";
    }
    else if (ch>='A' && ch<='Z')
    {
       cout<<"This is Upper case";
    } else if (ch>='0'  &&  ch<='9')
    {
        cout<<"The Is Numeric";
    }
    */
 /*  int n ;
   int i =1; 
    int sum =0;
   cout<<"Eneter The number:"<<endl;
   cin>>n;
    
    while (i<=n)
    {
        sum = sum + i;
        i=i+1;
    }
    cout<<"The Sum is "<<sum;
*/

// Home work
/*   int n;
 cout<<"Enetr The Number :";
 cin>>n;
 int sum = 0;
int i =0;
while (i<=n)
{
    sum = sum + i;
    i = i+2;  // The Formula for Summing Only Even Numbers
}

cout<<"The Sum Of even number is:"<<sum;    */

/*  float F ;
cin>>F;
float C =  (5.0/9) * (F-32);
cout<<"The Feranite to celciys Conversion Is :"<<C;

*/

int n;
int i=1;
cin>>n;
while (i<n)
{
if (n%i==0)  // Formula to check whether the number is not prime or prime
{
    cout<<"The number is not prime"<<i<<endl;
}else{
    cout<<"The number is prime"<<i<<endl;
}
            i=i+1;
}
    
    return 0;
    
    
    
}