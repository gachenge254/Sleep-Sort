#include <iostream>
#include <ctime>    // for clock()

using namespace std;

void mySleep(int seconds) {
    clock_t start_time = clock();
    while (clock() < start_time + seconds * CLOCKS_PER_SEC) {
        // Busy wait (not efficient but works everywhere)
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    for(int i = 0; i < n; i++)
    {
        mySleep(arr[i]);
        cout << arr[i] << " ";
    }

    return 0;
}
