#include <iostream>
using namespace std;
int main()
{
	char napis[100];
   int ilosci[26] = {};  
    int i=0;
    cout<<"Witaj w programie!\n\nPodaj jakis string: ";
    cin.getline(napis,100); cout<<endl;
    while(napis[i] != '\0')
    {
        ilosci[napis[i] - 97] ++;
        i ++;
    }
    for(i = 0;i<26;i++)
    {
        if(ilosci[i]) 
            cout << "litera " << (char)(i + 97) << " wystapila " << ilosci[i] << " razy\n";
    }

}
