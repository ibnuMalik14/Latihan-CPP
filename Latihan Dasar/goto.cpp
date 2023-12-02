#include <iostream>
using namespace std;

int main() {
    int i = 1;
    int hasil = 2;

    // Label untuk goto
    mulai:
    cout << "Iterasi ke "<< i << " : " << hasil << endl;   
    hasil *= 2;	    
    i++;
    
    if (i <= 10) {
        goto mulai;
    }
    

    return 0;
}
