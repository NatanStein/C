#include <iostream>
#include <cstdlib>
#include <ctime>
#include <time.h>

using namespace std;
void bubbleSort (int *v,int i)
{
    if(i<1)
    {
        return;
    }
    for(int k=0;k<i;k++)
    {
        int lixo;
        if(v[k]>v[k+1])
            {
                lixo = v[k+1];
                v[k+1]=v[k];
                v[k] = lixo;
            }
    }
    bubbleSort(v,i-1);
}
int main()
{
    srand(time(NULL));
    int v[10];
    for(int i=0;i<=10;i++)
    {
        v[i]=rand()%100;
        cout<<v[i]<<endl;
    }
    bubbleSort(v,10);
    cout<<"Agora ordenada: "<<endl;
    for(int j=0;j<10;j++)
    {
        cout<<v[j]<<endl;
    }
    return 0;
}
