#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
    bool answer = true;
    int divisor = 1;
    int i;
    int sum=0;
    int temp;
    
    for(i=0;i<4;i++){
        divisor*=10;
        if(x/divisor==0){
            break;
        }
    }
    
    temp=x;
    
    for(int j=0;j<i+1;j++){
        divisor/=10;
        sum+=temp/divisor;
        temp%=divisor;
    }
    
    if(x%sum!=0)
        answer=false;
    
    return answer;
}