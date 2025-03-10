#include <iostream>
using namespace std;

template <typename T>
class vector{
    T *v;
    int size;
    
    public:
    vector(int m){
        size = m;
        v = new T[size];
        
        for(int i=0;i<size;i++){
            v[i] = 0;
        }
    }
    
    vector (T*a, int m){
        size = m;
        v = new T[size];
        for(int i=0;i<size;i++){
            v[i] = a[i];
        }   
    }
    
    T operator*(vector& x){
        T sum = 0;
       
        for(int i=0;i<size;i++){
            sum += this->v[i] *x.v[i];
        }
        return sum;
    }
};


int main () {
    int arr1[] = {3,2,1};
    
    vector <int> vec1(arr1,3);
    
    int arr[] = {1,2,3};
    vector <int> vec2(arr,3);
    
    int dot = vec1 * vec2;
    cout<<"Dot product: "<<dot<<endl;
    
    return 0;
}


