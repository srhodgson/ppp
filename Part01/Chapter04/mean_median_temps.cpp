// Compute mean and median temperaturs 
#include "../../std_lib_facilities.h"

int main()
{
    vector<double> temps; // temperatures
    for (double temp; cin >> temp;) // read into temp
        temps.push_back(temp); // Put temp into vector
    
    // Compute mean temperature:
    double sum = 0;
    for (double x : temps)
        sum += x;
    cout << "Average temperature: " << sum / temps.size() << '\n';

    // Compute median temperature:
    sort(temps); // sort temperatures
    cout << "Median temperature: " << temps[temps.size() / 2] << '\n';
}