#include <bits/stdc++.h>

using namespace std;
int n;
bool isPossible;
vector<int> a;
vector<int> b;

int main(){
    cin >> n;
    
    for(int i = 1; i <= n; i++){
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
    }
    
    for(int i = 1; i <= n; i++){
        int tmp;
        cin >> tmp;
        b.push_back(tmp);
    }
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    for(int i = 0; i < n; i++){
        if(a[i] > b[i]) {
            isPossible = false;
            break;
        }
        isPossible = true;
    }
    
    if(isPossible){
        cout << "YES";
    } else {
        cout << "NO";
    }
    
    return 0;
}
