//tworzy tabele odszyfrowanie
#include <iostream>
#include <math.h>

using namespace std;

string szyfrowanie(string a)
{
    string b="";
    int r = ceil(sqrt(a.length()));
    char tab[r][r];
    int k = 0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<r;j++)
        {
            if(k<a.length())
            {
                tab[i][j] = a[k];
            }
            else
            {
                tab[i][j] = '_';
            }
            k++;
            cout<<tab[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<r;j++)
        {
            b+=tab[j][i];
        }
    }
    return b;
}

int main()
{
    cout<<szyfrowanie("iry_nmk_faa_ot__");
    return 0;
}
