#include<iostream>
using namespace std;

class DiaAnyo{
    private:
    int mes,dia;
    public:
    DiaAnyo(int, int);
    void igual(int, int);
    void visualizar(int,int);
};

DiaAnyo::DiaAnyo(int _mes, int _dia){
    mes=_mes;
    dia=_dia;
}

void DiaAnyo::igual(int _mes, int _dia){
    if(_mes==mes && _dia==dia){
        cout<<"coincide";
    }
    else cout<<"no coincide...";
}

void DiaAnyo::visualizar(int _mes, int _dia){
    cout<<"mes= "<<_mes;
    cout<<"dia= "<<_dia;

}

int main(){
    int m,d;
    DiaAnyo d1(3,26);
    cout<<"mes= ";
    cin>>m;
    cout<<"dia= ";
    cin>>d;
    d1.igual(m,d);
    d1.visualizar(m,d);
    DiaAnyo *d2=new DiaAnyo(3,7);
    d2->igual(m,d);
    d2->visualizar(m,d);

}
