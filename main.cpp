#include <iostream>
using namespace std;

int main ()
{
    cout << "the following are numbers 1 - 15 squared." << endl;
    int counter = 0; //once the first iteration happens, this inc by 1.
    int startNum = 1; //the num being ^2 starts at 1, this has to inc by 1 each iteration.
    while (startNum <= 15)
    {
        int squared = (startNum * startNum);
        counter++; //at iter 1, 1 is ^2.
        startNum++;
        cout << "iteration #: " << counter << "\t" << "number^2 = " << squared << endl;
    }
    return 0;
}
