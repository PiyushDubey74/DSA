#include<bits/stdc++.h>
using namespace std;

 void Nnumber( int N){
    if(N==1){
        cout<<N<<endl;
        return ;
    }

    Nnumber(N-1);
    cout<<N<<endl;
 }

int main ()
{
Nnumber(6);

    return 0;
}