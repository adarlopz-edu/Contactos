#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <windows.h>
#include<cstring>  
#include<string>  
#define esc 27
#define space 32
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

using namespace std;

struct {
	string nombre;
	string edad;
	string genero;
	string telefono;
	string peso;
} persona[10];

string aMinuscula(string cadena) {
	for (int i = 0; i < cadena.length(); i++) cadena[i] = tolower(cadena[i]);
	return cadena;
}

string leerInput(int i, int v, string f, int limit, string p, int b) {
	i = 1;
	int j = 0;
	int k = 0;
	if (b == 0) {//caso para prohibir los numeros
		for (j = 0; j == 0; j) {
			cout << f;
			cin >> p;
			char* input = new char[p.length() + 1];
			strcpy(input, p.c_str());//convierte de un string a un char
			int contador = 0;
			for (int i = 0; i < p.length(); i++) {
				if (input[i] == '0' || input[i] == '1' || input[i] == '2' || input[i] == '3' || input[i] == '4' || input[i] == '5' || input[i] == '6' || input[i] == '7' || input[i] == '8' || input[i] == '9' || input[i] == '.' || input[i] == ',') {
					contador++;
				}
			}
			if (p.length() < limit + 1 && contador == 0) {
				j = 1;
			}
			else {
				j = 0;
			}
		}
	}
	if (b == 1) {
		//caso especial para el genero
		int c = 0;
		for (c; c == 0; c) {
			cout << f;
			cin >> p;
			if (p == "m" || p == "f" || p == "M" || p == "F") {
				c = 1;
			}
			else {
				c = 0;
			}
		}

	}
	if (b == 2) {//caso especial para prohibir las letras
		for (j = 0; j == 0; j) {
			cout << f;
			cin >> p;
			char* input = new char[p.length() + 1];
			strcpy(input, p.c_str());//convierte de un string a un char
			int contador = 0;
			for (int i = 0; i < p.length(); i++) {
				if (input[i] == 'a' || input[i] == 'b' || input[i] == 'c' || input[i] == 'd' || input[i] == 'e' || input[i] == 'f' || input[i] == 'g' || input[i] == 'h' || input[i] == 'i' || input[i] == 'j' || input[i] == 'k' || input[i] == 'l' || input[i] == 'm' || input[i] == 'n' || input[i] == char(164) || input[i] == 'o' || input[i] == 'p' || input[i] == 'q' || input[i] == 'r' || input[i] == 's' || input[i] == 't' || input[i] == 'u' || input[i] == 'v' || input[i] == 'w' || input[i] == 'x' || input[i] == 'y' || input[i] == 'z' || input[i] == 'A' || input[i] == 'B' || input[i] == 'C' || input[i] == 'D' || input[i] == 'E' || input[i] == 'F' || input[i] == 'G' || input[i] == 'H' || input[i] == 'I' || input[i] == 'J' || input[i] == 'K' || input[i] == 'L' || input[i] == 'M' || input[i] == 'N' || input[i] == char(164) || input[i] == 'O' || input[i] == 'P' || input[i] == 'Q' || input[i] == 'R' || input[i] == 'S' || input[i] == 'T' || input[i] == 'U' || input[i] == 'V' || input[i] == 'W' || input[i] == 'X' || input[i] == 'Y' || input[i] == 'Z') {
					contador++;
				}
			}
			if (p.length() < limit + 1 && contador == 0) {
				j = 1;
			}
			else {
				j = 0;
			}
		}
	}
	if (b == 3) {//caso especial para prohibir las letras en el telefono
		for (j = 0; j == 0; j) {
			cout << f;
			cin >> p;
			char* input = new char[p.length() + 1];
			strcpy(input, p.c_str());//convierte de un string a un char
			int contador = 0;
			for (int i = 0; i < p.length(); i++) {
				if (input[i] == 'a' || input[i] == 'b' || input[i] == 'c' || input[i] == 'd' || input[i] == 'e' || input[i] == 'f' || input[i] == 'g' || input[i] == 'h' || input[i] == 'i' || input[i] == 'j' || input[i] == 'k' || input[i] == 'l' || input[i] == 'm' || input[i] == 'n' || input[i] == char(164) || input[i] == 'o' || input[i] == 'p' || input[i] == 'q' || input[i] == 'r' || input[i] == 's' || input[i] == 't' || input[i] == 'u' || input[i] == 'v' || input[i] == 'w' || input[i] == 'x' || input[i] == 'y' || input[i] == 'z' || input[i] == 'A' || input[i] == 'B' || input[i] == 'C' || input[i] == 'D' || input[i] == 'E' || input[i] == 'F' || input[i] == 'G' || input[i] == 'H' || input[i] == 'I' || input[i] == 'J' || input[i] == 'K' || input[i] == 'L' || input[i] == 'M' || input[i] == 'N' || input[i] == char(164) || input[i] == 'O' || input[i] == 'P' || input[i] == 'Q' || input[i] == 'R' || input[i] == 'S' || input[i] == 'T' || input[i] == 'U' || input[i] == 'V' || input[i] == 'W' || input[i] == 'X' || input[i] == 'Y' || input[i] == 'Z') {
					contador++;
				}
			}
			if (p.length() == limit && contador == 0) {
				j = 1;
			}
			else {
				j = 0;
			}
		}
	}
	return p;
}

