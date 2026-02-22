#include<bits/stdc++.h>
using namespace std;

  void swapping( int *p,int *p2)
  {
    int temp=*p;
    *p= *p2;
    *p2=temp;

  }

int main (){
   int first= 10;
   int second= 20;
   swapping(&first,&second);
   cout<<first<<endl<<second<<endl;


}

