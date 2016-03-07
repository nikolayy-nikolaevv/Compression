#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;

int main() 
{
   string text;
   cout<<"Text: ";cin>>text;
   int number=1; //for counting
   
   for (int i=0;i<text.size();i++) { //text.size() = lenght of string 
       if (text[i]==text[i+1]) number++; //counting
       else {
            cout<<number<<text[i]; //prints out the result
            number=1; //reset value
	    }
   }
   cout<<endl;
   
   system("PAUSE");
   return 0;
}
