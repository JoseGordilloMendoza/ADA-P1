#include <iostream>
#include <string>
using namespace std;

int main()
{   
    int arreglo[]={1,2,3,4,5};
    string original="", reverse="";
    for (int i=0;i<5;i++)
    {   
        if(i == 4)
            original+=to_string(arreglo[i])+"";
        else 
            original+=to_string(arreglo[i])+" - ";
    }
    
    for (int i=5-1;i>=0;i--)
    {   
        if(i == 0)
            reverse+=to_string(arreglo[i])+"";
        else
            reverse+=to_string(arreglo[i])+" - ";
    }
    cout << "Original: " << original << "\n";
    cout << "Reverse: " << reverse << "\n";
    printf("\n");
    return 0;
}
