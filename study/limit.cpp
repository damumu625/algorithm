#include<iostream>
#include<climits>
int main(){
    using namespace std;
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;
    cout << "int " << sizeof (int) << " bytes." << n_int <<endl;
    cout << "short " << sizeof n_short << " bytes." << n_short <<endl;
    cout << "long " << sizeof n_long << " bytes." << n_long <<endl;
    cout << "llong " << sizeof n_llong << " bytes." << n_llong <<endl;
    return 0;
}
