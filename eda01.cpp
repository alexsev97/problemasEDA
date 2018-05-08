/*
precondicion: 0 < n <= 10.000 && -50 <= temperatura <= 60
proc cuentaPicosValles(int[] v, out picos, out valles)
postcondicion: 
*/
#include <iostream>
#include <vector>
using namespace std;

void cuentaPicosValles(vector<int> const& v, int & picos, int & valles){
	for (int i = 1; i < v.size() - 1; ++i){
		if (v.at(i - 1) < v.at(i) && v.at(i + 1) < v.at(i))
			++picos;
		else if (v.at(i - 1) > v.at(i) && v.at(i + 1) > v.at(i))
			++valles;
	}
}

int main(){
	int numCasos = 0;
	cin >> numCasos;
	for (int i = 0; i < numCasos; ++i){
		int picos = 0, valles = 0, tam = 0;
		cin >> tam;
		vector <int> v(tam);
		for (int i = 0; i < tam; ++i)
			cin >> v[i];
		cuentaPicosValles(v, picos, valles);
		cout << picos << " " << valles << '\n';
	}
	return 0;
}