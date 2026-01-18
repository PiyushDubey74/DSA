#include<bits/stdc++.h>
using namespace std;

 void EvenNumber (int n){
   if (n== 2){
      cout<<n<<" Even Number"<<endl;
      return;
   }
   EvenNumber(n-2);
    cout<<n<<" Even Number"<<endl;
 }


int main (){

EvenNumber(10);
    return 0;

}
