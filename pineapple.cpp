#include<iostream>
unt main(){
double summ(double N1, double N2){
    return N1 + N2;
}
double razn(double N1, double N2){
    return N1 - N2;
}
double umn(double N1, double N2){
    return N1 * N2;
}
double delenie(double N1, double N2){
    double result = 0;
    if(N2 == 0) {exit (1);}
        else{
            result = N1 / N2;
        }
        return result;
    }
}