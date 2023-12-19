#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    ifstream score;
    score.open("score.txt");

    string num;
    int count = 0;
    double total = 0, n = 0, mean, sd;
    
    while(getline(score,num)){
        count++;
        total = total + stod(num);
        mean = total/count;
        n = n + pow(stod(num),2);
        sd = sqrt((n/count) - pow(mean,2));
    }

    cout << "Number of data = " << count << '\n';
    cout << setprecision(3);
    cout << "Mean = " << mean << '\n';
    cout << "Standard deviation = " << sd << '\n';
}