int mostrar(int nPersonas) {
	cout << endl << "FUNCION MOSTRAR (Esc para ir atras)" << endl;
	if (nPersonas == 0) {
		cout << endl << "No hay ninguna persona registrada :(";
	}
	else {
		if (nPersonas == 1) {
			cout << "hay " << nPersonas << " persona registrada" << endl;
		}
		else {
			cout << "hay " << nPersonas << " personas registradas" << endl;
		}
		for (int q = 1; nPersonas >= q; q++) {
			cout << endl << "PERSONA #" << q << ": " << endl;
			cout << "Nombre: " << persona[q].nombre << endl;
			cout << "Edad: " << persona[q].edad << " A" << char(-92) << "os" << endl;
			cout << "Genero: ";
			if (persona[q].genero == "m" || persona[q].genero == "M") {
				cout << "Masculino" << endl;
			}
			else {
				cout << "Femenino" << endl;
			}
			cout << "Telefono: +52 " << persona[q].telefono << endl;
			cout << "Peso: " << persona[q].peso << " Kg" << endl << endl;
		}

	}

	char back;
	back = _getch();
	switch (back) {
	case esc:
		system("cls");
	}

	return 0;
}

int agregar(int nPersonas) {
	string nombre;
	string edad;
	string genero;
	string telefono;
	string peso;

	cout << endl << "FUNCION AGREGAR" << endl << endl;
	cout << "Escribe los siguientes datos de la persona:" << endl;
	string n = persona[nPersonas].nombre = leerInput(1, 0, "Nombre (sin espacio broder porfa): ", 20, nombre, 0);
	string e = persona[nPersonas].edad = leerInput(1, 0, "Edad: ", 3, edad, 2);
	string g = persona[nPersonas].genero = leerInput(1, 0, "Genero (M o F): ", 1, genero, 1);
	string t = persona[nPersonas].telefono = leerInput(1, 0, "Telefono: +52 ", 10, telefono, 3);
	string p = persona[nPersonas].peso = leerInput(1, 0, "Peso (Kg): ", 4, peso, 2);

	cout << endl << "CONFIRMACION DE DATOS: " << endl;
	cout << "Nombre: " << n << endl;
	cout << "Edad: " << e << " A" << char(-92) << "os" << endl;
	cout << "Genero: ";
	if (g == "m" || g == "M") {
		cout << "Masculino" << endl;
	}
	else {
		cout << "Femenino" << endl;
	}
	cout << "Telefono: +52 " << t << endl;
	cout << "Peso: " << p << " Kg" << endl << endl;

	cout << "1. CONFIRMAR" << endl;
	char confirmacion;
	confirmacion = _getch();
	switch (confirmacion) {
	case '1':
		cout << "Persona registrada correctamente";
		cout << endl;
		Sleep(1000);
		system("cls");
		break;
	}
	return 0;
}

