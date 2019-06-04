#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <string>
#include <random>
#include <thread>
#include <chrono>
#include <stdlib.h>
#include <time.h> 

using namespace std;

int main() {

int max = -1;
string c="";

do{
cout << "How big should the portal be? (input > 0)" <<endl;
cin >> max;
}while(max<0);

cout <<endl;

for(int y=0;y<max;y++){
    c=c+"#";
}

cout << "\033[90;100m" << c << "\033[0m\n";
c="";


//////////////////////////////////////////////////////////
for(int i=0;i < max-2; i++){
    for(int j=0;j<=max-1;j++){
        if (j==0 || j==max-1){
            c=c+"\033[90;100m#";
        }else{
            if((j+i)%2==0){
            c=c+"\033[35;105m/";
            }else{
            c=c+"\033[35;105m|";
            }
        }

    }
        cout  << c <<endl;
        c="";
}


//////////////////////////////////////////////
for(int y=0;y<max;y++){
    c=c+"#";
}

cout << "\033[90;100m" << c << "\033[0m\n";
c="";

cout << "\033[31mNether Portal\033[0m\n";

cout <<endl;
}
