//Moncayo Garcia Donayi Azucena
#include <iostream>
#include <conio.h>
#include <stdio.h>  
#include <windows.h>  
#include <math.h>
#include <cstdlib>

/*
#define ARRIBA 72
#define ABAJO 80
#define ENTER 13
*/
 
#define TECLA_ARRIBA 72
#define TECLA_ABAJO 80
#define ENTER 13
 
 
/*
#define ARRIBA 1
#define ABAJO 0
#define ENTER 13
#define INVALIDO -1
*/
using namespace std;

void menu_principal();
void calculo_diferencial();
void calculos_financieros();
void contabilidad_dos();
void fisica_dos();
void ingles_dos();
void quimica_dos();
void realidad_virtual();
int menu(const char titulo[], const char *opciones[], int n);

int main (){

cout<<"|=                                              *          *                                                       			"<<endl;
cout<<"|=             *                                                                                                  *			"<<endl;
cout<<"|=                                                                    *                  *                        			"<<endl;
cout<<"|=                     *             *                                                                           			"<<endl;
cout<<"|=      *                                         *                                                  *        *    			"<<endl;
cout<<"|=                                                            *                 *                                 		*	"<<endl; 	
cout<<"|=               *                 *                        *                                      *               			"<<endl;
cout<<"|=       *                                                                                                 *        	*		"<<endl;
cout<<"|=                                                                                                                			"<<endl;
cout<<"|=                °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°                			"<<endl;
cout<<"|=     *          °°°                                                                          °°°       *        		*	"<<endl;
cout<<"|=                °°°   I N S T I T U T O        P O L I T E C N I C O        N A C I O N A L  °°°                			"<<endl;                        
cout<<"|=                °°°                                                                          °°°               *			"<<endl;
cout<<"|=                °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°                			"<<endl;                                                                                                                                                                                
cout<<"|=  *                                                                                                             			"<<endl;
cout<<"|=                --------------------------------------------------------------------------------                	*		"<<endl;
cout<<"|=        *              ------------------------------------------------------------------              *        			"<<endl;
cout<<"|=                                                                                                             *  			"<<endl;
cout<<"|=                *                          	I N F O R M A T I C A                 *                          		*	"<<endl;
cout<<"|=                                                                                           *            *       			"<<endl;
cout<<"|=        *               *                                                                                       			"<<endl;
cout<<"|=                                          	   P R O G R A M A                 *                          	 	 	*		"<<endl;
cout<<"|=                                  *                    D E                                     		*		 			"<<endl;
cout<<"|=        *         *                                                                                             			"<<endl;
cout<<"|=                                 *                                                              *               *			"<<endl;
cout<<"|=                                             	M a t e m a t i c a s                    *                       			"<<endl;
cout<<"|=        *                                         C i e n c i a                                                 		*	"<<endl;
cout<<"|=                     *                    *   T e c n o l o g i a s                                   *         			"<<endl;
cout<<"|=       *                                *                           *                  *                     *  			"<<endl;
cout<<"|=                     *                                                                                          			"<<endl;
cout<<"|=                                   *                        *                                         *          			"<<endl;
cout<<"|=                                                        *                                      *                		*	"<<endl;
cout<<"|=             *                                                                                                 * 			"<<endl;
cout<<"|=                                                                    *                  *                        			"<<endl;



Sleep (2000);
	 system ("color 4F");
	 Sleep (2000);
	 system ("color 30");
	 Sleep (2000);
	 system ("color 90");              
	 Sleep (2000);
	 system ("color 70");
	 system ("cls");	

cout<<"============================================================================================================================="<<endl;
	menu_principal ();

	return 0;
}


void gotoxy(int x, int y)
{
	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	
	SetConsoleCursorPosition(hCon, dwPos);
}


void menu_principal ()
{

 bool repite = true;
   int opcion;
    cout<<"\n";
 const char *titulo = "                       <<<-------- M    E    N    U -------->>>>";
   const char *opciones[] = {"        Calculo Diferencial", "        Calculos Financieros", "        Contabilidad",  "        Fisica", "        Ingles","        Quimica" ,"        Realidad Virtual","        Salir"};
   
   int n = 8;  // Numero de opciones
 
   do {
      opcion = menu(titulo, opciones, n);
 
      switch (opcion) {
         case 1:
            calculo_diferencial();
            break;
 
 
         case 2:
            calculos_financieros();
            break;
 
 
         case 3:
            contabilidad_dos();
            break;
            
            
    	case 4:
    		fisica_dos();
 			
 			
 		case 5:
		 	ingles_dos();
			 break;
			 
			 	
 		case 6:
		 	quimica_dos();
			 break;
			 
		case 7:
		realidad_virtual();		 
			 	
         case 8:
         	cout<<"\n";
         	cout<<"\n";
            cout << "                     Vuelva pronto"<<endl;
            repite = false;
            break;
      }
 
   } while(repite);
}




void calculo_diferencial()
{
 bool repite = true;
 int opcion;
 	int b,c; b=0; c=0;
	float a;
   // Titulo del menú y nombres de las opciones
   const char *titulo = "      C A L C U L O    D I F E R E N C I A L ";
   const char *opciones[] = {"Teoria", "Ejercicios", "Regresar"};
   int n = 3;  // Numero de opciones

 
   do {
      opcion = menu(titulo, opciones, n);
 
      system("cls");
      switch (opcion) {
         case 1:
         	
    cout<<"                                            TEORIA"<<endl;
    cout<<"                                -----------------------------"<<endl;
	cout<<"                               |     Calculo Diferencial     |"<<endl;
	cout<<"                                -----------------------------"<<endl;
	
	cout<<"\n\n     Bienvenido este programa se enfocara en Notacion funcional, un tema dentro del temario de Calculo"<<endl;
	cout<<"                                                 Diferencial.";
	
	
	cout<<"\n\n-------------------------------------------------------------------------------------------------";
	cout<<"\n|                                   Notacion Funcional (Teoria).                                |";
	cout<<"\n-------------------------------------------------------------------------------------------------";
	cout<<"\n|                                                                                               |";
	cout<<"\n| Una funcion, es la aplicacion de f, que es una relacion entre un conjunto dado X (el dominio) |";
	cout<<"\n| y otro conjunto de elementos Y (el contradominio), de forma que a cada elemento X del dominio |";
	cout<<"\n| le corresponde un unico elemento del contradominio f(x).                                      |";
	cout<<"\n|                                                                                               |";
	cout<<"\n-------------------------------------------------------------------------------------------------";
	
	cout<<"\n-------------------------------------------------------------------------------------------------";
	cout<<"\nPresione una tecla.";getch();
	cout<<"\n-------------------------------------------------------------------------------------------------";
	cout<<"\n-------------------------------------------------------------------------------------------------";
	cout<<"\nE j e m p l o s:";
	cout<<"\n-------------------------------------------------------------------------------------------------";
	cout<<"\n-------------------------------------------------------------------------------------------------";
	
	
	cout<<"\n\n1)f(x)= 3x+20";
	cout<<"\n\n En este ejercicio nos muestra que el valor de 'x' es '2':";
	cout<<"\n\n f(2)= 3x+20";
	cout<<"\n\n Por lo tanto sustituiremos 'x' por el valor que nos han dado:";
	cout<<"\n\n f(2)= 3(2)+20";
	cout<<"\n\n Una vez hecha la sustitucion resolvemos la operacion:";
	cout<<"\n\n f(2)= 6+20";
	cout<<"\n\n Como resultado nos da:";
	cout<<"\n\n f(2)= 26";
	
	cout<<"\n\n-------------------------------------------------------------------------------------------------";
	cout<<"\n------------------------------------------------------------------------------------------------";
	cout<<"\nPresione una tecla.";getch();
	cout<<"\n-------------------------------------------------------------------------------------------------"<<endl;
	cout<<"\n";
	cout<<"2)\tf(x)=2x^2 + 10";
	cout<<"\n\nf(4)=2(4)^2+10";
	cout<<"\nf(4)=2(16)+10";
	cout<<"\nf(4)=32+10";
	cout<<"\nf(4)=42";
	cout<<"\n";
	
	cout<<"\n-------------------------------------------------------------------------------------------------";
	cout<<"\nPresione una tecla.";getch();
	cout<<"\n-------------------------------------------------------------------------------------------------"<<endl;
	cout<<"\n\n3)\tf(x)=10/x";
	cout<<"\n\f(5)=10/(5)";
	cout<<"\nf(5)=10/5";
	cout<<"\nf(5)=2";
	cout<<"\n";
	
	cout<<"\n-------------------------------------------------------------------------------------------------";
	cout<<"\nPresione una tecla.";getch();
	cout<<"\n-------------------------------------------------------------------------------------------------";
	
	cout<<"\n4)\tf(x)=5x/3";
	cout<<"\n  f(3)=5(3)/3";
	cout<<"\n  f(3)=15/3";
	cout<<"\n  f(3)=5";
	cout<<"\n";
	
	cout<<"\n-------------------------------------------------------------------------------------------------";
	cout<<"\nPresione una tecla.";getch();
	cout<<"\n-------------------------------------------------------------------------------------------------";
	
	cout<<"\n\n5)\tf(20)=4x^2/2x";
	cout<<"\n	f(20)=4(20)^2/2(20)";
	cout<<"\n	f(20)=4(400)/40";
	cout<<"\n	f(20)=1600/40";
	cout<<"\n	f(20)=40";
	cout<<"\n";
	cout<<" LA TEORIA HA FINALIZADO"<<endl;
	cout<<"\n";
	cout<<"\n-------------------------------------------------------------------------------------------------";
	Sleep(3000);
	

            break;
 
 
         case 2:
    cout<<"EJERCICIOS"<<endl;
	cout<<"\n-------------------------------------------------------------------------------------------------";
	cout<<"\nEjercicios:";
	cout<<"\n-------------------------------------------------------------------------------------------------";
	
	cout<<"\n\nf(8)= 16-x^2/4";
	cout<<"\n\nRespuesta: ";cin>>a;
	if (a==16){
		b=b+1;}
		else{
			c=c+1;}
	cout<<"\n-------------------------------------------------------------------------------------------------";
	cout<<"\n\nf(5)= 5x+10/x";
	cout<<"\n\nRespuesta: ";cin>>a;
	if (a==7){
		b=b+1;}
		else{
			c=c+1;}
	cout<<"\n-------------------------------------------------------------------------------------------------";
	cout<<"\n\nf(-1)= 8x(x^2+12)-(x+3)";
	cout<<"\n\nRespuesta: ";cin>>a;
	if (a==-106){
		b=b+1;}
		else{
			c=c+1;}
	cout<<"\n-------------------------------------------------------------------------------------------------";
	cout<<"\n\nf(25)= x(-2x+4x/2)";
	cout<<"\n\nRespuesta: ";cin>>a;
	if (a==25){
		b=b+1;}
		else{
			c=c+1;}
	cout<<"\n-------------------------------------------------------------------------------------------------";
	cout<<"\nRespuestas correctas:"<<b;
	cout<<"\nRespuestas incorrectas:"<<c;
	cout<<"\n-------------------------------------------------------------------------------------------------";
	cout<<"\n-------------------------------------------------------------------------------------------------";
           	Sleep(2000);
	
            break;
 
         case 3:
            repite = false;
            break;
      }
 
   } while(repite);
}	

	
	
	
	
	
	
	
	
