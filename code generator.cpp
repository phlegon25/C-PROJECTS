#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    //generate number between 1000 and 9999
    int code = rand()% 9000 + 1000;
    cout << "YOUR 4-DIGIT CODE IS: " << code <<endl;

    return 0;
}