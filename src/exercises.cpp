
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
  // TODO: YOUR CODE HERE
  return "";
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
}

string exercise_11(int number) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_12(string color1, int numb1,
                 string color2, int numb2,
                 string color3, int numb3,
                 string color4, int numb4) {
  // TODO: YOUR CODE HERE
}

string exercise_13(int age, int years_of_experience) {
  // TODO: YOUR CODE HERE
  return "";
}

string exercise_14(int number_of_docs) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_15(int a, int b, int c) {
  // TODO: YOUR CODE HERE
}

void exercise_16(int debut, int fin) {
  // TODO: YOUR CODE HERE
}