/*
P ≡ {0 < n < 10.000 ∧ 0 ≤ p < n}
fun xxxx (int a[], int n, int p) return bool b
Q ≡ {b = ∀u, w : 0 ≤ u ≤ p < w < n : a[u] < a[w]}

Coste del algortimo: lineal
*/
#include <iostream>
#include <vector>
using namespace std;

const int MAX_ELEMENTOS = 10000;

bool menor(int a[], int n, int p){
	int max = a[0];
	for (int i = 1; i <= p; ++i)
		if (a[i] > max)
			max = a[i];
	for (int i = p + 1; i < n; ++i)
		if (max >= a[i])
			return false;
	return true;
}

int main(){
	int numCasos = 0;
	cin >> numCasos;
	for (int i = 0; i < numCasos; ++i){
		int n, p;
		cin >> n >> p;
		int a[MAX_ELEMENTOS];
		for (int i = 0; i < n; ++i)
			cin >> a[i];

		if (menor(a, n, p))
			cout << "SI\n";
		else
			cout << "NO\n";

	}

	return 0;
}