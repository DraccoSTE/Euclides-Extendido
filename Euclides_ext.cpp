#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int EuclidesEx(int x, int y){
    int aux;
	int v1 = 1, v2 = 0;
    while(y>0){
        int z=x/y;
        int result=x-(z*y);
        x=y;
        y=result;
        aux=v1-(z*v2);
        v1=v2;
        v2=aux;
    }
    return v1;
}
main(){
	cout<<"Euclides Extendido"<<endl;
	int x,y,z;
	x=29;
	y=352;
	z=EuclidesEx(x,y);
	cout<<z<<" = "<<x<<"*x + "<<y<<"*y"<<endl;
	cout<<endl<<"RPTA: "<<z<<endl;
	
}
