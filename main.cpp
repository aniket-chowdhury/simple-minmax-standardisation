#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <stdexcept>

using namespace std;

template <class T>
vector<float> minmaxstandard(vector<T> v)
{
    if(v.size()==1) throw std::runtime_error("Not a range");

    vector<float> v1(v.begin(),v.end());

    sort(v.begin(),v.end());

    float min = v.front();
    float max = v.back();


    for(size_t i=0; i<v1.size(); i++)
    {
        v1[i] = (v1[i]-min)/(max-min)*(1-0)+0;
    }

    return v1;
}

int main()
{
    vector<int> v = {8,10,15,20};

    ///Uncomment this part for custom input
/*
        std::cout << "Enter T(size of array):";
        size_t n;
        std::cin >> n;

        vector<int> v1(n,0);

        for(size_t i=0; i<v1.size(); i++)
            std::cin >> v1[i];

    v = v1;
*/

    auto vStandard = minmaxstandard(v);

    for(size_t i=0; i<v.size(); i++)
    {
        cout << v[i] << "\t|\t" << vStandard[i] <<"\n";

    }
}
