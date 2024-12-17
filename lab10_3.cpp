//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
using namespace std;

int main(){
    int Numdata=0 ;
    float sum ;
    float avg ;
     float Mean ;
     float sd ;
     float po ;
    string textline;
    ifstream source("score.txt");
    while (getline(source,textline))
    {
        // cout<<textline<<'\n';
        sum+=atof(textline.c_str());
        Numdata++ ;
        po+=pow(atof(textline.c_str()),2) ;
    }
    avg = sum/Numdata ;
    Mean = avg ;
    
    sd = sqrt((po/Numdata)-pow(avg,2)) ;
     cout << "Number of data = "<<Numdata<<"\n";
     cout << setprecision(3);
     cout << "Mean = "<<Mean<<"\n";
     cout << "Standard deviation = "<<sd;
    // cout<<sum ;
}