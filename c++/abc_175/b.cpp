#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> l(n,0);
    for(int i = 0; i < n; i++) cin >> l[i];

    int cnt = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if (l[i] != l[j] && l[j] != l[k] && l[i] != l[k] && ((l[i]+l[j] > l[k]) && (l[j]+l[k] > l[i] && (l[i]+l[k] > l[j])))) {
                    cnt++;
                }
            }
        }        
    }

    cout << cnt << endl;

    return 0;
}