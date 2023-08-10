/* programa prog06.A.1 */
/* asignar a un vector carateres */

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	
	char letra1[] = {'a', 'b', 'c', 'd', 'e'};
	char letra2[] = {'f', 'g', 'h', 'i', 'j'};
	char letra3[10];
	
	for(int i = 0; i < 5; i++)
	    letra3[i] = letra1[i];
	    
	for(int i = 5; i < 10; i++)
	    letra3[i] = letra2[i-5];
	    
	for(int i = 0; i < 10; i++)
	    cout << letra3[i]<<endl;
	    
	getch();
	return 0;
	
}