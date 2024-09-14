#include <iostream>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int num = 0;
        for(int i=1;i+num < n;i++) num += i;
        if(num + 1 == n)cout << 1;
        else cout << 0;
        cout << endl;
    }
    return 0;
}
