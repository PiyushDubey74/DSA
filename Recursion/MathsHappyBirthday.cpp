#include<bits/stdc++.h>
using namespace std;

  void HappyBirthday(int n){
    if(n==1){
        cout<<1<<endl;
        return ;

    }
    cout<<n<<"Number"<<endl;
    HappyBirthday(n-1);

}



int main (){

  HappyBirthday(5);

    return 0;
}