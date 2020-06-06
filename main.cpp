#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int sum=0;
    vector<int> val({0,1,3,6,10,15,21,28,36,45});
    int ct=1;
    int rem=0;
    while (n>0){
        int digit=n%10;
        int rest=n/10;
        if(digit!=0)sum+=((rest*45+val[digit-1])*ct+digit*rem+digit);
        else sum+=((rest*45+0)*ct+digit*rem+digit);
        rem=digit*ct+rem;
        ct*=10;
        n/=10;
    }
    cout << sum <<endl;
}