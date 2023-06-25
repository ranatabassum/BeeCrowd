#include <iostream>

using namespace std;

int main() {

    int N,s;
    cin>> N;

    for(int i=2; i<=N; i+=2 ){
        if(i%2==0){
                s=i*i;

            cout<< i<<"^"<<"2"<<" = "<<s<< endl;
        }
    }


    return 0;
}

