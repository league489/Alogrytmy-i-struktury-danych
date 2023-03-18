              

#include <iostream>

using namespace std;

int main()
{
    int n = 6;
   int a[n] = {-2,0,4,-3,2,7};
    for(int i = 1;i<n;i++)
    {
        int element = a[i];
        int j=i-1;
        while(j >= 0 && a[j]>element)
        {
            a[j+1] =a[j];
            j--;
        }
        a[j+1] = element;
    
        cout<<endl;
        cout<<"i = "<<i<<endl;
        cout<<"element = "<<element<<endl;
        cout<<"j = "<<j<<endl;
         for(int c= 0;c<n;c++)
        {
            cout<<a[c]<<" , ";
        }
    
        
    }
  
}
