#include <iostream>

using namespace std;
int main(){


    int second, hour, hourRemain, minute,minuteRemain;
    cin>> second;
     hour= second/3600;
     hourRemain= second%3600;
     minute=hourRemain/60;
     minuteRemain=hourRemain%60;


    cout<< hour<<":"<<minute<<":"<<minuteRemain<<endl;
return 0;
}

