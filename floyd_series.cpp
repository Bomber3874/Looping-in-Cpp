/*Sanidhya Singh
24070123140
ENTC B2*/

#include <iostream>
using namespace std;

int main(){
    int i,j,k;
    int n=4;
    k=1;
    for (i=1;i<=4;i++){
        for(j=1;j<=i;j++){
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
    return 0;
}

/*Output
1 
2 3
4 5 6
7 8 9 10
*/