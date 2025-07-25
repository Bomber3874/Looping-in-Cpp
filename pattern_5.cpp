/*Sanidhya Singh
24070123140
ENTC B2*/

#include <iostream>
using namespace std;

int main(){
    int i,j;
    char a='a';
    int n=5;
    for (i=1;i<=n;i++){
        for(j=5;j>=i;j--){
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
    return 0;
}

/*Output
a b c d e 
f g h i 
j k l 
m n 
o 
*/