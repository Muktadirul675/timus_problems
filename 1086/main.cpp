#include <iostream>
#include<math.h>
using namespace std;

bool is_prime(int num){
    int root = sqrt(num);
    for(int i=2;i<=root;i++){
        if(num % i == 0) return false;
    }
    return true;
}

int nth_prime(int n){
    int num = 1;
    while(n){
        if(is_prime(++num)) n--;
    }
    return num;
}

int main()
{
    int k;cin >> k;
    while(k--){
        int n; cin >> n;
        cout << nth_prime(n) << endl;
    }
    return 0;
}
