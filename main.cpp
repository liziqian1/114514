#include <iostream>
#include <string>

using namespace std;

int main(){
    int count=0;
    string strA="哼哼哼", strB="啊";
    
    cout<<"请输入“啊”的个数： ";
    cin>>count;
    cout<<strA;
    for(int i=0;i<count;++i){
        cout<<strB;
    }
    cout<<endl;
    
    return 0;
}
