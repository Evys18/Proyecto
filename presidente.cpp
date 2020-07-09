#include<iostream>
using namespace std;
int main(){
     int cand1=0,cand2=0,cand3=0;
     char opt='a';
     while(opt!='d'){
     	
    cout<<"INGRESE EL VALOR PARA ELEGIR SU CANDIDATO"<<endl;
    cout<<"a) Para votar por Kenia"<<endl;
    cout<<"b) Para votar por Carlos"<<endl;
    cout<<"c) Para votar por Daniela"<<endl;
    cout<<"d) Para Terminar"<<endl;
	cin>>opt;

		switch(opt){
    		case 'a':
			cand1=cand1+1;
			cout<<"A votado por Kenia"<<endl;
			break;
  			case 'b':
			cand2=cand2+1;
			cout<<"A votado por Carlos"<<endl;
			break;
			case 'c':
			cand3=cand3+1;
			cout<<"A votado por Daniela"<<endl;
			break;
			case 'd':
			cout<<"Adios"<<endl;
			default:
			cout<<"Voto Nulo"<<endl;
		}
	}
	cout<<"Los votos obtenidos fueron:"<<endl;
	cout<<"Kenia   Obtuvo "<<cand1<<" Votos "<<endl;
	cout<<"Carlos  Obtuvo "<<cand2<<" Votos "<<endl;
	cout<<"Daniela Obtuvo "<<cand3<<" Votos "<<endl;
	

  return 0;
  
 }
