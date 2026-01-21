#include<bits/stdc++.h>
using namespace std;

 int factorial(int n){
  if(n==1){
    cout<< 1;
    return 1;
  }

//   cout<<num<<endl;
  return n*factorial(n-1);


 }

int main (){
   int n=7;
   int result = factorial(n);
    cout << "Factorial of " << n << " is " << result << endl;

    return 0;

}
