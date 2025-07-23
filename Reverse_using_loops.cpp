/*Sanidhya Singh
24070123140
ENTC B2
*/

#include <iostream>
using namespace std;
int main(){
    long prn,a,b=0;
    cout<<"Enter your PRN: "<<endl;
    cin>>prn;
    while(prn>0){
        a=prn%10;
        b=b*10+a;
        prn=prn/10;
    }
    cout<<b<<endl;
    return 0;
}

/*Output
Enter your PRN: 
24070123141
14132107042
*/
