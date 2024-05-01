#include <iostream>
using namespace std;


int main(){
    int n;
    cin>>n;

    for (int row = 0; row <=n; row++)
    {
        for (int nst = 1; nst <=row; nst++)
        {
            cout<<"*";
        }
        cout<<"\n";
        
    }
    
    



    return 0;
}