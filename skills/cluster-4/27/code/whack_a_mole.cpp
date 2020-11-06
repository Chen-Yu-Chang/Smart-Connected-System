#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int hole[10]={0};
    int point=0;
    char push;
    int hole_num=rand()%9;
    bool tf=true;
    cout << "Welcome to Whack-a-Mole Game" << endl;
    while (tf){
        hole[hole_num]=1;
        cout << "Push(p), Not Push(n), or Quit Game(q): ";
        cin >> push;
        if (push == 'q'){
            cout << "End Game" << endl;
            tf=false;
        }
        else if (push == 'p'){
            cout << "Successfully beat the mole" << endl;
            point=point+10;
            tf=true;
            hole[hole_num]=0;
        }
        else if (push == 'n'){
            cout << "You missed" << endl;
            tf=true;
            hole[hole_num]=0;
        }
        else{
            cout << "Enter Valid Input" << endl;
            tf=true;
        }
    }
    cout << "You got a total of " << point << " points\n";
}
