// #include <bits/stdc++.h>
// using namespace std;
// int main (){

//    int arr[6] = {1,2,9,4,5,6};

//    int ans=-1;
//    for(int i=0;i<7;i++){
//        if(arr[i]>ans)
//        ans=arr[i];
//    }

//   int second =-1;

//   for(int i=0;i<7;i++)
//   {
//     if(arr[i]!=ans)
//     second = min(second,arr[i]);
//   }

//   cout<<second<<" ";

// }

// #include<bits/stdc++.h>
// using namespace std;
// int main (){

//   int arr[5]={1,2,4,5};
 
//   //sum of all element in an array
//   int sum =0;
//   for(int i=0;i<4;i++){
//    sum+=arr[5];
//   }
  
//   //sum of n number
//   int ans=5*(5+1)/2;
 
//   cout<<ans-sum<<" ";


// }


 #include<bits/stdc++.h>
using namespace std;
int main ( ){

  int n;
  cout<<"Enter the value of number";
  cin>>n;
  int arr[1000];

  arr[0]=0;
  arr[1]=1;

  for(int i=2;i<=n-1;i++){
   arr[i]=arr[i-1]+arr[i-2];
  }

  cout<<arr[n-1];

}
