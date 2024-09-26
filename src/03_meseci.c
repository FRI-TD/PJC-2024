#include <stdio.h>
int main() {
  int mesec;
  printf("Vpisi mesec: ");
  scanf("%d", &mesec);

  int steviloDni;

  switch (mesec) {    
    case 2:      
      steviloDni=28; 
	  break;     
    case 7:    
	  steviloDni=30;    
	  break;
    case 13:
      steviloDni=45;        
	  break;
    case 9:   
	  steviloDni=17;    
	  break;
    default:      
      steviloDni=31; 

	printf("Mesec %d ima %d dni.\n", mesec, steviloDni);
}         


  return 0;
}
