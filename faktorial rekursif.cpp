#include <iostream>
#include <conio.h>
using namespace std;
long int faktorial( long int a);
long int faktorial( long int a){
 {   if ((a == 0) || (a == 1 )) 
      return (1); 
      else
      return (a * faktorial(a-1));  }
}
int main(){
 long int faktor;
 long int n;
   cout<<"Masukan Nilai Faktorial = ";
   cin>>n;
   faktor = faktorial(n);
   cout<<"Nilai Faktorial Dari "<< n <<"! = "<<faktor<<endl;
}
