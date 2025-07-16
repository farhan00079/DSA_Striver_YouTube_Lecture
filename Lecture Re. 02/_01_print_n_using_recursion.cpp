#include <iostream>
using namespace std;

void printNum(int i, int n){
    if(i>n){
        return;
    }
    cout<<"farhan"<<endl;
    printNum(i+1, n);
}

int main(){
    int i = 1;
    int n;
    cin>>n;
    printNum(i, n);
}