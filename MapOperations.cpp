#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(){
    map<string, long long> statePopulation;
    
    statePopulation["Maharashtra"] = 126000000;
    statePopulation["Gujarat"] = 72000000;
    statePopulation["Karnataka"] = 68000000;
    statePopulation["Rajasthan"] = 82000000;
    statePopulation["Tamil Nadu"] = 77000000;
    statePopulation["Uttar Pradesh"] = 240000000;
    statePopulation["Madhya Pradesh"] = 88000000;
    
    string stateName;
    
    cout << "Enter the name of a state: ";
    getline(cin, stateName);
    
    map<string, long long> :: iterator it = statePopulation.find(stateName);
    
    if(it != statePopulation.end())
        cout << "Population of " << stateName << " = " << it->second << endl;
        
    else
        cout << "State not found in the map" << endl;
        
    return 0;
    
}
