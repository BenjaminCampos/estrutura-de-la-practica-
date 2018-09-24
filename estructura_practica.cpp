//benjamin campos salvador ico 22
//practica 1 estructuras
//21/08/18
#include<iostream>
#include<conio.h>
using namespace std;

int num=10;
struct casa{
	char Nombre[30];
	int edad;
	char sexo[15];
	};

int main()
{
	struct casa person[num];
	cout<<"BIENDENIDO POR FAVOR LLENE LOS REGISTROS CON LOS DATOS QUE SE PIDEN"<<endl;
	cout<<endl<<"INTRODUSCA EL NUMERO DE INTEGRANTES DE SU CASA"<<endl;
	cin>>num;
	
	for(int i=0;i<num;i++)
	{
		fflush(stdin);
		cout<<endl<<"INTRODUSCA EL NOMBRE DEL INTEGRANTE ["<<i+1<<"] : ";
		cin.getline(person[i].Nombre,30,'\n');
		cout<<endl<<"INTRODUSCA LA EDAD DEL INTEGRANTE: ";
		cin>>person[i].edad;
		cout<<endl<<"INTRODUSCA EL SEXO DEL INTEGRANTE: ";
		fflush(stdin);
		cin.getline(person[i].sexo,15,'\n');
	}
	cout<<"el registro de los integrantes de su hogar es el siguiente:"<<endl;
	
	for(int i=0;i<num;i++)
	{
		cout<<endl<<"este es el nombre del integrante ["<<i+1<<"] "<<person[i].Nombre;
		cout<<endl<<" su edad: "<<person[i].edad;
		cout<<endl<<"su sexo: "<<person[i].sexo;
	}
	
	return 0;
}
