#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    vector<string> w;
    int initial=4;
    
    w.push_back("SUN");
    w.push_back("MON");
    w.push_back("TUE");
    w.push_back("WED");
    w.push_back("THU");
    w.push_back("FRI");
    w.push_back("SAT");
    
    for(int i=1;i<a;i++){
        if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10)
            initial+=31;
        else if(i==4 || i==6 || i==9 || i==11)
            initial+=30;
        else if(i==2)
            initial+=29;
    }
    
    initial+=b;
    initial%=7;
    
    answer=w[initial];
    
    return answer;
}