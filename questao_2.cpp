#include <iostream>

using namespace std;

// Protótipo
void inserirSemRepetir(int vetor[], int valor, int pos, int max);
bool verificaValor(int vetor[], int valor, int max);
void listar(int vetor[], int max);

int main() {
  int quantidade;

  cout << "Digite a quantidade de numeros na lista";
  cin >> quantidade;

  int* vetor = new int[quantidade];

  int valor;

  for(int i = 0 ; i < quantidade ; i++) {
    cout << "Digite o "  << (i + 1) << "numero: ";
    cin  >> valor;

    if(verificaValor(vetor, valor, quantidade)) {
      cout << "Esse valor ja existe"<< endl;
      i--;
    }

    inserirSemRepetir(vetor, valor, i, quantidade);
  }

  listar(vetor, quantidade);

  return 0;

}

bool verificaValor(int vetor[], int valor,  int max) {
  bool resultado = false;
  for(int i  = 0 ; i < max ; i++) {
    if(vetor[i] == valor) {
      resultado = true;
    }
  }

  return resultado;
}

void inserirSemRepetir(int vetor[], int valor, int pos, int max) {
  if(pos == max) {
      cout << "A Lista tá cheia" << endl;
      return;
  }
  vetor[pos] = valor;
  return;
}

void listar(int vetor[], int max) {
  cout << "Vetor:" << endl;
  cout << "[";
  for(int i = 0 ; i < max ; i++) {
    cout << vetor[i] << ",";
  }
  cout << "]";
}

