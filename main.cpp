#include <iostream>

using namespace std;

int main()
{
    int A,B;
    cin >> A;
    B=(A-1)%4;
    if(A==0){
            cout << 1 << endl;
        goto fit;
    }
    if(B==0){
        cout << 8 << endl;
    }else if(B==1){
        cout << 4 << endl;
    }else if (B==2){
        cout << 2 << endl;
    }else{
        cout << 6 << endl;
    }
    fit:
    return 0;
}
