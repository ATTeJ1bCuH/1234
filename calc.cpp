#include<iostream>
#include<cmath>
#include<cstdlib>
#include "pineapple.cpp"
using namespace std;
double Calculate(double N1, double N2, char math) {
	switch (math) {
	case '+': return summ (N1, N2); break;
	case '-': return razn (N1, N2); break;
	case '*': return umn(N1,N2); break;
	case '/': return delenie(N1, N2); break;
}
return 0;
}
int main(int argc, char* argv[]){
    setlocale(LC_ALL, "rus");
    double N1 = atof(argv[1]);
    double N2 = atof(argv[3]);
    char math = argv[2][0];
    double result= Calculate(N1, N2, math);
    cout<<" Результат: "<<N1<<" "<<math<<" "<<N2<<" = "<<result<<endl;
    return 0;
}
