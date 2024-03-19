#include <iostream>
using namespace std;

main(){
	//array = arreglo o coleccion o matriz
	// se utilizan para almacenar varios valores en una sola variable
	
	string semana[7]={"Lunes","Martes","Miercoes","jueves","Viernes","Sabado","Domingo"};
	
		semana[3] = "Jueves";
		for(int i=0;i<7;i++){
			cout<<semana[i]<<endl;
		}
	
	/*int dato;
	cout<<"Ingres Dato: ";
	cin>>dato;
	cin.ignore();
	cout<<"Ingrese Nombre Completo:";
	getline(cin,nombre);
	cout<<nombre<<endl;
	
	int tam=0,suma=0,promedio=0;
	int notas[tam];
	char res;
	do{
		tam++;
		cout<<"Ingrese nota "<<tam<<":";
		cin>>notas[tam-1];
		cout<<"Desea ingresar otra nota(s/n):";
		cin>>res;
	}while(res=='s'||res=='s');
	
	
	for(int i=0;i<tam;i++){
		suma += notas[i];
	}
	
	promedio = suma / tam;
	
	cout<<"El promedio es: "<<promedio<<endl;
	
	cout<<"Cuantas notas desea ingresar:";
	cin>>tam;
	int notas[tam];
		for(int i=0;i<tam;i++){
			cout<<"Ingrese Nota:"<<i+1<<":";
			cin>>notas[i];
		}
		
		for(int i=0;i<tam;i++){
			suma += notas[i]; // suma = suma + notas[i]
		}
		
		promedio = suma / tam;
		cout<<"El Promedio es: "<<promedio<<endl;
	
	int notas[4];	//indice o la posicion del arregle inicia en 0
	notas[0] = 80;	//nota1 = 80
	notas[1] = 65;	//nota2 = 65
	notas[2] = 60;
	notas[3] = 75;
	
	for(int i=0; i<4;i++){
		cout<<i<<"."<<notas[i]<<endl;	
	}
	
	
	for(int i : notas){
		cout<<i<<endl;
	}*/

	

	system("pause");
}
