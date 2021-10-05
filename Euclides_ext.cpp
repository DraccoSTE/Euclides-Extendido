#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> extMcd(int a, int b)
{
    vector<int> temp;
    int q = a / b;
    int res = a - (q * b);

    int s1;
    s1 = 1;
    int s2;
    s2 = 0;
    int s = s1 - (q * s2);

    int t1;
    t1 = 0;
    int t2;
    t2 = 1;
    int t = t1 - (q * t2);

    while (res > 0)
    {
        a = b;
        b = res;
        q = a / b;
        res = a - (q * b);

        s1 = s2;
        s2 = s;
        s = s1 - (q * s2);

        t1 = t2;
        t2 = t;
        t = t1 - (q * t2);

    }
    temp.push_back(b);
    temp.push_back(s2);
    temp.push_back(t2);

    return temp;
}
main(){
	cout<<"Euclides Extendido"<<endl;
	int x,y,z;
	x=29;
	y=352;
	vector<int>ext=extMcd(x,y);
	cout<<"Dada la ecuacion gcd(a;b) = ax + by"<<endl;
	cout<<endl<<"El gcd("<<x<<";"<<y<<")="<<ext.at(0)<<endl;
	cout<<"Valor de x es "<<ext.at(1)<<endl;
	cout<<"Valor de y es "<<ext.at(2)<<endl;
	cout<<"Por lo tanto: "<<endl;
	cout<<ext.at(0)<<"=a*"<<ext.at(1)<<"+b*"<<ext.at(2)<<endl;
}
