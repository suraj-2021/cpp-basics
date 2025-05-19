#include <iostream>
using namespace std;

int main() {
    cout << "Number\tCube" << endl;
    cout << "------\t----" << endl;
    
    for(int i = 1; i <= 10; i++) {
        int cube = i * i * i;
        
        if(i <= 5) {
            // For numbers 1 to 5
            cout << i << "\t" << cube << endl;
        } else {
            // For numbers 6 to 10
            cout << i << "\t" << cube << endl;
        }
    }
    
    return 0;
}
