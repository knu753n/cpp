/* Dette programmet leser to tall inn fra brukeren og skriver ut summen av disse */
#include <iostream>
using namespace std;

int main() {
    int num1; // Variabel for forste nummer
    int num2; // Variabel for andre nummer
    int sum; // Variabel for begge numrene

    cout<<"Vennligst skriv inn to nummer separert med et mellomrom:"<<endl;
    cin>>num1>>num2;

    sum = num1 + num2;

    cout<<num1<<" + "<<num2<<" = "<<sum<<endl;

    return 0;
}