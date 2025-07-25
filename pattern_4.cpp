/*Sanidhya Singh
24070123140
ENTC B2*/

#include <iostream>
using namespace std;

int main(){
    int i,j;
    char a='a';
    int n=4;
    for (i=1;i<=4;i++){
        for(j=1;j<=i;j++){
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
    return 0;
}

/*Output
a 
b c
d e f
g h i j
*/