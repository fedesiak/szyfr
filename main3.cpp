#include <iostream>
#include <math.h>

using namespace std;

string szyfr(string a)
{
    int r;
    r = ceil(sqrt(a.length()));
    char tab[r][r];
    int k=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
                if(a.length()>k)
                {
                               tab[i][j]=a[k];
                }
                else{
                tab[i][j]='_';
                }
                k++;
                cout<<tab[i][j]<<" ";
        }
cout<<endl;
    }
    return a;
}

int main()
{
    cout<<szyfr("informatyka");
    return 0;
}