int eliminar(int nPersonas) {
	cout << endl << "FUNCION ELIMINAR (Esc para ir atras)" << endl;
	if (nPersonas == 0) {
		cout << endl << "No hay ninguna persona registrada :(";
	}
	else {
		if (nPersonas == 1) {
			cout << "hay " << nPersonas << " persona registrada" << endl;
		}
		else {
			cout << "hay " << nPersonas << " personas registradas" << endl;
		}
		for (int q = 1; nPersonas >= q; q++) {
			cout << endl << "PERSONA #" << q << ": " << endl;
			cout << "Nombre: " << persona[q].nombre << endl;
			cout << "Edad: " << persona[q].edad << " A" << char(-92) << "os" << endl;
			cout << "Genero: ";
			if (persona[q].genero == "m" || persona[q].genero == "M") {
				cout << "Masculino" << endl;
			}
			else {
				cout << "Femenino" << endl;
			}
			cout << "Telefono: +52 " << persona[q].telefono << endl;
			cout << "Peso: " << persona[q].peso << " Kg" << endl << endl;
		}

	}

	int c = 0;
	for (c; c == 0; c) {
		cout << "Que persona quieres eliminar? (#) #: ";
		int nP;
		cin >> nP;

		if (nP <= nPersonas) {
			if (nP == nPersonas) {
				c = 1;
				//delete normal porque se elimino la ultima persona de la lista
			}
			else {

				//ejemplo: si hay 7 personas y quiero borrar la persona 3 (nP):
				//tendre que remplazar el valor de la persona [np] en el valor de la persona [np+1] Y TODO ESTO EN UN CICLO
				for (nP; nP <= nPersonas; nP++) {
					string s = persona[nP].nombre;
					char* n = new char[s.length() + 1];
					strcpy(n, s.c_str());

					string s2 = persona[nP + 1].nombre;
					char* nN = new char[s2.length() + 1];
					strcpy(nN, s2.c_str());

					string s3 = persona[nP].edad;
					char* e = new char[s3.length() + 1];
					strcpy(e, s3.c_str());

					string s4 = persona[nP + 1].edad;
					char* nE = new char[s4.length() + 1];
					strcpy(nE, s4.c_str());

					string s5 = persona[nP].genero;
					char* g = new char[s5.length() + 1];
					strcpy(g, s5.c_str());

					string s6 = persona[nP + 1].genero;
					char* nG = new char[s6.length() + 1];
					strcpy(nG, s6.c_str());

					string s7 = persona[nP].telefono;
					char* t = new char[s7.length() + 1];
					strcpy(t, s7.c_str());

					string s8 = persona[nP + 1].telefono;
					char* nT = new char[s8.length() + 1];
					strcpy(nT, s8.c_str());

					string s9 = persona[nP].peso;
					char* p = new char[s9.length() + 1];
					strcpy(p, s9.c_str());

					string s10 = persona[nP + 1].peso;
					char* nP1 = new char[s10.length() + 1];
					strcpy(nP1, s10.c_str());

					strcpy(n, nN);//convierte de un string a un char
					strcpy(e, nE);
					strcpy(g, nG);
					strcpy(t, nT);
					strcpy(p, nP1);

					persona[nP].nombre = n;
					persona[nP].edad = e;
					persona[nP].genero = g;
					persona[nP].telefono = t;
					persona[nP].peso = p;
				}
				c = 1;
			}
		}
		else {
			c = 0;
		}
	}
	return 0;
}

int buscar(int nPersonas) {
	cout << endl << "FUNCION BUSCAR" << endl;
	cout << "1. BUSCAR POR NOMBRE" << endl << "2. BUSCAR POR TELEFONO"	<< endl;
	char tB;
	tB = _getch();

	string buscarNT;
	int personaEncontradaT = 0;
	int nPST = 1;
	string buscarN;
	int personaEncontrada = 0;
	int nPS = 1;

	switch (tB) {
	case '1': 
		cout << "Buscar por nombre: ";
		cin >> buscarN;

		for (nPS; nPS <= nPersonas; nPS++) {
			buscarN = aMinuscula(buscarN);
			persona[nPS].nombre = aMinuscula(persona[nPS].nombre);
			if (buscarN == persona[nPS].nombre) {
				personaEncontrada = nPS;
			}
		}
		if (personaEncontrada == 0) {
			cout << endl << "No se encontro a ninguna persona :(" << endl;
		}
		else {
			cout << endl << "SE ENCONTRO A LA PERSONA #" << personaEncontrada << ": " << endl;
			cout << "Nombre: " << persona[personaEncontrada].nombre << endl;
			cout << "Edad: " << persona[personaEncontrada].edad << " A" << char(-92) << "os" << endl;
			cout << "Genero: ";
			if (persona[personaEncontrada].genero == "m" || persona[personaEncontrada].genero == "M") {
				cout << "Masculino" << endl;
			}
			else {
				cout << "Femenino" << endl;
			}
			cout << "Telefono: +52 " << persona[personaEncontrada].telefono << endl;
			cout << "Peso: " << persona[personaEncontrada].peso << " Kg" << endl << endl;
		}
		break;

	case '2':
		cout << "Buscar por telefono:  +52 ";
		cin >> buscarNT;

		for (nPST; nPST <= nPersonas; nPST++) {
			buscarNT = aMinuscula(buscarNT);
			persona[nPST].telefono = aMinuscula(persona[nPST].telefono);
			if (buscarNT == persona[nPST].telefono) {
				personaEncontradaT = nPST;
			}
		}
		if (personaEncontradaT == 0) {
			cout << endl << "No se encontro a ninguna persona :(" << endl;
		}
		else {
			cout << endl << "SE ENCONTRO A LA PERSONA #" << personaEncontradaT << ": " << endl;
			cout << "Nombre: " << persona[personaEncontradaT].nombre << endl;
			cout << "Edad: " << persona[personaEncontradaT].edad << " A" << char(-92) << "os" << endl;
			cout << "Genero: ";
			if (persona[personaEncontradaT].genero == "m" || persona[personaEncontradaT].genero == "M") {
				cout << "Masculino" << endl;
			}
			else {
				cout << "Femenino" << endl;
			}
			cout << "Telefono: +52 " << persona[personaEncontradaT].telefono << endl;
			cout << "Peso: " << persona[personaEncontradaT].peso << " Kg" << endl << endl;
		}
		break;
	}
	return 0;
}

