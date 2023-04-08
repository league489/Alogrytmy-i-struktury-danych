#include <iostream>

using namespace std;

int main()
{
  int n = 6;
    int a[n] = {-2,0,4,-3,2,7};

    for(int i=0;i<n-1;i++){
    int min = i;
for( int j = i+1;j<n;j++){
    if(a[j]<a[min])
    {
        min = j;
        cout<< i <<" "<< min <<" " << j <<" ( "<<a[j]<<" < "<<a[min]<<" ) "<< "T" <<endl;
    }
    else{
         cout<< i <<" "<< min <<" " << j <<"( "<<a[j]<<" < "<<a[min] <<" ) "<< "F" <<endl;
    }
}
int t = a[min];
a[min] = a[i];
a[i] = t;
cout<<"t = " << t <<endl;
for (int c = 0;c<n;c++)
{
    cout<<a[c]<<" , ";
}
cout<<endl;
}
}

