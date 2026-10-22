// 2. Write a function to convert Celsius temperature into Fahrenheit.
#include <stdio.h>

float c2f(float);

float c2f(float c){
    return ((9*c)/5)+32;

}
int main(){
  float c = 45;
    printf("calsius to fahrenheit fo %f is %.0f ",c,c2f(c));

    return 0;
}