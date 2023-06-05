#include <iostream>

using namespace std;

void square(){
    int T,i,a,b,j=1,n=0;
    scanf("%d", &T);
    
    for(i=1;i<=T;i++){
        scanf("%d", &a);
        scanf("%d", &b);
            
        while(j*j>=a && j*j<=b){
            n+=j*j;
            j++;
        }
    printf("case %d : %d",i,n);   
    }
}

int main(){
    square();
    return 0;
    
}
