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

<<<<<<< HEAD
<<<<<<< HEAD
	delete [] str; 
=======
	delete [size] str; 
>>>>>>> e7db78c2856582fb7abfab4da197778592c35c45
=======
	delete [size] str; 
>>>>>>> origin/main

}

int main(){
	return 0;
}
