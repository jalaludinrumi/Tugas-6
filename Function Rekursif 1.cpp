#include <iostream>
using namespace std;
int genap (int n);
int genap (int n) {
{
     if  (n == 1 )         
     return (2);     
     else        
     return (2*n + genap(n-1));  }
}
int main(){
int n, deret;
   cout<<"Masukan batasan deret = ";
   cin>>n;
   deret= genap (n);
   cout<<"Nilai  Dari penjumlahan deret = "<<deret<<endl;
}