int modificar(int nPersonas) {
	cout << endl << "FUNCION MODIFICAR (Esc para ir atras)" << endl;
	if (nPersonas == 0) {
		cout << endl << "No hay ninguna persona registrada :(";
	}
	else {
		if (nPersonas == 1) {
			cout << "hay " << nPersonas << " persona registrada" << endl;
		}
		else {
			cout << "hay " << nPersonas << " personas registradas" << endl;
		}
		for (int q = 1; nPersonas >= q; q++) {
			cout << endl << "PERSONA #" << q << ": " << endl;
			cout << "Nombre: " << persona[q].nombre << endl;
			cout << "Edad: " << persona[q].edad << " A" << char(-92) << "os" << endl;
			cout << "Genero: ";
			if (persona[q].genero == "m" || persona[q].genero == "M") {
				cout << "Masculino" << endl;
			}
			else {
				cout << "Femenino" << endl;
			}
			cout << "Telefono: +52 " << persona[q].telefono << endl;
			cout << "Peso: " << persona[q].peso << " Kg" << endl << endl;
		}

	}

	int c = 0;
	for (c; c == 0; c) {
		cout << "Que persona quieres modificar? (#) #: ";
		int nP;
		cin >> nP;

		if (nP <= nPersonas) {
			string nombre;
			string edad;
			string genero;
			string telefono;
			string peso;

			cout << "Escribe los nuevos datos de la persona:" << endl;
			string n = persona[nP].nombre = leerInput(1, 0, "Nombre (sin espacio broder porfa): ", 20, nombre, 0);
			string e = persona[nP].edad = leerInput(1, 0, "Edad: ", 3, edad, 2);
			string g = persona[nP].genero = leerInput(1, 0, "Genero (M o F): ", 1, genero, 1);
			string t = persona[nP].telefono = leerInput(1, 0, "Telefono: +52 ", 10, telefono, 3);
			string p = persona[nP].peso = leerInput(1, 0, "Peso (Kg): ", 4, peso, 2);

			cout << endl << "CONFIRMACION DE NUEVOS DATOS: " << endl;
			cout << "Nombre: " << n << endl;
			cout << "Edad: " << e << " A" << char(-92) << "os" << endl;
			cout << "Genero: ";
			if (g == "m" || g == "M") {
				cout << "Masculino" << endl;
			}
			else {
				cout << "Femenino" << endl;
			}
			cout << "Telefono: +52 " << t << endl;
			cout << "Peso: " << p << " Kg" << endl << endl;

			cout << "1. CONFIRMAR" << endl;
			char confirmacion;
			confirmacion = _getch();
			switch (confirmacion) {
			case '1':
				cout << "Datos modificados correctamente";
				cout << endl;;
				Sleep(1000);
				system("cls");
				break;
			}
			c = 1;
		}
		else {
			c = 0;
		}
	}
	return 0;
}

int main() {
	int nPersonas = 0;
	while (int loop = 1) {
		char opcion;
		cout << "MANIPULACION DE DATOS TIPO CHAR/STRINGS (DATOS DE UNA PERSONA)" << endl << endl;
		cout << "1. Agregar" << endl << "2. Eliminar" << endl << "3. Buscar" << endl << "4. Modificar" << endl << "5. Mostrar" << endl << "Esc. Salir" << endl;
		opcion = _getch();

		switch (opcion) {
		case '1':
			nPersonas++;
			agregar(nPersonas);

			break;

		case '2':
			eliminar(nPersonas);
			nPersonas--;

			break;

		case '3':
			buscar(nPersonas);

			break;

		case '4':
			modificar(nPersonas);

			break;

		case '5':
			mostrar(nPersonas);

			break;

		case esc:
			exit(0);
			break;
		}
	}
}