#include <iostream>
#include<iomanip>
using namespace std;


int main()
{
   float a,b,c;
   cin>>a>>b>>c;
   float max=a;
   (a>b)?(max):(max=b);
   (a>c)?(max):(max=c);
   float min=a;
   (a>b)?(min=b):min;
   (a>c)?(min=c):min;
   float g=(a+b+c-max-min);
   int d=(float)max;
   int mid=(float)g;
   int f=(float)min;
    (min==f)?(cout<<setprecision(1) << fixed << min<<" "):(cout<<min<<" ");

    (mid==g)?( cout<< setprecision(1) << fixed << g<<" "):(cout<<g<<" ");

    (max==d)?( cout<< setprecision(1) << fixed << max):(cout<<max);

    return 0;
}
