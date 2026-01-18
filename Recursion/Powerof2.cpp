#include<bits/stdc++.h>
using namespace std;

 int power(int num){
    if(num==1){
        cout<<1;
        return 1;
    }
    return num*power(num-1);
}

int main (){
    
    int n=2;
    int result=power(n);
    cout<<n<<result<<endl;
    return 0;
}