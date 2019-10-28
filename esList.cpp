#include <iostream>
#include <list>
using namespace std;

//void che data una lista la stampa con l'utilizzo dei puntatori
void stampa(list<int> l)
{
	list<int>::iterator p;
	for (p = l.begin(); p != l.end(); p++)
	{
		cout << *p << endl;
	}
}

int main()
{
	list<int> lista;
	
	//riempo la lista
	for (int i=0; i<10; i++)
	{
		lista.push_back(i);
	}
	
	stampa(lista);
	
	cout << endl << lista.size() << endl << endl;
	
	//svuoto la lista e nel frattempo la mostro
	while (!lista.empty())
	{
		cout << lista.front() << endl;
		lista.pop_front();
	}
	
}
