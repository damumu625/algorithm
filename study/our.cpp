#include<iostream>
void simon(int);

int main(){
    using namespace std;
    int count;
    cin >> count;
    simon(count);
    return 0;
}

void simon(int n){
    using namespace std;
    cout << "simon:" << n << endl;
}
