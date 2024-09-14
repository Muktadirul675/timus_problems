#include <iostream>

using namespace std;

int main()
{
    int n; string s;
    cin >> n >> s;
    int k = s.length(), to = k;
    if(n%k) to = n % k;
    int prod = n;
    while(n != to){
        prod *= n-k;
        n-=k;
    }
    cout << prod;
    return 0;
}
