#include <iostream>
#include <string.h>

using namespace std;

int main(){
	
	
	char * p;
	char entry[20];

	do{
		p = fgets(entry, 20, stdin);
	}while(p == NULL);

	cout << entry << endl;

	int Idx = strcspn(entry, "\n");

	entry[Idx] = '\0';

	cout << entry << endl;

	return 0;
		

}
