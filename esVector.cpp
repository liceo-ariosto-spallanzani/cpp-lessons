#include <iostream>
#include <vector>

using namespace std;

int main()
{	
	vector<int> v;
	
	cout << "Size = " << v.size();
	cout << "Capacity = " << v.capacity() << endl;
	
	//riempo il vector
	for (int i=0; i<100; i++)
		v.push_back(i * 10);
		
	int p = 0;
	
	// mostro gli elementi contenuti nel vector con l'utilizzo dei puntatori
	for (vector<int>::iterator i = v.begin(); i != v.end(); i++)
	{
		p++;
		cout << p << " -> " << *i << endl;
	}
	
	cout << endl;
	
	//mostro gli elementi attraverso l'operatore []
	for (int i=0; i<10; i++)
		cout << v[i] << " ";
}