void calculos_financieros()
{
bool repite = true;
    int opcion, resp;
	
   const char *titulo = "             C A L C U L O S    F I N A N C I E R O S ";
   const char *opciones[] = {"Teoria", "Ejercicios", "Regresar"};
   int n = 3;  // Numero de opciones

 
   do {
      opcion = menu(titulo, opciones, n);
 

      switch (opcion) {
         case 1:
            break;
 
 
         case 2:
         	cout<<"EJERCICIOS";
         	
           
            break;
 
         case 3:
            repite = false;
            break;
      }
 
   } while(repite);
}

 
 
 
void contabilidad_dos()
{
   bool repite = true;
   int opcion;
 
   // Titulo del menú y nombres de las opciones
   const char *titulo = "                      C O N T A B I L I D A D ";
   const char *opciones[] = {"Teoria", "Regresar"};
   int n = 2;  // Numero de opciones

 
   do {
      opcion = menu(titulo, opciones, n);
 
      system("cls");
      switch (opcion) {
         case 1:
         	
        cout<<"TEORIA"<<endl;
        cout<<"\n";
		   cout<<"Tarjeta de almacen."<<endl;
		cout<<"Que es?"<<endl;
		cout<<"Es el documento donde se registran las salidas y entradas de mercancía al almacen."<<endl;
		cout<<"Lleva un control del costo del producto siguiendo el sistema de valuacion de inventarios que la empresa haya seleccionado."<<endl;
		Sleep(2000);
		cout<<"Para que es?"<<endl;
		cout<<"Sirve para la comprobacion de gastos menores o prestamos por los cuales no se expide factura o comprobante de tipo fiscal."<<endl;
		Sleep(2000);
		cout<<"Ahora les daremos un ejemplo...."<<endl;
		system("pause");
		system("cls");
			cout<<"PARA PODER INICIAR A HACER LA TARJETA DE ALMACEN SE NECESITA:    "<<endl;
		cout<<"1.- La tabla siguiente"<<endl;
		cout<<"2.- El rayado diario resuelto"<<endl;
		cout<<endl<<"Esta es la tabla con la que se trabaja la tarjeta de almacen..."<<endl;
		
		cout<<endl<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
		cout<<"x  F x  F x        UNIDADES                x     COSTOS          X            VALORES             x"<<endl;
		cout<<"x  E x  A x                                x                     X                                x"<<endl;
		cout<<"x  C x  C xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
		cout<<"x  H x  T.x     EN   x    SA    x    EXIS  x    UNI   x    ME    x     DE   x    HA    x   SA     x"<<endl;
		cout<<"x  A x  N x    TRA   x    LI    x    TEN   x     TA   x    DI    x     BE   x   BER    x    L     x"<<endl;
		cout<<"x    x  o.x     DA   x    DA    x    CIA   x    RIO   x     O    x          x          x   DO     x"<<endl;
		cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
		cout<<"x    x    x          x          x          x          x          x          x          x          x"<<endl;
		cout<<"x    x    x          x          x          x          x          x          x          x          x"<<endl;
		cout<<"x    x    x          x          x          x          x          x          x          x          x"<<endl;
		cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
		cout<<"x    x    x          x          x          x          x          x          x          x          x"<<endl;
		cout<<"x    x    x          x          x          x          x          x          x          x          x"<<endl;
		cout<<"x    x    x          x          x          x          x          x          x          x          x"<<endl;
		cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
		cout<<"x    x    x          x          x          x          x          x          x          x          x"<<endl;
		cout<<"x    x    x          x          x          x          x          x          x          x          x"<<endl;
		cout<<"x    x    x          x          x          x          x          x          x          x          x"<<endl;
		cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
		cout<<"x    x    x          x          x          x          x          x          x          x          x"<<endl;
		cout<<"x    x    x          x          x          x          x          x          x          x          x"<<endl;
		cout<<"x    x    x          x          x          x          x          x          x          x          x"<<endl;
		cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
		cout<<"x    x    x          x          x          x          x          x          x          x          x"<<endl;
		cout<<"x    x    x          x          x          x          x          x          x          x          x"<<endl;
		cout<<"x    x    x          x          x          x          x          x          x          x          x"<<endl;
		cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
		cout<<"x    x    x          x          x          x          x          x          x          x          x"<<endl;
		cout<<"x    x    x          x          x          x          x          x          x          x          x"<<endl;
		cout<<"x    x    x          x          x          x          x          x          x          x          x"<<endl;
		cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
		cout<<"x    x    x          x          x          x          x          x          x          x          x"<<endl;
		cout<<"x    x    x          x          x          x          x          x          x          x          x"<<endl;
		cout<<"x    x    x          x          x          x          x          x          x          x          x"<<endl;
		cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
		cout<<endl<<"PASOS A SEGUIR"<<endl;
		cout<<endl<<"1.- ubicar en el rayado diario todos las cuentas de almacen"<<endl;
		cout<<endl<<"2.- en esas mismas cuentas checa las subcuentas "<<endl;
		cout<<endl<<"3.- se agarra la primer subcuenta por ejemplo (pantalones)"<<endl;
		system("pause>0");
		cout<<endl<<"PARA REGISTRAR LA SUBCUENTA ES..."<<endl;
		system("pause>0");
		cout<<endl<<"PASOS A SEGUIR"<<endl;
		cout<<endl<<"1.- Revisas la fecha y la colocas en el espacio correspondiente   (FECHA) "<<endl;
		 
      system("pause>0");
		cout<<endl<<"2.- Revisas el asiento en el que fue registrado y lo colocas en espacio correspondiente    (FACT. No.)"<<endl;
		
		
      system("pause>0");
		cout<<endl<<"3.- Esa misma cuenta la checas si se compro o vendio, y pones la cantidad del articulo"<<endl;
		cout<<endl<<"    si se compro va en el espacio (ENTRADA),"<<endl;
		cout<<endl<<"    si se vendio va en el espacio (SALIDA)"<<endl;
		
		 
      system("pause>0");
		cout<<endl<<"4.- Despues la cantidad de articulos..."<<endl;
		cout<<endl<<"    si se vendio la restas a la cantidad ya existente,"<<endl;
		cout<<endl<<"    si se compro la sumas a la cantidad ya existente,"<<endl;
		cout<<endl<<"    y la registras en el espacio (EXISTENCIA)."<<endl;
		
		 
      system("pause>0");
		cout<<endl<<"5.- Revisas el costo del articulo por individual"<<endl;
		cout<<endl<<"    y lo colocas en el espacio (UNITARIO)"<<endl;
		
		 
      system("pause>0");
		cout<<endl<<"6.- Para este paso multiplicaras la cantidad del articulo por el costo individual,"<<endl;
		cout<<endl<<"    si el articulo es comprado ira en el espacio (DEBE),"<<endl;
		cout<<endl<<"    si el articulo es vendido ira en el espacio (HABER)"<<endl;
		
		 
      system("pause>0");
		cout<<endl<<"7.- Por ultimo la cantidad anterior..."<<endl;
		cout<<endl<<"    si se vendio la restas a la cantidad ya existente,"<<endl;
		cout<<endl<<"    si se compro la sumas a la cantidad ya existente,"<<endl;
		cout<<endl<<"    y la registras en el espacio (SALDO)."<<endl;
		Sleep(2000);
            break;
 
           
         case 2:
            repite = false;
            break;
      }
 
   } while(repite);
}






