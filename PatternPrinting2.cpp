#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i =1;
  /*  while(i<=n){
        int j =1;
        while (j<=n)
        {
        //   cout<<j;
        //   j = j+1;   // To print 123456,123456
           cout<<n-j+1;  // Tomprint 54321,54321
           j =j+1;
        }
        cout<<endl;
        i= i+1;    
    }  */

    int count =1;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<count<<"  ";
            count = count +1;
            j = j+1;

        }
        cout<<endl;
        i = i+1;
        
    }
    
    return 0;
}