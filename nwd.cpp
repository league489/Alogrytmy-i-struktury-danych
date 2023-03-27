#include <iostream>

using namespace std;

/*int nwdIter(int a , int b){
	if(a==b){
   return a;
	}
	else {
    	while(a!=b){
        	if(a>b){
            	a=a-b;
        	}
        	else {
            	b = b-a;
        	}
    	}
return a;
}
}
*/

/*int nwdIterII(int a , int b){
   while (b!=0){
   	int temp = b;
   	b = a%b;
   	a= temp;
   }
   return a;
}
*/

/*int nwdRek(int a , int b){
	if(a!=b){
   	 
    
	if(a>b){
    	return nwdRek(a-b,b);
	}
	else{
    	return nwdRek(a,b-a);
	}
       	 
	}
	return a;
  }
  */
 
/*int nwdRekII(int a , int b){
	if(b!=0){
    	return nwdRekII(b,a%b);
	}
}
*/

int main()
{
//cout<<nwdRekII(12,40)<<endl;
//cout<<nwdRek(12,40)<<endl;
//cout<<nwdIter(28,24)<<endl;
//cout<<nwdIterII(10,5)<<endl;
}
