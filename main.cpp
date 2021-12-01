#include <iostream>
#include "lib.h"
using namespace std;
int main() {
   char a;
   cin>>a;
   int risultato=verifica(a);
   if(risultato){
       cout<<convert(a)<<endl;
   }else{
       cout<<"errore";
   }
    return 0;
}

