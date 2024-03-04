#include <iostream>
#include <string>
using namespace std;

int suma_doubles(double numero1, double numero2);
double division_doubles(double number1, double number2);
void area_rectangulo();
int suma_3enteros_z1();
double searching_errors_sum();
string apellido_nombre();
void titulo_libro();
void caracter_strings();
void suma_multiplicacion_enteros_positivos();
void concatenar_string_numero();
void encontrar_fibo();

int main() {
    double double1 = 5.53;
    double double2 = 2.75;
    suma_doubles(double1, double2);
    
    double number1 = 5.3;
    double number2 = 1.2;
    division_doubles(number1, number2);
    
    area_rectangulo();
    
    suma_3enteros_z1();
    
    searching_errors_sum();
    
    cout << apellido_nombre() << endl;
    
    titulo_libro();

    caracter_strings();

    suma_multiplicacion_enteros_positivos();

    concatenar_string_numero();

    encontrar_fibo();
    
    return 0;
}

int suma_doubles(double numero1, double numero2){
    int suma = numero1 + numero2;
    cout << suma << endl;
    return 0;
}

double division_doubles(double number1, double number2){
    double result = number1 / number2;
    cout << result << endl;
    return 0;
}

void area_rectangulo(){
    int width, height;
    cout << "Enter rectangle width and height" << endl;
    cin >> width >> height;
    cout << "Rectangle area is " << width * height << endl;
}

int suma_3enteros_z1(){
    int x, y;
    cout << "Provide your 2 numbers to sum with z=1" << endl;
    cin >> x >> y;
    int z = 1;
    cout << "Your answer: " << endl;
    cout << x + y + z << endl;
    return 0;
}

double searching_errors_sum(){
    double x, y;
    cout << "Provide 2 numbers to sum " << endl;
    cin >> x >> y;
    cout << x + y << endl;
    return 0;
}

string apellido_nombre(){
    string name, surname;
    cout << "Provide your name and surname" << endl;
    cin >> name >> surname;
    string result = surname + ", " + name;
    return result;
}

void titulo_libro(){
    cout << "Provide 3 book titles" << endl;
    string libro1, libro2, libro3;
    getline(cin, libro1);
    getline(cin, libro2);
    getline(cin, libro3);
    cout << libro3 << endl;
    cout << libro2 << endl;
    cout << libro1 << endl;
} 

void caracter_strings(){
    cout << "Provide 5 words:" << endl;
    string palabra1, palabra2, palabra3, palabra4, palabra5;
    cin >> palabra1 >> palabra2 >> palabra3 >> palabra4 >> palabra5;
    cout << palabra1[0] << palabra2[0] << palabra3[0] << palabra4[0] << palabra5[0] << endl;
}

void suma_multiplicacion_enteros_positivos(){
    cout << "Provide 2 numbers:" << endl;
    unsigned int numero1, numero2;
    cin >> numero1 >> numero2;
    int suma = numero1 + numero2;
    int digito = to_string(suma).size();
    int multiplicacion = suma * digito;
    cout << multiplicacion << endl;
}

void concatenar_string_numero(){
    int numero_documentos;
    cout << "Ingrese numero de documentos encontrados" << endl;
    cin >> numero_documentos;
    string info = to_string(numero_documentos) + " documentos encontrados";
    cout << info << endl;
}

void encontrar_fibo(){
    int codigo_fibo = 11235813;
    int codigo;
    cout << "Introduce the following code" << endl;
    cin >> codigo;
    if (codigo == codigo_fibo){
     cout << "Se encontro FIbonacci" << endl;  
    } else {
        cout << "Esto no es de Fibonacci" << endl;
    }
}