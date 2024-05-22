//podstawianie
#include <iostream>

using namespace std;

string podstawianie(string w, string k)
{
    string wynik = "";
    int j = 0;
    for(int i=0;i<w.length();i++)
    {
        if((int)w[i]+(int)k[j]-64>90)
        {
            wynik+=(char)((int)w[i]+((int)k[j])-64-26);
        }
        else
        {
            wynik+=(char)((int)w[i]+((int)k[j])-64);
        }
        j++;
        if(j==k.length())
        {
            j=0;
        }

    }
    return wynik;
}

int main()
{
    cout<<podstawianie("MARTA", "TOR");
    return 0;
}
