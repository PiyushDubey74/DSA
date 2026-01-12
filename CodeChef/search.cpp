#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;
    
    bool found = false;
    for(int i = 0; i < N;i++) {
        int Ai;
        cin >> Ai;
        if(Ai == X) {
            found = true;
           
        }
    }
    
    if(found) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
