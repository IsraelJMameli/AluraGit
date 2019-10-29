#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

using namespace std;

main() {
	//X entradas

	int X[4][3] = { {1,1,1}, {1,-1,1}, {-1,-1,1}, {-1, -1, 1} };
	float W[4][3] = { {1,1,1}, {1,1,1}, {-1,1,1}, {-1, 1, 1} }
	float alfa = 0.5;
	// E = erro
	float E[4] = { 100, 100, 100, 100 };
	//TE = Taxa de Erro
	float TE = 0.8;
	//D = Desejada
	float S[4] = { 0, 0, 0, 0 };
	float D[4] = { 0.8, -0.3, -0.5, -1 };
	float m = 0;
	float Y[4];
	int y = 0;
	setlocale(LC_ALL, "Portuguese");


	while () {


	}
	for (int z = 0; z < 4; z++) {
		// CALCULANDO A SAIDA INTERMEDIÁRIA 
		for (y = 0; y < 3; y++) {
			S[z] = S[z] + X[z][y] * W[z][y];
			m += pow(X[z][y], 2);
		}
		//  CALCULA ERRO
		E[z] = D[z] - S[z];
		//  VERIFICANDO O ERRO É MAIOR QUE O ACEITAVÉL(TE)
		if (fabs(E[0]) >= TE) {
			for (y = 0; y < 3; y++) {
				W[z][y] = W[z][y] + alfa * E[z] * (1 / m) *[z][y];


			}
		}

		if (S[z] >= 0) {
			Y = 1;
		}
		else {
			Y = -1;
		}

	}
	for (z = 0; z < 4; z++) {
		cout << Y[z] << "\t";
	}
	getch();





}