#include <iomanip>
#include<iostream>
using namespace std;
int main(){

double A, R;
double n = 3.14159;
cin>> R;

A = n*R*R;
cout <<fixed << setprecision(4)<< "A="<<A<<endl;
return 0;
}
