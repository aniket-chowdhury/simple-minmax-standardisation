#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    vector<float> v(10,0);
    vector<float> vStandard(10,0);
    srand(static_cast<uint16_t>(time(0)));
    for(auto& elem:v)
        elem = rand()%100;

    sort(v.begin(),v.end());
    int min = v[0];
    int max = v[9];

    for(int i=0; i<10; i++)
    {
        vStandard[i] = (v[i]-min)/(max-min)*(1-0)+0;
        cout << v[i] << "\t|\t" << vStandard[i] << "\n";
    }

}
