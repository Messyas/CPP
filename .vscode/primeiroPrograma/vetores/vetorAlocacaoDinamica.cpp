 
 #include <iostream>

using namespace std;

int main() {

 int tamanho;
    cout << "Digite o tamanho do vetor" << endl;
    cin >> tamanho;

    int* vetor = new int[tamanho]; 
    
    for (int i = 1; i < tamanho ; i++) {
         cout << "Digite o elemento  " << i+1 << "do vetor: " << endl; 
         cin >> vetor[i];
    }

    for ( int i = 0 ; i < tamanho; i ++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    //nao preciso mais usar

    delete[] vetor; //libera o espaco de memoria.

    return 0;
}