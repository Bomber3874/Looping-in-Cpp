/*Sanidhya Singh
24070123140
ENTC B2*/

#include <iostream>
using namespace std;

int main() {
    int n = 5; 
    for (int i = 0; i < n; i++) {
        
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        
        for (int j = 0; j < 2*(n - i)-1 ; j++) {
            cout << "*";
        }
        cout << endl;
    }

    
    for (int i = 1; i < n; i++) {
        
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        
        for (int j = 0; j < 2*(i + 1)-1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

/*Output
*********
 *******
  *****
   ***
    *
   ***
  *****
 *******
*********
*/
