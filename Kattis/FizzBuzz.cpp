#include <iostream>
#include <cstdio>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int x,y,n;
    cin >> x >> y >> n;
    
    // we iterate through each number from 1 to n
    for(int i=1; i<=n; i++){
        // checking if i is divisble by both
        if(i%x == 0 && i%y == 0){
            cout << "FizzBuzz" << endl;
        }
        else if (i%x == 0){
            cout << "Fizz" << endl;
        }
        else if (i%y == 0){
            cout << "Buzz" << endl;
        }
        // printing i if neither x or y divide i
        else {
            cout << i << endl;
        }
    }

    return 0;
}
