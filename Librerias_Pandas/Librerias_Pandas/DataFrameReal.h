#pragma once
#include"columna 2.h"
#include"Fila 2.h"

class DFR
{
private:
	long long numero_filas = 0;
	long long numero_columnas = 0;
public:
	vector<Fila2*>* Filas;
	vector < Columna2*>*Columnas;
	DFR()
	{
		Filas = new vector<Fila2*>;
		Columnas = new vector<Columna2*>;
		agregar_Columna_Bool();
		agregar_Columna_double();
		agregar_Columna_long();
		agregar_Columna_String();
	}

	void agregar_Fila()
	{
		/*long long I = 0;
		Filas* aux = new Filas(I);

		Filas->push_back(aux);

		for (long long i = 0; i < numero_columnas; i++) {

			if (Columnas->at(i)->getTipo() == "String")

				aux->setPunteroString((ColumnaString*)Columnas->at(i));

			if (Columnas->at(i)->getTipo() == "Long")

				aux->setPunteroLong((ColumnaLong*)Columnas->at(i));

			if (Columnas->at(i)->getTipo() == "Double")

				aux->setPunteroDouble((ColumnaDouble*)Columnas->at(i));

			if (Columnas->at(i)->getTipo() == "Bool")

				aux->setPunteroBool((ColumnaBool*)Columnas->at(i));

		}

		aux->AsignarDatos();

		numero_filas++;

		I++;*/
	}

	void agregar_Columna_String()
	{
		Columnas->push_back(new ColumnaString());
		numero_columnas++;
	}
	void agregar_Columna_Bool()
	{
		Columnas->push_back(new ColumnaBool());
	}
	void agregar_Columna_double()
	{
		Columnas->push_back(new ColumnaDouble());
	}
	void agregar_Columna_long()
	{
		Columnas->push_back(new ColumnaLong());
	}
	void mostrar() { //Borrar m�s adelante

		cout << "String \t Long \t Double \t Bool" << endl; //Falta hacer que se alineen bien los nombres de las columnas

		for (long long i = 0; i < numero_filas; i++) {

			Filas->at(i)->mostrar();

		}

	}
};