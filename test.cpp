#include <iostream>

using namespace std;

void functionA();
void functionB();

int main(int argc, char const *argv[]){

    functionA();
    functionB();
    
    return 0;
}

void functionA(){
    cout << "Function A" << endl;
}
void functionB(){
    cout << "functionB" << endl;
}