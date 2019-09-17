#include <bits/stdc++.h>

using namespace std;

// This is a good example of how to utilize the conditional operator

int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    std::string output = ((N%2==1) || ((N%2==0)&&(6<=N)&&(N<=20))) ? "Weird": "Not Weird";
    std::cout << output;
    return 0;
}
