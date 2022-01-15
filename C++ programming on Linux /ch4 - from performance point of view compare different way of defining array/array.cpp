#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <chrono>
#include <array>
#include <vector>

using namespace std;





int main(){
    int myInt[100000];
    std::array<int,100000> myArr;
    std::vector<int> myVec;

    srand(time(NULL));

    chrono::high_resolution_clock::time_point time_start = chrono::high_resolution_clock::now();

    for(int i=0;i<100000;i++){
        myArr.at(i) = rand()%100+1;
    }

    chrono::high_resolution_clock::time_point time_end = chrono::high_resolution_clock::now();
    chrono::microseconds exec_time = chrono::duration_cast<chrono::microseconds>(time_end-time_start);
    cout << "myInt array running time is " << exec_time.count() << " micro" <<endl;
    return 0;
}
