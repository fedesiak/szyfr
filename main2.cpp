#include <iostream>

using namespace std;

string szyfr(string s, int k)
{
string wyraz = "";
int j = 0;
while(s.length()!=wyraz.length())
{
for(int i=j;i<s.length();i+=k){
        wyraz+=s[i];
}

j++;
}
return wyraz;

}

int main()
{
    cout<<"slowo komputer zakodowane: "<<szyfr("monitor",2)<<endl;


}
//matura mtraua
//kniuaoftr
//monitor mntroio
