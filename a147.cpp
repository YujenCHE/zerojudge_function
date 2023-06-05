#include <iostream>

using namespace std;

void Print(){
    int i,n;
    scanf("%d", &n);
    for(i=1;i<n;i++){
        if(i>0 && i%7!=0){
            printf("%d ",i);
        }
    }
}


int main(){
    Print();
    return 0;
}
