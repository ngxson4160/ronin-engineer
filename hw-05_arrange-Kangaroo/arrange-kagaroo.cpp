#include <bits/stdc++.h>

using namespace std;

int n, result = 0;
vector<int> a;

void deleteElement(int position){
    if (position >= 0 && position < a.size()) {
        a.erase(a.begin() + position);
    }
}

void search(int index, int mid){
    int tmp  = mid;
    
    while(mid < a.size()){
        if(a[mid] >= 2*a[index] && (a[mid-1] < 2*a[index] || mid == tmp)){
            break;
        }else{
            mid++;
        }
    }
    
    if(mid == a.size()){
        result++;
    }else {
        result++;
        deleteElement(mid);
    }
}


int main(){
    
    cin >> n;;
    
    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
    }
    
    sort(a.begin(), a.end());
    
    
    int j = 0, mid = n / 2;
    
    
    while(j < a.size()){
        search(j, mid);
        j++;
    }
    
    cout << result;
    return 0;
}
