#include <iostream>

int main() {
    int num1, num2, resultado;
    char operacion;

    // Pedir los números y la operación al usuario
    std::cout << "Ingrese el primer número: ";
    std::cin >> num1;
    std::cout << "Ingrese el segundo número: ";
    std::cin >> num2;
    std::cout << "Ingrese la operación (+, -, *, /): ";
    std::cin >> operacion;

    // Realizar la operación según el switch
    switch (operacion) {
        case '+':
            resultado = num1 + num2;
            std::cout << "El resultado de la suma es: " << resultado << std::endl;
            break;
        case '-':
            resultado = num1 - num2;
            std::cout << "El resultado de la resta es: " << resultado << std::endl;
            break;
        case '*':
            resultado = num1 * num2;
            std::cout << "El resultado de la multiplicación es: " << resultado << std::endl;
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                std::cout << "El resultado de la división es: " << resultado << std::endl;
            } else {
                std::cout << "Error: No se puede dividir por cero." << std::endl;
            }
            break;
        default:
            std::cout << "Error: Operación no válida." << std::endl;
            break;
    }

    return 0;
}
