#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<bool> eratos;
    
    eratos.assign(n-1,true);
    
    for(int i=2;i*i<=n;i++){
        for(int j=i;j*i<=n;j++)
            eratos[i*j-2]=false;
    }
    
    for(int i=0;i<eratos.size();i++){
        if(eratos[i]==true)
            answer++;
    }
    
    return answer;
}