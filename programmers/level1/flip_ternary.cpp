#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int num=n;
    int i=1;
    int j=1;
    int temp;
    
    while(num>=i)
        i*=3;
    
    while(num!=0){
        i/=3;
        temp=num/i;
        num%=i;
        answer+=temp*j;
        j*=3;
    }
    
    return answer;
}