// Fortune Cookie 🥠
// Codédex
/* they don't have c course so #include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
  int k ;
  srand(time(NULL));    
  char *l[6] ={ "Don't pursue happiness,  create it.", "All things are difficult before they are easy.", "The early bird gets the worm, but the second mouse gets the cheese.","Someone in your life needs a letter from you.","The fortune you search for is in another cookie.","Help! I'm being held prisoner in a Chinese bakery!"};  
  k = rand() % 6;
  printf ("%s \n", l[k]);
   int i;
  int g = 50; 
 for ( i = 0; i < 5; i++)
 {
  int m = rand() % g+1 ;
  printf("%d \t", m);
 }
 
 
 

  
  return 0;
}*/
#include <iostream>
#include <cstdlib>

int main() {
  srand(time(NULL));

  int fortune = std::rand() % 6;  // Generates a random number that's either 0 or 1

  if (fortune == 0) { 
    std::cout << "🥠 Don't pursue happiness – create it.\n";
  }
  else if (fortune == 1) { 
    std::cout << "🥠 All things are difficult before they are easy.\n";
  }
  else if (fortune == 2) {
    std::cout << "🥠 The early bird gets the worm, but the second mouse gets the cheese.\n";
  }
  else if (fortune == 3) {
    std::cout << "🥠 Someone in your life needs a letter from you.\n";
  }
  else if (fortune == 4) {
    std::cout << "🥠 The fortune you search for is in another cookie.\n";
  }
  else {
    std::cout << "🥠 Help! I'm being held prisoner in a Chinese bakery!\n";
  }
}
