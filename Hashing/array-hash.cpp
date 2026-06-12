#include<iostream>
using namespace std;

int main() {
    int array[] = {1,3,2,1,4,2,3,2,1};
    int hash[10] = {0};

    for(int i = 0; i < 9; i++) {
        hash[array[i]]++;
    }

    for(int i = 0; i < 10; i++) {
        if(hash[i] > 0)
            cout << i << " -> " << hash[i] << endl;
    }

    return 0;
}