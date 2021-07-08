#include <iostream>
#include <cstdio>
using namespace std;

/*i
Add `int max_of_four(int a, int b, int c, int d)` here.
*/int result;
int max_of_four(int a,int b ,int c,int d){
    
    if (a>b && a>c && a>d){
        result=a;
    } 
    else if (b>c && b>d) {
         result=b;
         }
    else if (c>d) {
    result= c;
    }
    else if {
    result =d;
    }
    return result;
}


int main() {
    int a, b, c, d;
    cin>>a>>endl>>b>>endl>>c>>endl>>d>>endl;
    int ans = max_of_four(a, b, c, d);
    cout<<ans;
    
    return 0;
}