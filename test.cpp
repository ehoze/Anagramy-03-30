#include<iostream>
#include<cstring>
using namespace std;
 char w1[101], w2[101];
bool checkif_anagram(char *w1, char *w2)
{
							/////// {
							///////		cz�� sprawdzaj�ca i obliczaj�ca czy s�owa s� czy nie s� anagramami.
	
  	int wlen1 = strlen(w1), wlen2 = strlen(w2);
  	
  	
	if(wlen1 != wlen2)return false;
  	
  	int oblicz[127] = {}; 
  	
	  for(int i = 0; i < wlen1; i++)
  		oblicz[w1[i]]++;
  	
	  for(int i = 0; i < wlen1; i++)
  		oblicz[w2[i]]--;
  		
  	for(int i = 0; i < 127; i++)
  		if(oblicz[i] != 0) 
			return false; // < nie s� >
			
							/////// }
		
  return true; // < je�li zwr�ci prawd� to s� >
} 
 
int main()
{
	cout << "* * * Anagramator :) * * *\n";
   	cout<<"Podaj dwa wyrazy: ";
   	cin>>w1>>w2;
   	if(checkif_anagram(w1,w2))
    	cout<<"Podane wyrazy sa anagramami\n";
   	else
    	cout<<"Podane wyrazy nie sa anagramami\n";
    return 0;
}
