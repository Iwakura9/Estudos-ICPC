#include <iostream>
#include <cmath>

bool isPrime(int n) {
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    // Se n for divisível por 2 ou 3, não é primo
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    // Verifica apenas números ímpares maiores que 3
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }

    return true;
}

int main() {
    int x;
    std::cout << "Digite um número: ";
    std::cin >> x;

    if (isPrime(x))
        std::cout << x << " é primo." << std::endl;
    else
        std::cout << x << " não é primo." << std::endl;

    return 0;
}
