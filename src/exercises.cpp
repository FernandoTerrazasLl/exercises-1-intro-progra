
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1, string s2, string s3) {
  if(s1 <= s2 && s1 <= s3){
        cout << s1;

    } else if(s2 <= s1 && s2 <= s3) {
        cout << s2;

    } else{
        cout << s3;
    }
}

void exercise_2(double A, double B, double C) {

    double D = (B * B) - (4 * A * C);

    
    if (A==0 && B==0){

    } else if (A == 0){
        cout << -C/B << endl;

    } else if (B == 0){
        cout << sqrt(-C/A)<< endl;
    } else if (D < 0){

    } else if (D >= 0) {
        double sqrt_D = sqrt(D);
        double x1 = (-B + sqrt_D) / (2 * A);
        double x2 = (-B - sqrt_D) / (2 * A);
        
        if (x1 == x2){
            cout << x1 << endl;
        } else {
            cout << x1 << " " << x2 << endl;
        }
    }

}

void exercise_3(int a, int b) {
  // TODO: YOUR CODE HERE
  if (0 <= a <= 1000000 && 0 <= b <= 1000000){

     if(b == 0){
      cout << "Impossible" << endl;
     } else{
      int result = a / b;
      cout << result << endl;
    }
  }
}

void exercise_4(double n, double a, double b, double x, double y) {
  // TODO: YOUR CODE HERE
      if (n > b){
        cout << (n * (100-y))/100 << endl;

    }else if(n > a){
    cout << (n * (100-x))/100 << endl;

    }else {
        cout << n << endl;
    }
}

void exercise_5(char character) {
  // TODO: YOUR CODE HERE
    if (character >= 65 && character <= 90){
        cout << "upper-case alphabet" << endl;

    } else if (character >= 97 && character <= 122){
        cout << "lower-case alphabet" << endl;
    } else {
        cout << "not an alphabet" << endl;
    }


}

void exercise_6(int number) {
  // TODO: YOUR CODE HERE
    switch (number){
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid input" << endl;
            break;
    }
}

void exercise_7(double r) {
  // TODO: YOUR CODE HERE
  if(r >= 0){
        double volume = 4 * 3.14 * (r * r);
        cout << volume << endl;
    } else if(r < 0){
        cout << "Error: Radius cannot be negative." << endl;
    }
}

void exercise_8(long int seconds) {
  // TODO: YOUR CODE HERE
      if(seconds >= 0){
        int horas = seconds / 3600;
        int segundos_2 = seconds % 3600;
        int minutos = segundos_2 / 60;
        int segundos_finales = segundos_2 % 60;

        string horas_ = to_string(horas);
        string minutos_ = to_string(minutos);
        string segundos_finales_ = to_string(segundos_finales);

        int horas_size = horas_.size();
        int minutos_size = minutos_.size();
        int segundos_finales_size = segundos_finales_.size();

        if(horas_size < 2){
            cout << "0" << horas << ":";
        } else {
            cout << horas << ":";
        }
        if(minutos_size < 2){
            cout << "0" << minutos << ":";
        } else {
            cout << minutos << ":";
        }
        if(segundos_finales_size < 2){
            cout << "0" << segundos_finales << endl;
        } else{
            cout << segundos_finales << endl;
        }

    } else if(seconds < 0){
        cout << "Error: Input seconds cannot be negative." << endl;
    }
}

string exercise_9(string s1, string s2, string s3, string s4, string s5) {
    char s1_ = s1 [0];
    char s2_ = s2 [0];
    char s3_ = s3 [0];
    char s4_ = s4 [0];
    char s5_ = s5 [0];

    string result_;

        if(s1_ == s5_){
            result_ = "Hemos encontrado algo!";

        } else {
            result_ = "Aun sin suerte";
        }
    string result1 = string(1, s1_) + string(1, s2_) + string(1, s3_) + string(1, s4_) + string(1, s5_);
    cout << result1 << endl;
    return result_;
}

int exercise_10(int a, int b) {
    if(a >= 0 && b >= 0){
        int sum = a + b;
        int digits = to_string(sum).size();

        int result = sum * digits;
        return result;
    } else {
        return 0;
    }

}

string exercise_11(int number) {
  // TODO: YOUR CODE HERE

    int codigo_fibo = 11235813;
    if (number == codigo_fibo){
        return "Se encontro a Fibonacci"; 

    } else {
        return "Esto no es de Fibonacci";
    }
    return 0;
}
  

void exercise_12(string color1, int numb1,
                 string color2, int numb2,
                 string color3, int numb3,
                 string color4, int numb4) {

if(color4== "?" && numb1==numb4|| numb4==-1 && color1==color4|| color1==color4 && numb1==numb4){
  cout << 1 << endl;
}

if(color4== "?" && numb2==numb4|| numb4==-1 && color2==color4|| color2==color4 && numb2==numb4){
  cout << 2 << endl;
}

if(color4== "?" && numb3==numb4|| numb4==-1 && color3==color4|| color3==color4 && numb3==numb4){
  cout << 3 << endl;
}

}

