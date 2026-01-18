#include<bits/stdc++.h>
using namespace std;

 void EvenNumber(int num){
    if(num==2){
        cout<<num<<"Even Number "<<endl;
        return ;
    }

    EvenNumber(num-2);
    cout<<num<<"Even Number "<<endl;
 }


int main (){
  int N=11;
  if(N%2==1){
    N--;
  }
  EvenNumber(N);
    return 0;
}