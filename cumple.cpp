#include<iostream>
using namespace std;

class DiaAnyo{
    private:
    int mes,dia;
    public:
    DiaAnyo(int, int);
    bool igual(const DiaAnyo& n) const{
        if(dia==n.dia && mes==n.mes){
            return true;
        }
        else return false;
    }

    void visualizar(){
        cout<<"mes: "<<mes<<endl;
        cout<<"dia: "<<dia<<endl;
    }
};

DiaAnyo::DiaAnyo(int _mes, int _dia){
    mes=_mes;
    dia=_dia;
}

int main(){
    int m,d;
    DiaAnyo *hoy;
    DiaAnyo *cumple;
    cout<<"Ingrese el mes y dia de hoy";
    cin>>m>>d;
    hoy=new DiaAnyo(m,d);
    cout<<"Ingrese el mes y dia de su cumpleaños: ";
    cin>>m>>d;
    cumple=new DiaAnyo(m,d);
    if(hoy->igual(*cumple)){
        cout<<"Feliz cumple!....";
    }
    else cout<<"Que tenga un buen día...!";

}