string exercise_13(int age, int years_of_experience) {
  // TODO: YOUR CODE HERE
      if(age >= 18){
        if(years_of_experience >= 5){
            return "Senior project manager";

        }else if(years_of_experience >= 3){
            return "Project manager";

        }else{
            return "Project coordinator";
        }
    }else{
        return "Not eligible";
    }

  return 0;
}

string exercise_14(int number_of_docs) {
      if(number_of_docs == 1){
        string result = "Se encontro un documento";
        return result; 

    }else if(number_of_docs <= 0){
        string result1 = "No se encontraron documentos";
        return result1;
    }else{
        string result2 = to_string(number_of_docs) + " "+ "documentos encontrados";
        return result2;
    }
  return 0;
}

void exercise_15(int a, int b, int c) {
    int z;
    z = a;
    a = c;
    c = b;
    b = z;
    cout << "Los valores son: a = 51 b = 876 y c = 235" << endl;
    cout << "Permutamos: a => b, b => c, c => a" << endl;
    cout << "Los valores despues de la permutacion son: a = " << a << " b = " << b << " c = " << c << endl;
}

void exercise_16(int debut, int fin) {
    int hours;
    int tarifa;

    if(debut == fin){
        cout << "Que extraño, no has alquilado tu bicicleta por mucho tiempo!" << endl;
    }
    if(debut > fin){
        cout << "Que extraño, el inicio del alquiler es después del final..." << endl;
    }
    if(debut >=0 && debut <= 24 && fin >=0 && fin <=24){

            if(debut <= 7 && fin <= 7){
                hours = fin - debut;
                tarifa = hours * 1;
                cout << "Haz alquilado una bicicleta por" << endl;
                cout << hours << " hora(s) con el tarifario de 1 boliviano" << endl;
                cout << "El monto total a pagar es de " << tarifa << " boliviano(s)." << endl;

            }else if(debut <= 17 && debut >= 7 && fin >= 7 && fin <= 17){
                hours = fin - debut;
                tarifa = hours * 2;
                cout << "Haz alquilado una bicicleta por" << endl;
                cout << hours << " hora(s) con el tarifario de 2 bolivianos" << endl;
                cout << "El monto total a pagar es de " << tarifa << " boliviano(s)." << endl;

            }else if(debut <= 24 && debut >= 17 && fin >= 17 && fin <= 24){
                hours = fin - debut;
                tarifa = hours * 1;
                cout << "Haz alquilado una bicicleta por" << endl;
                cout << hours << " hora(s) con el tarifario de 1 boliviano" << endl;
                cout << "El monto total a pagar es de " << tarifa << " boliviano(s)." << endl;

            }else if(debut <= 7 && fin >= 7 && fin <= 17){
                hours = fin - debut;
                int hours1 = debut-7;
                int tarifa1 = hours1 * 1;
                int hours2 = hours - hours1;
                int tarifa2 = hours2 * 2;
                cout << "Haz alquilado una bicicleta por" << endl;
                cout << hours1 << " hora(s) con el tarifario de 1 boliviano" << endl;
                cout << hours2 << " hora(s) con el tarifario de 2 bolivianos" << endl;
                cout << "El monto total a pagar es de " << tarifa1 + tarifa2 << " boliviano(s)." << endl;
            }else if(debut <= 7 && fin >= 17 && fin <= 24){
                hours = fin - debut;
                int hours1 = debut-7;
                int tarifa1 = hours1 * 1;
                int hours2 = fin-17;
                int tarifa2 = hours2 * 1;
                int hours11 = hours1 + hours2;
                int tarifa11 = hours11 * 1;
                int hours3 = hours - (hours1 + hours2);
                int tarifa3 = hours3 * 2;
                cout << "Haz alquilado una bicicleta por" << endl;
                cout << hours11 << " hora(s) con el tarifario de 1 boliviano" << endl;
                cout << hours2 << " hora(s) con el tarifario de 2 bolivianos" << endl;
                cout << "El monto total a pagar es de " << tarifa1 + tarifa2 + tarifa3 << " boliviano(s)." << endl;
            }else if(debut <= 17 && debut >= 7 && fin >= 17 && fin <= 24){
                hours = fin - debut;
                int hours1 = 17-debut;
                int tarifa1 = hours1 * 2;
                int hours2 = hours - hours1;
                int tarifa2 = hours2 * 1;
                cout << "Haz alquilado una bicicleta por" << endl;
                cout << hours2 << " hora(s) con el tarifario de 1 boliviano" << endl;
                cout << hours1 << " hora(s) con el tarifario de 2 bolivianos" << endl;
                cout << "El monto total a pagar es de " << tarifa1 + tarifa2 << " boliviano(s)." << endl;
                
            }
    }else{
        cout << "Las horas deben estar entre 0 y 24!" << endl;
    }
}