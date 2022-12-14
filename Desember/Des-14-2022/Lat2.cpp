#include <iostream>

using namespace std;
int calcSalesTax(float purchase, float taxRate = 0.1);

main()
{
    float purchase;
    cout<<"Masukkan pembelian : \t";
    cin>>purchase;

    float tax = calcSalesTax(purchase);
    cout<<"Pajak pembelian adalah : \t" <<tax<<endl;

    return 0;
}

int calcSalesTax(float purchase, float taxRate)
{
    return purchase * taxRate;
}
