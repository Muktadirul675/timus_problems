#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int sum = 0;
    if(n>0){
        while(n >= 1){
            sum += n--;
        }
    }else{
        while(n<=1){
            sum += n++;
        }
    }
    cout << sum;
    return 0;
}
