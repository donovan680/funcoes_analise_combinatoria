#include <iostream>
using namespace std;

// Função para calcular o fatorial de um número (n!)
long long fatorial(int n) {
    long long resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

// Função para calcular combinações: C(n, k) = n! / (k! * (n-k)!)
long long combinacao(int n, int k) {
    if (k > n) return 0;
    // Aproveita a propriedade de simetria: C(n, k) = C(n, n-k)
    if (k > n - k)
        k = n - k;
    
    long long resultado = 1;
    for (int i = 1; i <= k; i++) {
        resultado = resultado * (n - i + 1) / i;
    }
    return resultado;
}

// Função para calcular permutações: P(n, k) = n! / (n-k)!
long long permutacao(int n, int k) {
    if (k > n) return 0;
    long long resultado = 1;
    for (int i = 0; i < k; i++) {
        resultado *= (n - i);
    }
    return resultado;
}

int main() {
    int opcao;
    cout << "Escolha a operação:\n";
    cout << "1 - Calcular Combinações (C(n, k))\n";
    cout << "2 - Calcular Permutações (P(n, k))\n";
    cout << "Opção: ";
    cin >> opcao;
    
    int n, k;
    cout << "Digite o valor de n: ";
    cin >> n;
    cout << "Digite o valor de k: ";
    cin >> k;
    
    if(opcao == 1) {
        cout << "C(" << n << ", " << k << ") = " << combinacao(n, k) << "\n";
    } else if(opcao == 2) {
        cout << "P(" << n << ", " << k << ") = " << permutacao(n, k) << "\n";
    } else {
        cout << "Opção inválida!\n";
    }
    
    return 0;
}
