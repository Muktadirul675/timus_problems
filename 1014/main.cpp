#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n; cin >> n;
    int original = n;
    vector<int> v; int i;
    if(n == 1) cout << "1" << endl;
    else if(n==0) cout << 10 << endl;
    else{
        for(i=2;i<=9;i++){
            while(n % i == 0){
                v.push_back(i);
                n /= i;
            }
        }
        if(n==1){
            for(int i=0;i<v.size();i++) cout << v[i];
            cout << endl;
        }else {
            cout << -1 << endl;
        }
    }
    return 0;
}
