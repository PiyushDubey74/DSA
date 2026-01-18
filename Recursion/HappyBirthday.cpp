#include<bits/stdc++.h>
using namespace std;

   void fun3(int n){
    if(n==0){
        cout<<n<<"Happy Birthday";
        return ;
    }
    cout<<n<<"Days left for birthday"<<endl;
    fun3(n- 1);

   }


int main (){
   fun3(4);

    return 0;

}