void fisica_dos()
{
bool repite = true;
	int opcion;	
	//Título y opciones del menú
	const char *titulo = "                  F  I  S  I  C  A";
	const char *opciones[] = {"Teoria", "Ejercicios", "Regresar"};
	int n = 3; //Número de opciones
	
	do
	{
		opcion = menu(titulo, opciones, n);
		
		switch (opcion)
		{
			case 1:
			cout<<"HOLAKHEACE";
				break;
				
			case 2:
				cout<<"HOLANDAS";
		
				break;
				
			case 3:
				repite = false;
				break;
				
		}
	}
	while(repite);
}

void ingles_dos()
{
bool repite = true;
	
	int opcion;
	
	int a, b;
	
	float c, d;
	
	//Título y opciones del menú
	const char *titulo = "                  F  I  S  I  C  A";
	const char *opciones[] = {"Teoria", "Ejercicios", "Regresar"};
	int n = 3; //Número de opciones
	
	do
	{
		opcion = menu(titulo, opciones, n);
		
		switch (opcion)
		{
			case 1:
			cout<<"HOLAKHEACE";
				break;
				
			case 2:
				cout<<"HOLANDAS";
		
				break;
				
			case 3:
				repite = false;
				break;
				
		}
	}
	while(repite);
}



void quimica_dos()
{
bool repite = true;
	
	int opcion;
	int a,b,c,opc,re1,re2,re3,re4,re5, d;
    int acuma=0;
	
	const char *titulo = "     Q  U  I  M  I  C  A ";
	const char *opciones[] = {"ACIDOS CARBOXILICOS ", "AMINAS Y AMIDAS", "ESTEQUIOMETRIA Y OXIDO REDUCCION", "NOMECLATURA QUIMICA", "Regresar "};
	 int n = 5;  // Numero de opciones

	do
	{
		opcion = menu(titulo, opciones, n);
		//Alternativas
		system("cls");
		switch (opcion)
		{
			case 1:
		cout<<"\n\t\t\t\t¿Que son los Acidos Carboxilicos?";
	        cout<<"\n\n\n\t\t\t\tLos Acidos son una funcion de carbono primario.";
			cout<<"\n\t\t\t\tSe caracteriza por tener en el mismo carbono el";
			cout<<"\n\t\t\t\tel grupo carbonilo y un oxhidrilo. Se nombran  ";
			cout<<"\n\t\t\t\tanteponiendo la palabra acido y con el sufijo  ";
			cout<<"\n\t\t\t\tocio. Algunos de ellos son mas conocidos por sus";
			cout<<"\n\t\t\t\tnombres comunes como el acido formico (retinoico)";
		
            cout<<"\n\n\n\t\t\t\t                  EMPEZEMOS";
			cout<<"\n\n";
			system("pause");
			system("Cls");
			
			
			
			
			cout<<"\n\t\t\t\tSeñala el nombre correcto para estos compuestos:";
            cout<<"\n\n\n\t\t\t\tCH3-CH-CH2-COOH                             ";
            cout<<"\n\t\t\t\t1) acido 3-metilbutanoico";
            cout<<"\n\t\t\t\t2) acido 2-metilbutanoico";
            cout<<"\n\t\t\t\t3) acido 2-isopropiletanoico";
            cout<<"\n\n\t\t\t\tINGRESE SU RESPUESTA";
            cin>>re1;
            if (re1=1){
            acuma=acuma+1;
        }
 
	   
			system("pause");
			cout<<"\n\n\n\t\t\t\tHOOC-CH2-CH2-CH2-COOH";
            cout<<"\n\t\t\t\t1) acido propanodioico ";
            cout<<"\n\t\t\t\t2) acido pantanodioico";
            cout<<"\n\t\t\t\t3) acido pentanodioico";
			cout<<"\n\n\t\t\t\tINGRESE SU RESPUESTA";
            cin>>re2;
            if(re2=3){
           acuma=acuma+1;
       }
        
			system("pause");
			cout<<"\n\n\n\t\t\t\tHOOC-CH=CH-COOH";
            cout<<"\n\t\t\t\t1) acido 1,4-etenodicarboxílico  ";
            cout<<"\n\t\t\t\t2) acido 1,2-etenodicarboxílico";
            cout<<"\n\t\t\t\t3) acido 1,4-butenodicarboxílico";
			cout<<"\n\n\t\t\t\tINGRESE SU RESPUESTA";
            cin>>re3;
            if(re3=2){
            acuma=acuma+1;
    }
    
		
			system("pause");
			cout<<"\n\n\n\t\t\t\tCH3-CHOH-CH2-CH2-COOH";
            cout<<"\n\t\t\t\t1) acido 4-hidroxipentanoico  ";
            cout<<"\n\t\t\t\t2) acido 2-hidroxipentanoico";
            cout<<"\n\t\t\t\t3) acido 4-oxipentanoico";
			cout<<"\n\n\t\t\t\tINGRESE SU RESPUESTA";
            cin>>re4;
        
            if(re4=2){
            acuma=acuma+1;
			}   
			
			
			system("pause");
			cout<<"\n\n\n\t\t\t\tCH3-CH2-CO-CH2-COOH";
            cout<<"\n\t\t\t\t1) acido 3-oxapentanoico   ";
            cout<<"\n\t\t\t\t2) acido 3-carboxipentanoico";
            cout<<"\n\t\t\t\t3) ácido 3-oxopentanoico";
            cout<<"\n\n\t\t\t\tINGRESE SU RESPUESTA";
            cin>>re5;
     
            if(re5=3){
            acuma=acuma+1;
			}
			cout<<"Las respuestas correctas son"<<acuma;
			break;
        
 
	   
			system("pause");
			cout<<"\n\n\n\t\t\t\tHOOC-CH2-CH2-CH2-COOH";
            cout<<"\n\t\t\t\t1) acido propanodioico ";
            cout<<"\n\t\t\t\t2) acido pantanodioico";
            cout<<"\n\t\t\t\t3) acido pentanodioico";
			cout<<"\n\n\t\t\t\tINGRESE SU RESPUESTA";
            cin>>re2;
            if(re2=3){
           acuma=acuma+1;
       }
        
			system("pause");
			cout<<"\n\n\n\t\t\t\tHOOC-CH=CH-COOH";
            cout<<"\n\t\t\t\t1) acido 1,4-etenodicarboxílico  ";
            cout<<"\n\t\t\t\t2) acido 1,2-etenodicarboxílico";
            cout<<"\n\t\t\t\t3) acido 1,4-butenodicarboxílico";
			cout<<"\n\n\t\t\t\tINGRESE SU RESPUESTA";
            cin>>re3;
            if(re3=2){
            acuma=acuma+1;
    }
    
		
			system("pause");
			cout<<"\n\n\n\t\t\t\tCH3-CHOH-CH2-CH2-COOH";
            cout<<"\n\t\t\t\t1) acido 4-hidroxipentanoico  ";
            cout<<"\n\t\t\t\t2) acido 2-hidroxipentanoico";
            cout<<"\n\t\t\t\t3) acido 4-oxipentanoico";
			cout<<"\n\n\t\t\t\tINGRESE SU RESPUESTA";
            cin>>re4;
        
            if(re4=2){
            acuma=acuma+1;
			}   
			
			
			system("pause");
			cout<<"\n\n\n\t\t\t\tCH3-CH2-CO-CH2-COOH";
            cout<<"\n\t\t\t\t1) acido 3-oxapentanoico   ";
            cout<<"\n\t\t\t\t2) acido 3-carboxipentanoico";
            cout<<"\n\t\t\t\t3) ácido 3-oxopentanoico";
            cout<<"\n\n\t\t\t\tINGRESE SU RESPUESTA";
            cin>>re5;
     
            if(re5=3){
            acuma=acuma+1;
			}
			
			
			cout<<"Las respuestas correctas son"<<acuma;
			Sleep(2000);
			break;
				
				
				break;
				
			case 2:
				
				cout<<"\n\t\t\t\t¿Que son las AMINAS Y AMIDAS.?";
	        cout<<"\n\n\n\t\t\t\tLas aminas podemos considerarlas derivados del amoníaco (NH3).";
			cout<<"\n\t\t\t\tAl tener 3 de hidrógeno, pueden tener 3 radicales, y dependiendo ";
			cout<<"\n\t\t\t\tdel número de hidrógenos sustituidos, tendremos amina primaria ,";
			cout<<"\n\t\t\t\t, secundaria y terciaria.";
			cout<<"\n\t\t\t\tLas amidas son derivados de los ácidos carboxílicos sustituyendo";
			cout<<"\n\t\t\t\tel grupo hidróxilo (-OH) por un NH2 amina. Me explico , el ácido";
			cout<<"\n\t\t\t\tcarboxílico es COOH, entonces cogemos OH y se sustituye por un ";
			cout<<"\n\t\t\t\tNH2 (NH2, NHR, NR, R)";
			
			cout<<"\n\n\n\t\t\t\t                  EMPEZEMOS";
			cout<<"\n\n";
			system("pause");
			system("Cls");
			
			cout<<"\n\t\t\t\tSeñala el nombre correcto para estos compuestos:";
            cout<<"\n\n\n\t\t\t\tCH3-CH2-CH2-CH2-CO-NH2                          ";
            cout<<"\n\t\t\t\t1) butanamida";
            cout<<"\n\t\t\t\t2) pentanamida";
            cout<<"\n\t\t\t\t3) pentanamina";
            cout<<"\n\n\t\t\t\tINGRESE SU RESPUESTA";
            cin>>re1;
            if (re1=2){
            acuma=acuma+1;
        }
        system("pause");
			cout<<"\n\n\n\t\t\t\tCH3-CH=CH-CH2-CO-NH2 ";
            cout<<"\n\t\t\t\t1) 3-pentenamida  ";
            cout<<"\n\t\t\t\t2) 3-pentenamina";
            cout<<"\n\t\t\t\t3) 2-pentanamida";
			cout<<"\n\n\t\t\t\tINGRESE SU RESPUESTA";
            cin>>re2;
            if(re2=1){
           acuma=acuma+1;
       }
       system("pause");
			cout<<"\n\n\n\t\t\t\tCH3-CH2-CO-NH-CH3 ";
            cout<<"\n\t\t\t\t1) 3-metilpropanamida ";
            cout<<"\n\t\t\t\t2) N-metilpropanamida";
            cout<<"\n\t\t\t\t3) 1-metilpropanamida";
			cout<<"\n\n\t\t\t\tINGRESE SU RESPUESTA";
            cin>>re3;
            if(re3=2){
           acuma=acuma+1;
       }
       system("pause");
			cout<<"\n\n\n\t\t\t\tNH2CO-CH2-CH2-CONH2 ";
            cout<<"\n\t\t\t\t1) butanodiamida  ";
            cout<<"\n\t\t\t\t2) etanodiamida";
            cout<<"\n\t\t\t\t3) propanodiamida";
			cout<<"\n\n\t\t\t\tINGRESE SU RESPUESTA";
            cin>>re4;
            if(re4=1){
           acuma=acuma+1;
       }
    system("pause");
			cout<<"\n\n\n\t\t\t\tCH3-CH-CH2-CO-NH2 ";
            cout<<"\n\n\n\t\t\t\t|";
            cout<<"\n\n\n\t\t\t\tCH3";
			cout<<"\n\t\t\t\t1) 2-metilbutanamina   ";
            cout<<"\n\t\t\t\t2) 2-metilbutanamida";
            cout<<"\n\t\t\t\t3) 3-metilbutanamida";
			cout<<"\n\n\t\t\t\tINGRESE SU RESPUESTA";
            cin>>re5;
            if(re5=3){
           acuma=acuma+1;
       }
    cout<<"Las respuestas correctas son"<<acuma;
    Sleep(2000);
				break;
				
			case 3:
				  cout<<"\n\t\t\t\t¿Que es la ESTEQUIOMETRIA ?";
	        cout<<"\n\n\n\t\tEs el cálculo de las relaciones cuantitativas entre los reactivos y productos ";
			cout<<"\n\t\t\t\ten el transcurso de una reacción química.1? Estas relaciones se pueden deducir";
			cout<<"\n\t\t\t\ta partir de la teoría atómica, aunque históricamente se enunciaron sin hacer  ";
			cout<<"\n\t\t\t\treferencia a la composición de la materia, según distintas leyes y principios.";
			cout<<"\n\t\t\t\tSe produce un cambio químico:";
			cout<<"\n\t\t\t\ta) Cuando las moléculas se agrupan manteniendo sus propiedades.";
			cout<<"\n\t\t\t\tb) Cuando dos moléculas se rompen y sus átomos se reorganizan";
			cout<<"\n\t\t\t\tpara formar otras moléculas con propiedades diferentes.";
			cout<<"\n\t\t\t\tc) Cuando las moléculas que forman un bloque de hielo se separan";
			cout<<"\n\t\t\t\tunas de otras y dan lugar a agua líquida.";
			cout<<"\n\t\t\t\td) Cuando el oxígeno disuelto en el agua se une a los átomos de hierro ";
			cout<<"\n\t\t\t\tde un ancla y forma estructuras rugosas color marrón.";
			
			
			cout<<"\n\n\n\t\t\t\t                  EMPEZEMOS";
			cout<<"\n\n";
			system("pause");
			system("Cls");
			
			cout<<"\n\t\t\t\tAjusta las siguientes ecuaciones:";
			cout<<"\n\t\t\t\tC2H4+O2->CO2+H2O";
			cout<<"\n\t\t\t\tLa fermentación de glucosa, C6H12O6, produce alcohol etílico, C2H5OH,";
			cout<<"\n\t\t\t\ty dióxido de carbono:";
			cout<<"\n\t\t\t\tC6H12O6(ac)2C2H5OH(ac) + 2CO2(g) ";
			cout<<"\n\t\t\t\t¿Cuántos gramos de etanol se pueden producir a partir de 10.0 g de glucosa?";
		    cout<<"\n\t\t\t\t1)  10.0 g";
            cout<<"\n\t\t\t\t2)  2.56 g";
            cout<<"\n\t\t\t\t3)  5.11 g";
            cout<<"\n\t\t\t\t4)  4.89 g";
			cout<<"\n\n\t\t\t\tINGRESE SU RESPUESTA";
            cin>>re1;
            if(re1=3){
           acuma=acuma+1;
           }
		   cout<<"\n\t\t\t\tEl alcohol etílico se quema de acuerdo con la siguiente ecuación:";
			cout<<"\n\t\t\t\tC2H5OH + 3O22CO2+ 3H2O";
			cout<<"\n\t\t\t\t¿Cuántos moles de CO2 se producen cuando se queman 3.00 mol de ";
			cout<<"\n\t\t\t\tC2H5OH de esta manera.";
		    cout<<"\n\t\t\t\t1)  3.00 mol";
            cout<<"\n\t\t\t\t2)  6.00 mol";
            cout<<"\n\t\t\t\t3)  2.00 mol";
            cout<<"\n\t\t\t\t4)  4.00 mol";
			cout<<"\n\n\t\t\t\tINGRESE SU RESPUESTA";
            cin>>re1;
            if(re1=3){
           acuma=acuma+1;
       }
            cout<<"\n\t\t\t\tSi 3.00 mol de SO2 gaseoso reaccionan con oxígeno para producir trióxido ";
			cout<<"\n\t\t\t\tde azufre, ¿cuántos moles de oxígeno se necesitan?";
		    cout<<"\n\t\t\t\t1)  3.00 mol O2";
            cout<<"\n\t\t\t\t2)  6.00 mol O2";
            cout<<"\n\t\t\t\t3)  1.50 mol O2";
            cout<<"\n\t\t\t\t4)  4.00 mol O2";
			cout<<"\n\n\t\t\t\tINGRESE SU RESPUESTA";
            cin>>re1;
            if(re1=3){
           acuma=acuma+1;
       }
       cout<<"\n\n";
			system("pause");
			system("Cls");
			cout<<"\n\t\t\t\t¿Que es el OXIDO REDUCCION?";
			cout<<"\n\n\n\t\tEs una reacción redox (o de oxidación-reducción) es un tipo de reacción química ";
			cout<<"\n\t\t\t\ten donde se transfieren electrones entre dos especies.";
			cout<<"\n\t\t\t\tSe dice que hay una transferencia de electrones cuando hay un cambio en el   ";
			cout<<"\n\t\t\t\tnúmero de oxidación entre los reactivos y los productos.";
			cout<<"\n\t\t\t\tOXIDACION";
			cout<<"\n\t\t\t\tHay oxidación siempre que un átomo o grupo de átomos pierde electrones";
            cout<<"\n\t\t\t\telectrones (o aumenta sus cargas positivas).";
            cout<<"\n\t\t\t\tNaNa+ + 1e-";
            cout<<"\n\t\t\t\tREDUCCION";
			cout<<"\n\t\t\t\tHay reducción siempre que un átomo o grupo de átomos gana electrones, aumentado ";
            cout<<"\n\t\t\t\tsus cargas negativas o disminuyendo las positivas.";
            cout<<"\n\t\t\t\tCl2 + 2e- 2Cl-";
            cout<<"\n\t\t\t\tComo ambas reacciones de oxidación y reducción se dan simultáneamente, a ";
            cout<<"\n\t\t\t\tcada una de ellas se las llama semirreacciones, y la reacción total es la suma";
            cout<<"\n\t\t\t\tde ambas:";
            cout<<"\n\t\t\t\t2Na2Na+ + 2e- Reacción de oxidación";
            cout<<"\n\t\t\t\tCl2 + 2e-2Cl- Reacción de reducción";
            cout<<"\n\t\t\t\t2Na + Cl2 + 2e-2 NaCl + 2e- Reacción total";
            
            
            cout<<"\n\t\t\t\tUn oxidante es:";
            cout<<"\n\t\t\t\t1) Aquel elemento que gana electrones al formarse";
            cout<<"\n\t\t\t\t2) Aquella sustancia que nunca puede perder electrones";
            cout<<"\n\t\t\t\t3) La sustancia que gana electrones en un determinado proceso";
            cout<<"\n\t\t\t\t4) El elemento que pierde electrones en un determinado proceso";
			cout<<"\n\n\t\t\t\tINGRESE SU RESPUESTA";
            cin>>re1;
            if (re1=3){
            acuma=acuma+1;
        }
            cout<<"\n\t\t\t\tUn reductor es:";
            cout<<"\n\t\t\t\t1) El elemento que pierde electrones en un proceso químico.";
            cout<<"\n\t\t\t\t2) Aquella sustancia que siempre pierde electrones";
            cout<<"\n\t\t\t\t3) Toda sustancia que pierde electrones en un determinado proceso.";
            cout<<"\n\t\t\t\t4) Toda sustancia que gana electrones en una reacción química.";
			cout<<"\n\n\t\t\t\tINGRESE SU RESPUESTA";
            cin>>re2;
            if (re2=3){
            acuma=acuma+1;
}
            cout<<"\n\t\t\t\tSeñale cual de las siguientes afirmaciones es la correcta:";
            cout<<"\n\t\t\t\t1) El oxidante reduce al reductor, mientras él mismo gana electrones.";
            cout<<"\n\t\t\t\t2) El ganar electrones significa que el reductor oxida al oxidado mientras él mismo se oxida.";
            cout<<"\n\t\t\t\t3) Siempre que un reductor se reduce, un oxidante se oxida.";
            cout<<"\n\t\t\t\t4) El reductor reduce al oxidado, mientras él mismo se oxida.";
			cout<<"\n\n\t\t\t\tINGRESE SU RESPUESTA";
            cin>>re3;
            if (re3=4){
            acuma=acuma+1;
}
            cout<<"\n\t\t\t\tEn una reacción de oxidación-reducción, el oxidante ";
            cout<<"\n\t\t\t\t1) Reduce al reductor, mientras él mismo se oxida.";
            cout<<"\n\t\t\t\t2) Oxida al reductor, mientras él mismo se reduce.";
            cout<<"\n\t\t\t\t3) Cede electrones al reductor.";
            cout<<"\n\t\t\t\t4) Hace más positivo o menos negativo su número de oxidación.";
			cout<<"\n\n\t\t\t\tINGRESE SU RESPUESTA";
            cin>>re4;
            if (re4=2){
            acuma=acuma+1;
}
            cout<<"\n\t\t\t\tEn una reducción una sustancia ";
            cout<<"\n\t\t\t\t1) Cede electrones mientras simultáneamente gana protones.";
            cout<<"\n\t\t\t\t2) Quita oxígeno a otra sustancia.";
            cout<<"\n\t\t\t\t3) Reductora se reduce.";
            cout<<"\n\t\t\t\t4) Oxidante se convierte en reducida.";
			cout<<"\n\n\t\t\t\tINGRESE SU RESPUESTA";
            cin>>re5;
            if (re5=4){
            acuma=acuma+1;
        	}
            cout<<"Las respuestas correctas son"<<acuma;
			break;
			
			case 4:
				cout<<"\n\t\t\t\t¿Que es la NOMENCLATURA QUIMICA ?";
	        cout<<"\n\n\n\t\tEs la metodología establecida para denominar y agrupar los compuestos orgánicos. ";
			cout<<"\n\t\t\t\tUn nombre químico orgánico debe presentar las siguientes cualidades:";
			cout<<"\n\t\t\t\tUNIVOCACION: El nombre debe representar exacta y únicamente a ese ";
			cout<<"\n\t\t\t\tcompuesto. Cuando el nombre no corresponde a la estructura, se dice que el ";
			cout<<"\n\t\t\t\tnombre es equívoco. Cuando el nombre corresponde al menos a dos ";
			cout<<"\n\t\t\t\tcompuestos posibles, se dice que el nombre es ambiguo.";
			cout<<"\n\t\t\t\tCONVENCIONALIDAD: Si existen dos o más opciones unívocas y posibles de ";
			cout<<"\n\t\t\t\tnombrar un compuesto por un sistema determinado de denominación la IUPAC";
			cout<<"\n\t\t\t\testablece que el nombre adecuado es el que conserva el número de posición ";
			cout<<"\n\t\t\t\tmás bajo.";
			cout<<"\n\t\t\t\tLos compuestos químicos se agrupan en funciones orgánicas que dan origen a ";
			cout<<"\n\t\t\t\tseries homólogas orgánicas";
			
			cout<<"\n\t\t\t\tFUNCION HIDROCARBUROS:";
	        cout<<"\n\n\n\t\tEs la función incluye los compuestos caracterizados por la ";
			cout<<"\n\t\t\t\tpresencia exclusiva de átomos de carbono e hidrógeno, formando cadenas ";
			cout<<"\n\t\t\t\tabiertas o cerradas (alifáticos). En este grupo se pueden encontrar hidrocarburos ";
			cout<<"\n\t\t\t\tque presentan sólo enlaces sencillos o enlaces múltiples.";
			cout<<"\n\t\t\t\tPara nombrar a los compuestos lineales ya se trate de alcanos, alquenos o ";
			cout<<"\n\t\t\t\talquinos se tomarán en cuenta los nombres antiguos para los primeros cuatro ";
			cout<<"\n\t\t\t\tmiembros, cambiando el sufijo según se trate de:";
			cout<<"\n\t\t\t\tAlcanos (-ano)";
			cout<<"\n\t\t\t\tAlquenos (-eno) ";
			cout<<"\n\t\t\t\tAlquinos (-ino)";  
			system("pause");
			system("Cls");
			
			cout<<"\n\t\t\t\t¿Que son las CETONAS?";
	        cout<<"\n\n\n\t\tLas Cetonas se producen por oxidación leve de alcoholes secundarios. ";
			cout<<"\n\t\t\t\tEl grupo funcional de las Cetonas se llama grupo carbonilo y es: grupo cetona.";
			cout<<"\n\t\t\t\tEl carbonilo es el átomo de carbono unido a uno de oxígeno a través de un doble ";
			cout<<"\n\t\t\t\tenlace. Las otras dos valencias se encuentran ocupadas por dos radicales de ";
			cout<<"\n\t\t\t\thidrocarburos que pueden ser cadenas carbonadas o anillos aromáticos.";
			cout<<"\n\t\t\t\tSegún la nomenclatura oficial, las cetonas se nombran agregando la terminación ";
			cout<<"\n\t\t\t\to sufijo  “ona” al hidrocarburo de base. Si tiene 3 carbonos deriva del propano, ";
			cout<<"\n\t\t\t\tpropanona. Si fuera lineal de 4 carbonos derivaría del butano, butanona, etc.";
			cout<<"\n\t\t\t\tYa a partir de 4 carbonos es necesario agregar un número que indicará el lugar ";
			cout<<"\n\t\t\t\tdonde se ubica el grupo funcional cetona (grupo carbonilo).";
			
			
			cout<<"\n\t\t\t\t¿Que son los aldehidos ?";
	        cout<<"\n\n\n\t\tSon compuestos que resultan de la oxidación suave y la ";
			cout<<"\n\t\t\t\tdeshidratación de los alcoholes primarios.";
			cout<<"\n\t\t\t\tEl grupo funcional de los aldehídos es el carbonilo al igual que la cetona con la ";
			cout<<"\n\t\t\t\tdiferencia que en los aldehídos van en un carbono primario, es decir, de los ";
			cout<<"\n\t\t\t\textremos.";
			cout<<"\n\n";
			cout<<"\n\t\t\t\tNOMENCLATURA ";
			cout<<"\n\t\t\t\tAl nombrar a los aldehídos solamente tenemos que cambiar la terminación de los ";
			cout<<"\n\t\t\t\talcoholes “ol” por la terminación “al”. Como el ejemplo expuesto arriba, Etanol";
			cout<<"\n\t\t\t\tpasa a Etanal. ";
			cout<<"\n\t\t\t\tTambién existen aldehídos con dobles enlaces sobre la cadena hidrocarbonada.";
			cout<<"\n\t\t\t\tEn estos casos se respeta la nomenclatura de los alquenos que utilizan las ";
			cout<<"\n\t\t\t\tterminaciones “eno”.";
			
			
			cout<<"\n\n\n\t\t\t\t                  EMPEZEMOS";
			cout<<"\n\n";
			system("pause");
			system("Cls");
			
			cout<<"\n\t\t\t\tALDEHIDOS";
			cout<<"\n\t\t\t\tSeñala el nombre correcto para estos ";
			cout<<"\n\t\t\t\tCompuestos:";
			
			
			cout<<"\n\n\t\t\t\t CH3-CH2-CHO";
	

		    cout<<"\n\t\t\t\t1) propanol";
            cout<<"\n\t\t\t\t2) propanal";
            cout<<"\n\t\t\t\t3)  etanal";
			cout<<"\n\n\t\t\t\tINGRESE SU RESPUESTA :";
            cin>>re1;
            if(re1=2){
           acuma=acuma+1;
       }
       cout<<"\n\n\t\t\t\t OHC-CH2 - CH2 - CHO";
	

		    cout<<"\n\t\t\t\t1) butanodial ";
            cout<<"\n\t\t\t\t2) etanodial";
            cout<<"\n\t\t\t\t3) butanal";
			cout<<"\n\n\t\t\t\tINGRESE SU RESPUESTA :";
            cin>>re2;
            if(re2=1){
           acuma=acuma+1;
       }
       cout<<"\n\n\t\t\t\t CH3-CH-CHO";
	   cout<<"\n\n\t\t\t\t      |";
       cout<<"\n\n\t\t\t\t     CH3 "; 
		    cout<<"\n\t\t\t\t1) 2-propilmetanal  ";
            cout<<"\n\t\t\t\t2) 1-metilpropanal";
            cout<<"\n\t\t\t\t3) 2-metilpropanal";
			cout<<"\n\n\t\t\t\tINGRESE SU RESPUESTA :";
            cin>>re3;
            if(re3=3){
           acuma=acuma+1;
       }
			cout<<"\n\n\t\t\t\t CH2 = CH - CHO";
		    cout<<"\n\t\t\t\t1) propinal   ";
            cout<<"\n\t\t\t\t2) etenal";
            cout<<"\n\t\t\t\t3) propenal";
			cout<<"\n\n\t\t\t\tINGRESE SU RESPUESTA :";
            cin>>re4;
            if(re4=3){
           acuma=acuma+1;
       }
       cout<<"\n\n\t\t\t\t OHC - CH2 - CH = CH - CHO";
		    cout<<"\n\t\t\t\t1) 2-pentendial   ";
            cout<<"\n\t\t\t\t2) 3-pentendial";
            cout<<"\n\t\t\t\t3) 3-pentendiol";
			cout<<"\n\n\t\t\t\tINGRESE SU RESPUESTA :";
            cin>>re5;
            if(re5=1){
           acuma=acuma+1;
           Sleep(2000);
       }
			break;
			
				
			case 5:
				repite = false;
				break;
				
		}
	}
	while(repite);
}

