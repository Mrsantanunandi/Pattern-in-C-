//Enter n:-> 5
//     A 
//    B C 
//   D E F 
//  G H I J 
// K L M N O 
#include <iostream>
using namespace std;
int main() {
    int i,j,n;
    cout<<"Enter n:-> ";
    cin>>n;
    char ch=65;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        for(j=0;j<i+1;j++)
        {
            cout<<ch;
            cout<<" ";
            ch++;
        }
        cout<<endl;
    }
    return 0;
}
