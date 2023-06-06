#include <iostream>

using namespace std;

void N(){
    int n,Num;
    scanf("%d", &n);
    
    while(n%2==0){
        Num++;
        n/=2;
    }
    
    printf("%d",Num);
}

int main()
{
    N();
    return 0;
}
