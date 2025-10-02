#include <iostream>
#include <string>
#include <cstdlib>   // Para atof
using namespace std;

// Callbacks para operaciones aritméticas
double add(double a, double b)       { return a + b; }
double subtract(double a, double b)  { return a - b; }
double multiply(double a, double b)  { return a * b; }
double divide(double a, double b)    
{
    if (b == 0) {
        cerr << "Error: División por cero no permitida." << endl;
        exit(EXIT_FAILURE);
    }
    return a / b;
}

// Función que recibe un callback y ejecuta la operación
void performOperation(double (*callback)(double, double), double x, double y) {
    cout << "Resultado: " << callback(x, y) << endl;
}

int main(int argc, char* argv[]) {
    if (argc != 4) {
        cerr << "Uso: " << argv[0] << " <operando1> <operador> <operando2>" << endl;
        cerr << "Ejemplo: " << argv[0] << " 12.5 + 7.3" << endl;
        return EXIT_FAILURE;
    }

    // Convertir operandos a double
    double op1 = atof(argv[1]);
    string operador = argv[2];
    double op2 = atof(argv[3]);

    // Selección de operación según el argumento
    if (operador == "+") {
        performOperation(add, op1, op2);
    }
    else if (operador == "-") {
        performOperation(subtract, op1, op2);
    }
    else if (operador == "*" || operador == "x" || operador == "X") {
        performOperation(multiply, op1, op2);
    }
    else if (operador == "/") {
        performOperation(divide, op1, op2);
    }
    else {
        cerr << "Error: Operador no válido. Use +, -, *, x o /" << endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
