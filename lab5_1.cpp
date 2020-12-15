#include<iostream>
using namespace std;

int main(){
    int N;
    int E = 0;
    int O = 0; 
    cout << "Enter an integer: ";
        cin >> N;
    while(N != 0){
        if(N%2 == 0){
            E = E+1;
        }else{
            O = O+1;
        }
        cout << "Enter an integer: ";
        cin >> N;
    }
    
    cout << "#Even numbers = " << E << endl;
    cout << "#Odd numbers = " << O;
    
    return 0;

}
