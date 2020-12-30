#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    int num=sqrt(n);
    
    if(pow(num,2)==n)
        answer=pow(num+1,2);
    else
        answer=-1;
    
    return answer;
}