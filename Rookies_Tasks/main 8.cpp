#include <iostream>
using namespace std;

int main() {
    int n,m,a,b;
    cin >> n;
    cin >> m;
    cin>> a;
    cin>> b;

    int minCost = n * a;
    int tickets = n / m;
    minCost = min(minCost, tickets * b + (n % m) * a);

    cout << minCost << endl;

    return 0;
}
