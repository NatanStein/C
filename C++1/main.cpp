#include <iostream>
#include <math.h>
using namespace std;
float h,p,m;
int main()
{
cout <<"Coloque seu peso e sua altura: \n";
cin >> p >> h;
m = p/(h*h);
if (m <=25)
{
    cout <<"O seu IMC e bom "<<m;
}
else if (m >= 30)
{
    cout <<"O seu IMC e pessimo "<<m;
}
else
{
    cout <<"O seu IMC e acima do peso "<<m;
}
}

