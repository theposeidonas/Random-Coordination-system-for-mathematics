#include <iostream>
#include <math.h>
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;


class Dot 
{
private :
    
        float x,y,z,ori;
       
public :
         Dot()
        {
            x=0;y=0;z=0;ori=0;
        }
        float originhesapla(Dot a)
        {
            ori=sqrt((x*x)+(y*y)+(z*z));
            return ori;
        }
        float ikinokta(Dot b)
        {
            float sonuc;
            sonuc=sqrt(((x-b.x)*(x-b.x))+((y-b.y)*(y-b.y))+((z-b.z)*(z-b.z)));
            return sonuc;
        }
        void veridegistir(float q,float b,float c)
        {
            x=q;y=b;z=c;
        }
        void goster()
        {
            cout<<"x="<<x<<";y="<<y<<";z="<<z<<endl;
        }
    
    
};


int main()
{
    srand (time(NULL));
    Dot x[5];
    cout<<"Oluşturulan nokta koordinatları:"<<endl;
    for(int i=0;i<5;i++)
    {
        x[i].veridegistir(rand() %16,rand() %16,rand() %16);
        x[i].goster();
        
    }
    cout<<"---------------------------------------------"<<endl;
    for(int i=0;i<5;i++)
    {
        for(int j=i;j<5;j++)
        {
            if(i!=j){
            cout<<"Nokta "<<i+1<<" ile Nokta "<<j+1<<" arası uzaklık = "<<x[i].ikinokta(x[j])<<endl;
        }
            
        }
    }
    cout<<"---------------------------------------------"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<i+1<<"'inci noktanın orijine olan uzaklığı = "<<x[i].originhesapla(x[i])<<endl;
    }
    return 0;
}
