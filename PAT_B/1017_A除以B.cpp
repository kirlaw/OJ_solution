#include<bits/stdc++.h>

using namespace std;

int main(){
    string a;
    int b; //1位除数
    int q, r; //商 余数
    cin >> a >> b;
    q = (a[0] - '0') / b;
    if (q != 0 && a.length() > 1 || a.length() == 1){
        cout << q;
    }
    r = (a[0] - '0') % b;
    for (int i = 1; i < a.length(); i++) {
        r = r * 10 + (a[i] - '0');
        q = r / b;
        cout << q;
        r = r % b;
    }
    cout << " " << r;
    return 0;
}