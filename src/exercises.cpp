
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
}

void exercise_4(double n, double a, double b, double x, double y) {
  // TODO: YOUR CODE HERE
}

void exercise_5(char character) {
  // TODO: YOUR CODE HERE
}

void exercise_6(int number) {
  // TODO: YOUR CODE HERE
}

void exercise_7(double r) {
  // TODO: YOUR CODE HERE
}

void exercise_8(long int seconds) {
  // TODO: YOUR CODE HERE
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