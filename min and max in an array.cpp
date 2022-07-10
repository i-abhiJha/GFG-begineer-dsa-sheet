
#include bitsstdc++.h
using namespace std;
#define ll long long

pairlong long, long long getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin  t;
    while (t--) {
        int n;
        cin  n;
        ll a[n];
        for (int i = 0; i  n; i++) cin  a[i];

        pairll, ll pp = getMinMax(a, n);

        cout  pp.first     pp.second  endl;
    }
    return 0;
}


pairlong long, long long getMinMax(long long a[], int n) {
    long long int min=INT_MAX;
    long long int max=INT_MIN;
    for(int i=0;in;i++){
        if(a[i]max){
            max=a[i];
        }
        if(a[i]min){
            min=a[i];
        }
    }
    pairlong long, long long ans;
    ans.first=min;
    ans.second=max;
    return ans;
    
}