void realidad_virtual()
{
	bool repite = true;
	int opcion;	
	int lv_inc,res=0;
	int tot=0;
	int lv_opc,lv_mul;
	
	//Título y opciones del menú
	const char *titulo = "                R E A L I D A D    V I R T U A L";
	const char *opciones[] = {"Cuestionario 1", "Cuestionario 2", "Regresar"};
	int n = 3; //Número de opciones
	
	do
	{
		opcion = menu(titulo, opciones, n);
		system("cls");
		switch (opcion)
		{
	case 1:
	cout<<"  °°°°°°°°°°°°°°°°°°"<<endl;
	cout<<"   °°°CUESTIONARIO°°°"<<endl;
	cout<<"   °°°°°°°°°°°°°°°°°°"<<endl;
	
	cout<<"Pregunta 1\n"<<endl;
	
	cout<<" ¿Que nodo se necesita para hacer una figura?\n"<<endl;
	cout<<"1. Shape"<<endl;
	cout<<"2. transform"<<endl;
	cout<<"3. Materia, material"<<endl;
	cout<<"Indica tu respuesta: ";
	cin>>lv_inc;
	if(lv_inc==1)
	{
	res=res+1;
	}
	else{
		res=res+0;
	}
	
	
	cout<<""<<endl;
	cout<<"Pregunta 2\n"<<endl;
	cout<<"¿Cuales son las figuras primitivas?\n"<<endl;
	cout<<"1. Box, Cylinder, Cone y Sphere,"<<endl;
	cout<<"2. caja, cilindro, cono y esfera. "<<endl;
	cout<<"3. Box, cone cilindro y espera"<<endl;
	cout<<"Indica tu respuesta: ";
	cin>>lv_inc;
	if(lv_inc==1){
		res=res+1;
	}
	else{
		res=res+0;
	}
	
	
	cout<<""<<endl;
	cout<<"Pregunta 3\n"<<endl;
	cout<<" ¿Cuales es codigo que usamos para los colores?\n"<<endl;
	cout<<"1. GRB"<<endl;
	cout<<"2. RGB"<<endl;
	cout<<"3. RBG"<<endl;
	cout<<"Indica tu respuesta: ";
	cin>>lv_inc;
	if(lv_inc==2)
	{
		res=res+1;
	}
	else{
		res=res+0;
	}
	
	
	cout<<""<<endl;
	cout<<"Pregunta 4\n"<<endl;
	cout<<"  ¿Para usar los coleres debe estar dentro del nodo______ y _______?\n"<<endl;
	cout<<"1.  material, material "<<endl;
	cout<<"2.  diffusecolor, material"<<endl;
	cout<<"3.  shape y appearance"<<endl;
	cout<<"Indica tu respuesta: ";
	cin>>lv_inc;
	if(lv_inc==3){
		res=res+1;
	}
	else{
		res=res+0;
	}
	
	
	
	cout<<""<<endl;
	cout<<"Pregunta 5\n"<<endl;
	cout<<"  ¿Cual es el nodo en el que te puedes mover en 3 dimensiones?\n"<<endl;
	cout<<"1. Shape"<<endl;
	cout<<"2. TRANSFORM"<<endl;
	cout<<"3. Materia, material"<<endl;
	cout<<"Indica tu respuesta: ";
	cin>>lv_inc;
	if(lv_inc==2)
	{
		res=res+1;
	}
	else{
		res=res+0;
	}
	
	
	
	cout<<""<<endl;
	cout<<"Pregunta 6\n"<<endl;
	cout<<"  ¿Que campo permite indicar la posición del origen del nuevo sistema de coordenadas?\n";
	cout<<"1. children"<<endl;
	cout<<"2. TRANSFORM. "<<endl;
	cout<<"3. translation"<<endl;
	cout<<"Indica tu respuesta: ";
	cin>>lv_inc;
	if(lv_inc==3){
		res=res+1;
	}
	else{
		res=res+0;
	}
	
	
	
	cout<<""<<endl;
	cout<<"Pregunta 7\n"<<endl;
	cout<<" ¿Nodo que sirve simplemente para definir una serie de puntos en el\n"<<endl;
	cout<<" espaciotridimensional?"<<endl;
	cout<<"1. Coordinate"<<endl;
	cout<<"2. transform"<<endl;
	cout<<"3. translation"<<endl;
	cout<<"Indica tu respuesta: ";
	cin>>lv_inc;
	if(lv_inc==1)
	{
		res=res+1;
	}
	else{
		res=res+0;
	}
	
	
	
	cout<<""<<endl;
	cout<<"Pregunta 8\n"<<endl;
	cout<<"  ¿ se hace uso del nodo ________, como valor del campo texture?\n"<<endl;
	cout<<"1. ImageTexture"<<endl;
	cout<<"2. textura"<<endl;
	cout<<"3. imagen"<<endl;
	cout<<"Indica tu respuesta: ";
	cin>>lv_inc;
	if(lv_inc==1){
		res=res+1;
	}
	else{
		res=res+0;
	}
	
	
	
	cout<<""<<endl;
	cout<<"Pregunta 9\n"<<endl;
	cout<<"  ¿unir una serie de puntos para que formen una polilínea cerrada,\n"<<endl; 
	cout<<"  que es la que definirá la cara?"<<endl;
	cout<<". Nodo point set"<<endl;
	cout<<"2. Nodo IndexedFaceSet"<<endl;
	cout<<"3. Nodo lineset"<<endl;
	cout<<"Indica tu respuesta: ";
	cin>>lv_inc;
	if(lv_inc==2)
	{
		res=res+1;
	}
	else{
		res=res+0;
	}
	
	
	
	cout<<""<<endl;
	cout<<"Pregunta 10"<<endl;
	cout<<" ¿se establece el orden en el que se unen puntos para formar la polilínea\n"<<endl;
	cout<<" cerrada que va a formar la cara.?"<<endl;
	cout<<"1. indexedFaceSet"<<endl;
	cout<<"2. coord Coordinate. "<<endl;
	cout<<"3. coordIndex"<<endl;
	cout<<"Indica tu respuesta: ";
	cin>>lv_inc;
	if(lv_inc==3){
		res=res+1;
	}
	else{
		res=res+0;
	}
	cout<<"Tu resultado es: "<<res<<endl;
	Sleep(2000);
	break;
		
		
		
		
				
	case 2:
		
	cout<<" °°°°°°°°°°°°°°°°°°°°°°"<<endl;
	cout<<" °°° CUESTIONARIO  2°°°"<<endl;
	cout<<" °°°°°°°°°°°°°°°°°°°°°°"<<endl;
	cout<<"\n"<<endl;

	cout<<"A.¿Cual nodo que se usa para crear cuadrricula rectngular con alturas variables?"<<endl;
	cout<<"1.-Elevetion Grid"<<endl;
	cout<<"2.-Inmersiva"<<endl;
	cout<<"3.-Las dos primeras opciones"<<endl;
	cout<<"4.-Elevetion height"<<endl;
	cout<<"Respuesta: ";
	cin>>lv_mul;
	switch (lv_mul)
	{
		case 1:
			cout<<"Correcto"<<" :)"<<endl;
			tot=tot+1;
		break;
		
		case 2:
			cout<<"Incorrecto" <<" :("<<endl;
			tot=tot+0;
		break;
		
		case 3:
			cout<<"Incorrecto"<<" :("<<endl;
			tot=tot+0;
		break;
		
		case 4:
			cout<<"Incorrecto"<<" :("<<endl;
			tot=tot+0;
		break;
	}
	
	
	
	cout<<"B.¿Cual es el nodo que permite crear un conjunto de pundo en 3D como crear un cielo estellado?"<<endl;
	cout<<"1.-Indexed Face Set"<<endl;
	cout<<"2.-Indexed Line Set"<<endl;
	cout<<"3.-Height Set"<<endl;
	cout<<"4.-Point Set"<<endl;
	cout<<"Respuesta: ";
	cin>>lv_mul;
	switch (lv_mul)
	{
		case 1:
			cout<<"Incorrecto"<<" :("<<endl;
			tot=tot+0;
		break;
		case 2:
			cout<<"Incorrecto" <<" :("<<endl;
			tot=tot+0;
		break;
		case 3:
			cout<<"Incorrecto"<<" :("<<endl;
			tot=tot+0;
		break;
		case 4:
			cout<<"Correcto"<<" :)"<<endl;
			tot=tot+1;
		break;
	} 
	
	
	
	cout<<"C.¿Cual es el nodo que permite dibujar lineas rectas en el espacio 3D entre los vertices?"<<endl;
	cout<<"1.-Indexed Face Set"<<endl;
	cout<<"2.-Indexed Line Set"<<endl;
	cout<<"3.-Height Set"<<endl;
	cout<<"4.-Point Set"<<endl;
	cout<<"Respuesta: ";
	cin>>lv_mul;
	switch (lv_mul)
	{
		case 1:
			cout<<"Incorrecto"<<" :("<<endl;
			tot=tot+0;
		break;
		case 2:
			cout<<"Correcto" <<" :)"<<endl;
			tot=tot+1;
		break;
		case 3:
			cout<<"Incorrecto"<<" :("<<endl;
			tot=tot+0;
		break;
		case 4:
			cout<<"Incorrecto"<<" :("<<endl;
			tot=tot+0;
		break;
	} 
	
	
	cout<<"D.¿Cual es el nodo que sirve para unir diferentes puntos especificos para tener caras poliginales?"<<endl;
	cout<<"1.-Height Set"<<endl;
	cout<<"2.-Indexed Line Set"<<endl;
	cout<<"3.-Indexed Face Set"<<endl;
	cout<<"4.-Point Set"<<endl;
	cout<<"Respueta: ";
	cin>>lv_mul;
	switch (lv_mul)
	{
		case 1:
			cout<<"Incorrecto"<<" :("<<endl;
			tot=tot+0;
		break;
		case 2:
			cout<<"Incorrecto" <<" :("<<endl;
			tot=tot+0;
		break;
		case 3:
			cout<<"Correcto"<<" :)"<<endl;
			tot=tot+1;
		break;
		case 4:
			cout<<"Incorrecto"<<" :("<<endl;
			tot=tot+0;
		break;
	} 
	
	
	
	cout<<"E.¿Cual es el nodo que  brilla en direccion uniforme como un conjunto de rayor paralelos"<<endl;
	cout<<"como efecto sol pero no existe una ubicacion en espacio virtual?"<<endl;
	cout<<"1.-Spot Light"<<endl;
	cout<<"2.-Directional Light"<<endl;
	cout<<"3.-Height Light"<<endl;
	cout<<"4.-Point Light"<<endl;
	cout<<"Respuesta: ";
	cin>>lv_mul;
	switch (lv_mul)
	{
		case 1:
			cout<<"Incorrecto"<<" :("<<endl;
			tot=tot+0;
		break;
		case 2:
			cout<<"Correcto" <<" :)"<<endl;
			tot=tot+1;
		break;
		case 3:
			cout<<"Incorrecto"<<" :("<<endl;
			tot=tot+0;
		break;
		case 4:
			cout<<"Incorrecto"<<" :("<<endl;
			tot=tot+0;
		break;
	} 
	
	
	cout<<"F.¿Cual es el nodo que hace emanar una luz en un punto particular en el espacio extediendose"<<endl;
	cout<<"a todas dirreciones?"<<endl;
	cout<<"1.-Spot Light"<<endl;
	cout<<"2.-Directional Light"<<endl;
	cout<<"3.-Height Light"<<endl;
	cout<<"4.-Point Light"<<endl;
	cout<<"Respuesta: ";
	cin>>lv_mul;
	switch (lv_mul)
	{
		case 1:
			cout<<"Incorrecto"<<" :("<<endl;
			tot=tot+0;
		break;
		case 2:
			cout<<"Incorrecto" <<" :)"<<endl;
			tot=tot+0;
		break;
		case 3:
			cout<<"Incorrecto"<<" :("<<endl;
			tot=tot+0;
		break;
		case 4:
			cout<<"Correcto"<<" :)"<<endl;
			tot=tot+1;
		break;
	} 
	
	
	
	cout<<"G.¿Cual es el nodo que parece igual que nodo de la pregunta F pero tiene un efecto de foco que brilla"<<endl;
	cout<<"en todas direcciones?"<<endl;
	cout<<"1.-Spot Light"<<endl;
	cout<<"2.-Directional Light"<<endl;
	cout<<"3.-Height Light"<<endl;
	cout<<"4.-Point Light"<<endl;
	cout<<"Respuesta: ";
	cin>>lv_mul;
	switch (lv_mul)
	{
		case 1:
			cout<<"Correcto"<<" :)"<<endl;
			tot=tot+1;
		break;
		case 2:
			cout<<"Incorrecto" <<" :("<<endl;
			tot=tot+0;
		break;
		case 3:
			cout<<"Incorrecto"<<" :("<<endl;
			tot=tot+0;
		break;
		case 4:
			cout<<"Incorrecto"<<" :("<<endl;
			tot=tot+0;
		break;
	} 
	
	
	
	cout<<"H.¿Cual es el campo para definir una variable?"<<endl;
	cout<<"1.-Traslation"<<endl;
	cout<<"2.-Group"<<endl;
	cout<<"3.-1 y 2 son iguales "<<endl;
	cout<<"4.-Def"<<endl;
	cout<<"Respuesta: ";
	cin>>lv_mul;
	switch (lv_mul)
	{
		case 1:
			cout<<"Incorrecto"<<" :("<<endl;
			tot=tot+0;
		break;
		case 2:
			cout<<"Incorrecto" <<" :("<<endl;
			tot=tot+0;
		break;
		case 3:
			cout<<"Incorrecto"<<" :("<<endl;
			tot=tot+0;
		break;
		case 4:
			cout<<"Correcto"<<" :)"<<endl;
			tot=tot+1;
		break;
	} 
	
	
	
	cout<<"I.¿Cual es el campo para definir un grupo de variables?"<<endl;
	cout<<"1.-Traslation"<<endl;
	cout<<"2.-Group"<<endl;
	cout<<"3.-Def"<<endl;
	cout<<"4.-Grupation"<<endl;
	cout<<"Respuesta: ";
	cin>>lv_mul;
	switch (lv_mul)
	{
		case 1:
			cout<<"Incorrecto"<<" :("<<endl;
			tot=tot+0;
		break;
		case 2:
			cout<<"Correcto" <<" :)"<<endl;
			tot=tot+1;
		break;
		case 3:
			cout<<"Incorrecto"<<" :("<<endl;
			tot=tot+0;
		break;
		case 4:
			cout<<"Incorrecto"<<" :("<<endl;
			tot=tot+0;
		break;
	}
	
	
	
	cout<<"J.¿Cual es el nodo que se usa para girar una figura en cualquier direccion?"<<endl;
	cout<<"1.-Traslation"<<endl;
	cout<<"2.-Dimension"<<endl;
	cout<<"3.-Rotation"<<endl;
	cout<<"4.-Extrusion"<<endl;
	cout<<"Respuesta: ";
	cin>>lv_mul;
	switch (lv_mul)
	{
		case 1:
			cout<<"Incorrecto"<<" :("<<endl;
			tot=tot+0;
		break;
		case 2:
			cout<<"Incorrecto" <<" :)"<<endl;
			tot=tot+0;
		break;
		case 3:
			cout<<"Incorrecto"<<" :("<<endl;
			tot=tot+0;
		break;
		case 4:
			cout<<"Correcto"<<" :("<<endl;
			tot=tot+1;
		break;
	}
	
	cout<<"Total de respuestas correctas : "<<tot<<endl;;
	cout<<"Tu resultado es: "<<res<<endl;
	Sleep(2000);
	break;
		
		
				
	case 3:
	repite = false;
	break;
				
		}
		
}
	while(repite);
}
				
				
				
int menu(const char *titulo, const char *opciones[], int n)
{
	int opcionSeleccionada = 1;
	int tecla;
	bool repite = true;
	
	do
	{
		system("cls");
		
	    gotoxy(5, 3 + opcionSeleccionada); cout << "==>";
	    
	    //Imprime el título
	    gotoxy(15,2); cout << titulo;
	    
	    //Imprime las opciones
	    int i;
	    
	    for((i=0);(i<n);(i++))
	    {
	    	gotoxy(10, 4 + i); cout << i+1 << ") " << opciones[i];
		}
		
		do
		{
			tecla = getch();
		}
		while(tecla != TECLA_ARRIBA && tecla != TECLA_ABAJO && tecla != ENTER);
		
		switch(tecla)
		{
			case TECLA_ARRIBA:
				opcionSeleccionada --;
				
				if (opcionSeleccionada < 1)
				{
					opcionSeleccionada = n;
				}
				
				break;
			
			case TECLA_ABAJO:
				opcionSeleccionada ++;
				
				if (opcionSeleccionada > n)
				{
					opcionSeleccionada = 1;
				}
				
				break;
				
			case ENTER:
				repite = false;
				break;
		}
    }
    while(repite);
	
	return opcionSeleccionada;
}





