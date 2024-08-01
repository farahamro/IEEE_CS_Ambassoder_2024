#include<iostream>
using namespace std;
int main()
{


        int n,a,b,f=0;
        cin>>n;
        for(int i = 0 ; i < 2*n ; i++) {
            if(i%4 == 0 or i%4 == 1) {
                f = 1;
            }
            else {
                f=0;
            }
            for(int j = 0 ; j < 2*n ; j++) {
                if(j%4 == 0 or j%4 == 1) {
                    if(f==1)
                        cout<<"#";
                    else
                        cout<<".";
                }
                else {
                    if(f==1)
                        cout<<".";
                    else
                        cout<<"#";
                }
            }
            cout<<endl;
        }

    return 0;
 }
