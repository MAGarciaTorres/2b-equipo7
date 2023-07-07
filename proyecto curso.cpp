#include<iostream>
#include<cmath>
#include<windows.h>
#include<string>
void gotoxy(int x, int y){
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon, dwPos);
}

using namespace std;

void EvaluaNum(int p = 1){ 

do{ 
system ("cls");
double num;

cout<<"digite un numero:";
cin>>num;

if( num>0 && num<1 ){ 
cout<<num<< " es un valor decimal"<<endl;} 

else{ 
if( num > 0){ 

cout<< num <<" es un valor entero"<<endl;} 

else{ 
cout << num << " es un valor negativo"<<endl;
} 
 
} 

cout<<"\ndigite 0 si desea salir o cualquier otro numero si desea seguir:";
cin>>p;
}while( p != 0);

} 


int multiplicacion() {
	int mult;
	int opc;
	do {
	system("cls");
		cout << "digita los diez numeros" << endl;
	int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
		cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7 >> n8 >> n9 >> n10;
		mult = n1*n2*n3*n4*n5*n6*n7*n8*n9*n10;
		cout << "el resultado de multiplicar todos los numeros es: " << mult << endl;
		cout << "\ndigite 0 si desea salir o cualquier otro numero si desea seguir::";
		opc = 0;
		cin >> opc;
	} while (opc!=0);
	return mult;
}

void PalabraIn(string palabra, int p = 1){
do{
	system("cls");


    cout << "Escriba una frase cualquiera(si la palabra tiene espacios ponga un guion bajo): " << endl;
	cin>>palabra;

	int numero = palabra.length();

		cout << "La frase escrita, al reves, es:" << endl;
		for (int i=numero-1; i>=0; i--)
		{
			cout << palabra[i];
	}


gotoxy(0,5); cout<<"\ndigite 0 si desea salir o cualquier otro numero si desea seguir:";
cin>>p;

}while( p != 0);
}


void numberOfCharacters(string palabra, int p=1) {
   
do{
	system("cls");
	cout << "Escriba una frase cualquiera(si la palabra tiene espacios ponga un guion bajo): " << endl;
	cin>>palabra;

	int numero = palabra.length();

		cout << "La frase sin el primer caracter, es:" << endl;
		for (int i=1; i<=numero-1; i++)
		{
			cout << palabra[i];
	}
 cout<<"\ndigite 0 si desea salir o cualquier otro numero si desea seguir:";
 cin>>p;
 
}while(p != 0);

}

void MultiplicaPor(int x){

	do{
	int num[10];
		system("cls");

		cout<<"digite los 10 numeros"<<endl;
		for(int i=1; i != 11; i++ ){

	cin>>num[i];}

	system("cls");
		for(int i=1; i !=11; i++){

		int g = num[i]*3;

		cout<< num[i] <<"x3="<< g <<endl;


		}


			cout<<"\ndigite 0 si desea salir o cualquier otro numero si desea seguir::";
			cin>>x;
	}while( x != 0);

}


void contarCaracteres() {
   system("cls");
    string cadena;
    cout << "Ingrese una cadena (escriba 'salir' para terminar):" << endl;
    getline(cin, cadena);

    while (cadena != "salir") {
        cout << "La cadena \"" << cadena << "\" tiene " << cadena.length() << " caracteres." << endl;
        cout << "\nIngrese otra cadena (escriba 'salir' para terminar):" << endl;
        getline(cin, cadena);

    }

}

void dibujo(int p){

string ast[9]={ "*", "**", "***", "****", "*****", "****", "***", "**", "*" } ;
system("cls");

do{

for(int i; i !=9; i++){
cout<< ast[i]<<endl;}


cout<<"\ndigite 0 si desea salir:";
cin>>p; }while( p != 0);

}

 int main(){
 	int x;
 	string palabra;
 	int p =1;
 	int q = 1;
do{

system("cls");

gotoxy(35,0);   cout << "==========================================================";
gotoxy(35,1);	cout << "|                         MENU                           |" << endl;
gotoxy(35,2);   cout << "==========================================================";

gotoxy(0,4);	cout << "Tenemos las siguentes opciones disponibles: " << endl;
gotoxy(43,5);	cout << "1.Evaluar numeros. " << endl;
gotoxy(43,6);	cout << "2.Multipicacion. " << endl;
gotoxy(43,7);	cout << "3.Palabra invertida. " << endl;
gotoxy(43,8);	cout << "4.Palabra recortada. " << endl;
gotoxy(43,9);	cout << "5.Numeros multipicados por 3. " << endl;
gotoxy(43,10);  cout << "6.Conteo de letras. " << endl;
gotoxy(43,11);  cout << "7.triangulo dibujado. " << endl;
gotoxy(43,12);  cout << "0.Salir. " << endl;
cout << "digite que es lo que desea hacer:";
cin>>q;

switch(q){

	case 1:
		EvaluaNum(p);
		
break;

	case 2:
		 multiplicacion();
break;

	case 3:
		PalabraIn(palabra,p);
break;

	case 4:
	 numberOfCharacters(palabra,p);
    return 0;
break;

	case 5:
		MultiplicaPor(x);
break;

	case 6:
		  contarCaracteres();
break;

	case 7:
		dibujo(p);
break;
}

}while( q != 0);

}
