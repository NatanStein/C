#include <iostream>
#include<math.h>

using namespace std;
float IMC(float peso, float H)
{
    return peso/(H*H);
}
float aprova(int alt , int alap)
{
    return (alap*100)/alt;
}
float MA3 (float x,float y,float z)
{
    return (x+y+z)/3;
}
float MP2 (float x, float y)
{
    return (x*2+y*4)/6;
}
float contagorj (float conta)
{
    return conta*1.1;
}
float calcula_soma(float x,float y)
{
    return x+y;
}
float calcula_media(float x,float y)
{
    return calcula_soma(x,y)/2;
}
int processaAluno (int mat,float p1, float p2, float t1,float t2)
{
    float mp,mt;
    mp = (p1+p2)/2;
    mt = (t1+t2)/2;
    cout << "Sua matricula:" << mat <<endl<<"Sua media das provas"<<mp<<endl<<"Sua media dos trabalhos"<<mt<<endl;
    return 0;
}
int SemanasDias (int dias)
{
    cout << "Decorreram um totsl de " << dias/7 << " semanas e " << dias%7 << " dias";
    return 0;
}
int QttCedulas(int valor)
{
    int c100,c50,c20,c10,c5,c2,c1;
    c100 = valor/100;
    c50 =  (valor%100)/50;
    c20 = ((valor%100)%50)/20;
    c10 = (((valor%100)%50)%20)/10;
    c5 = ((((valor%100)%50)%20)%10)/5;
    c2 = (((((valor%100)%50)%20)%10)%5)/2;
    c1 = (((((valor%100)%50)%20)%10)%5)%2;
    cout << "O numero de cedulas utilizados para sacar R$" << valor <<endl<<"Notas de 100: "<<c100<<endl<<"Notas de 50: "<<c50<<endl<<"Notas de 20: "<<c20<<endl<<"Notas de 10: "<<c10<<endl<<"Notas de 5: "<<c5<<endl<<"Notas de 2: "<<c2<<endl<<"Notas de 1: "<<c1<<endl;
    return 0;
}
float VolumeCaixa (float a,float b,float c)
{
    return a*b*c;
}
float VolumeCilindro (float r,float h)
{
    return M_PI*r*r*h;
}
float Ex13 (float a,float b,float h,float d)
{
    return VolumeCaixa(a,b,h)-VolumeCilindro(d/2,h);
}
float Distancia (float x1,float x2,float y1,float y2)
{
    return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
}
int main()
{
    cout << IMC(68,1.75)<<endl;
    cout << "Aprovados: " << aprova(50,25) << "%\n";
    cout << MA3(20,10,30)<<endl;
    cout << MP2(2,6)<<endl;
    cout << contagorj(100)<<endl;
    cout << calcula_media(10,12)<<endl;
    processaAluno(19010,10,8,7,9);
    SemanasDias(19);
    QttCedulas(299);
    cout << Ex13(10,10,10,4)<<endl;
    cout << Distancia(0,3,0,4);
}

