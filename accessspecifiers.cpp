#include <iostream>
using namespace std;

class MyClass {
public:
    int publicVar = 10;
    
protected:
    int protectedVar = 20;
    
private:
    int privateVar = 30;
    
public:
    void showAll() {
        cout << "Inside class - Public: " << publicVar << endl;
        cout << "Inside class - Protected: " << protectedVar << endl;
        cout << "Inside class - Private: " << privateVar << endl;
    }
};

class Child : public MyClass {
public:
    void showInherited() {
        cout << "In derived class - Public: " << publicVar << endl;
        cout << "In derived class - Protected: " << protectedVar << endl;
        // cout << privateVar;  // Error - can't access private
    }
};

int main() {
    MyClass obj;
    
    obj.showAll();  // Works - calling public function
    
    cout << "From main - Public: " << obj.publicVar << endl;  // Works
    // cout << obj.protectedVar;  // Error - can't access protected
    // cout << obj.privateVar;    // Error - can't access private
    
    Child child;
    child.showInherited();
    
    return 0;
}
