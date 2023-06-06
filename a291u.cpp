#include <iostream>

using namespace std;

void nAnB(){
    int n,i,a,b;
    char pw[4];
    char tried[4];
    
    cout<<"Please enter the password : \n";
    cin>>pw;
    cout<<"try times : ";
    cin>>n;
    
    for(i=1;i<=n;i++){
        cin>>tried;
        for(i=0;i<4;i++){
            if(pw[i]==tried[i]){
                a++;
            }
        }
    }
}

int main()
{
    nAnB();
    return 0;
}
