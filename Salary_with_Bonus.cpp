#include<iomanip>
#include <iostream>
using namespace std;
int main(){

    string name;
    double salary, sale, sold, sum;
    cin>> name;
    cin>> salary;
    cin>> sale;

    sold= sale*15/100;
    sum= salary+sold;
    cout<< "TOTAL = R$ " <<fixed<<setprecision(2)<<sum<<endl;
return 0;
}
