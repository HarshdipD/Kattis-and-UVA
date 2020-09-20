#include <iostream>
#include <sstream>
#include <string>
#include <vector>

// declaring definitions
using std::vector;
using std::cin;
using std::cout;
using std::string;
using std::istringstream;
using std::endl;

int main() {
    string s;
    
    // getting until eof
    while(getline(cin, s)) {
        istringstream is(s);
        
        // initialzing vector because we don't know the input sizes of each row
        vector<int> v;
        int sum = 0;
        int n;
        
        while(is >> n) {
            v.push_back(n);
            sum += n;
        }
        
        // we add all elements in string and divide it by 2 
        // and compare it with each element. if they're equal that is our answer
        for(auto i : v) {
            if(sum - 2*i == 0) {
                cout << i << endl;
                break;
            }
        }

    }
}
