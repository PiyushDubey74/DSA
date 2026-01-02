#include<bits/stdc++.h>
using namespace std;
int main (){

    int longesetsubarraywithsumk(vector<int> a,long long k) {
        map<long long,int> presumMap;
        long long sum =0;
        int maxlen =0;
        for(int i= 0;i<a.size();i++){
            sum += a[i];
            if(sum == k){
               maxlen = max(maxlen, i+1);
            }
            long long rem = sum - k;
            if(presumMap.find(rem) != presumMap.end()){
                int len = i - presumMap[rem];
                maxlen = max(maxlen,len);
            }
            if(presumMap.find(sum) == presumMap.end()){
                presumMap[sum] = i;
            }


        }
        return maxlen;
    };









    return 0;
}