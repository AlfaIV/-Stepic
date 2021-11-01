#include <iostream>

char *resize(const char *str, unsigned size, unsigned new_size)
{
	/* ... */
	char *new_mem = new char[new_size];
	
	while(*str != '\0'){
		*new_mem = *str;	

		++new_mem;
		++str;

	}	

	delete [] str; 

}

int main(){
	return 0;
}
