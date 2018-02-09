#include <iostream>
#include<string>
#include<cstdlib>

using namespace std;

//
void Primero(int*,int);
//
void Segundo(string);
//
void Tercero();

//
int* createArray(int);
//
int* ordenarArray(int*, int);

int main(){
	int respuesta=1;
	while(respuesta!=4){
		cout<<"----------Menu----------"<<endl;
		cout<<"1. Ejercicio 1"<<endl;
		cout<<"2. Ejercicio 2"<<endl;
		cout<<"3. Ejercicio 3"<<endl;
		cout<<"4. Salir"<<endl;
		cin>>respuesta;

		switch(respuesta){
			case 1:{
					   int size;
					   cout<<"Ingrese el tamaño del Arreglo: "<<endl;
					   cin>>size;
					   int* array=createArray(size);
					   for(int i=0;i<size;i++){
						   array[i]=rand()% 100+1;
					   }
					  array= ordenarArray(array,size);
					   Primero(array,size);
				   }
				   break;
			case 2:{
					   string permutacion;
					   while(permutacion.length()!=4){
						   cout<<"Ingrese un numero de 4 digitos: "<<endl;
						   cin>>permutacion;
					   }
					   Segundo(permutacion);
				   }
				   break;
			case 3:{
					   /*string año,mes,dia,date;
					   cout<<"Ingrese la fecha en forma de YYYYMMDD: "<<endl;
					   cin>>date;
					   for(int i=0;i<date.lenght();i++){
						   if(i>=0 && i<=3){
							   año+=date[1];
						   }
						   if(i>=4 && i<=5){
							   mes+=date[i];
						   }
						   if(i>=6 && i<=7){
							   dia+=date[i];
						   }
					   }
					   Tercero(año, mes, dia);*/
				   }
				   break;
		}
	}

	return 0;
}

//
void Primero(int* array,int size){
	for(int i=0;i<size;i++){
		cout<<array[i]<<",";
	}
	cout<<endl;
	cout<<"El medio es : "<<array[size/2]<<endl;
}

//
void Segundo(string cadena){
		char* digitos=new char[cadena.length()];
		for(int i=0;i<cadena.length();i++){
			digitos[i]=cadena[i];
			cout<<digitos[i];
		}
		cout<<endl;
		for(int i=0;i<=11;i++){
			if(i==0){
				cout<<"1.  "<<digitos[3]<<digitos[2]<<digitos[1]<<digitos[0]<<endl;
			}
			if(i==1){
				cout<<"2.  "<<digitos[0]<<digitos[2]<<digitos[1]<<digitos[3]<<endl;
			}
			if(i==2){
				cout<<"3.  "<<digitos[0]<<digitos[3]<<digitos[2]<<digitos[1]<<endl;
			}
			if(i==3){
				cout<<"4.  "<<digitos[0]<<digitos[3]<<digitos[1]<<digitos[2]<<endl;
			}
			if(i==4){
				cout<<"5.  "<<digitos[3]<<digitos[0]<<digitos[1]<<digitos[2]<<endl;
			}
			if(i==5){
				cout<<"6.  "<<digitos[3]<<digitos[0]<<digitos[2]<<digitos[1]<<endl;
			}
			if(i==6){
				cout<<"7.  "<<digitos[3]<<digitos[1]<<digitos[2]<<digitos[0]<<endl;
			}
			if(i==7){
				cout<<"8.  "<<digitos[2]<<digitos[0]<<digitos[1]<<digitos[3]<<endl;
			}
			if(i==8){
				cout<<"9.  "<<digitos[2]<<digitos[1]<<digitos[0]<<digitos[3]<<endl;
			}
			if(i==9){
				cout<<"10. "<<digitos[1]<<digitos[2]<<digitos[0]<<digitos[3]<<endl;
			}
			if(i==10){
				cout<<"11. "<<digitos[1]<<digitos[3]<<digitos[0]<<digitos[2]<<endl;
			}
			if(i==11){
				cout<<"12. "<<digitos[1]<<digitos[0]<<digitos[3]<<digitos[2]<<endl;
			}
		}
}

//
void Tercero(){
/*	int m_mes;
	int mes1, dia1, año1, fecha;
	año1=atoi(año.c_str());
	mes1=atoi(mes.c_str());
	fecha=atoi(dia.c_str());
	if(mes=="01"){
		cout<<"Enero,";
		m_mes=0;
	}
	if(mes=="02"){
		 cout<<"Febrero";
		 m_mes=3;
	}
	if(mes=="03"){
		 cout<<"Marzo";
		 m_mes=3;
	}
	if(mes=="04"){
		cout<<"Abril";
		m_mes=6;
	}
	if(mes=="05"){
		cout<<"Mayo";
		m_mes=1;
	}
	if(mes=="06"){
		cout<<"Junio";
		m_mes=4;
	}
	if(mes=="07"){
		cout<<"Julio";
		m_mes=6;
	}
	if(mes=="08"){
	    cout<<"Agosto";
		m_mes=2;
	}
	if(mes=="09"){
		cout<<"Septiembre";
		m_mes=5;
	}
	if(mes=="10"){
		cout<<"Octubre";
		m_mes=0;
	}
	if(mes=="11"){
		cout<<"Noviembre";
		m_mes=3;
	}
	if(mes=="12"){
		cout<<"Diciembre";
		m_mes=5;
	}

	dia1=  ((año1-1)%7+ ((año1-1)/4 -(3*((año1-1)/100+1)/4))%7+m_mes+fecha%7)%7;
	

*/
}

//
int* createArray(int size){
	int* arreglo = new int[size];
	return arreglo;
}


int* ordenarArray(int* arreglo, int lon){ 
	int Temp; 
	for(int i=0;i<lon;i++){
		for(int j=0;j<lon-1;j++){ 
			if(arreglo[j]<arreglo[j+1]){
				Temp=arreglo[j]; 
				arreglo[j]=arreglo[j+1];
				arreglo[j+1]=Temp;}
		}
	}
	return arreglo;
}

