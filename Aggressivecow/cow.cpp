#include <iostream>
#include <vector>
#include <algorithm>

int main() {
 
    std::vector<int> stalls = {1, 2, 8, 4, 9};
    int k = 3; 
    int n = stalls.size();

    
    std::sort( stalls. begin(  ), stalls.end());


    int start = 1;
    int end = stalls[n - 1] - stalls[0];
    int ans = 0; 

  
    while (start <= end) {
        int mid = start + (end - start) / 2;

   
        int cowCount = 1;         
        int lastPos = stalls[0];  

        for (int i = 1; i < n; i++) {
            
            if (stalls[i] - lastPos >= mid) {
               
                cowCount++;
                lastPos = stalls[i];
            }
        }
       
        if (cowCount < k) {
            
            end = mid - 1;
        } else {
          
            ans =mid;
            start = mid + 1;
        }
    }

   
    std::cout << "The largest minimum distance is: " << ans << std::endl;

    return 0;
}



