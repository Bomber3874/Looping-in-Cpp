/*Sanidhya Singh
24070123140
ENTC B2
*/

#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char pass[12]="Password123";
    char user_pass[12];
    int a=5;
    cout<<"Please enter 11 digits."<<endl;
    while(a>0){
        int b=0;
        cout<<"Enter your password: "<<endl;
        cin>>user_pass;
        for (int i=0;i<strlen(pass);i++ ){
            if (user_pass[i]==pass[i]){
                b++;
            }
            else{
                break;
            }
        }
        if (b==11){
            cout<<"Password is correct"<<endl;
            break;
        }
        else{
            if(a!=1){
                cout<<"Try again"<<endl;
                a--;
            }
            else{
                cout<<"You are out of attempts"<<endl;
                a--;
            }
        }
    }
    return 0;
}

/*Output
Please enter 11 digits.
Enter your password: 
Password124
Try again
Enter your password: 
Password123
Password is correct
*/
