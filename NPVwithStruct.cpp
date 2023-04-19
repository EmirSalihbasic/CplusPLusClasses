#include <iostream>
#include <cmath>
using std::cout;

struct A {
    int ia{};
    int ib{};
    int ic{};
};

double calculateNPV(double initialInvestment, double discountRate, double cashFlow1, double cashFlow2, double cashFlow3) {
    double npv = 0.0;
    npv -= initialInvestment;
    npv += cashFlow1 / std::pow((1 + discountRate), 1);
    npv += cashFlow2 / std::pow((1 + discountRate), 2);
    npv += cashFlow3 / std::pow((1 + discountRate), 3);
    return npv;
}

int main () {
    A o1 {10, 20, 30};

    double initialInvestment = 100.0;
    double discountRate = 0.1;
    double cashFlow1 = o1.ia + o1.ib;
    double cashFlow2 = o1.ic * 2;
    double cashFlow3 = (o1.ia + o1.ib + o1.ic) * 1.5;

    double npv = calculateNPV(initialInvestment, discountRate, cashFlow1, cashFlow2, cashFlow3);

    cout << "NPV: " << npv << '\n';
}