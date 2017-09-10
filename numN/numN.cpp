#include <iostream>

using namespace std;

int numN(int n)
{
    if(n==0){
        return 0;
    }
    else{
        cout << n <<endl;
        numN(n-1);
    }
}

int main()
{
    numN(10);
    return 0;
}
