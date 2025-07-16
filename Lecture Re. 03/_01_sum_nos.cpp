#include <iostream>
using namespace std;

void printSum(int i, int sum){
    if(i < 1){
        cout<<sum;
        cout<<endl;
        return;
    }

    printSum(i-1, i + sum);

    
}

int main(){
    int n = 5;
    int sum = 0;
    
    printSum(n, sum);
    
}