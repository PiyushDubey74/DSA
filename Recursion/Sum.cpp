#include<bits/stdc++.h>
using namespace std;
 
 int sum(int num){
    if(num==1){
        return 1;
    }
    cout<<num<<endl;
    return num+sum(num-1);
 }


int main (){
  
    int n= 6;
    int result = sum(n);
   cout<<"SUM"<<n<<" "<<result<<" "<<endl;

    return 0;
}