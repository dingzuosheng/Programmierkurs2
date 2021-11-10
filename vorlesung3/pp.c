#include <stdio.h>
#define DEBUG 0
#define MIN(a, b) (a <= b) ? a : b
#define QUADRAT(x) (x)*(x)

#define LOG(t) printf("Meldung aus Datei %s in Zeile %d = %s\n", __FILE__, __LINE__, t)

int main(){
  double x = 100.5;
  double y = 200.9;
  #if DEBUG
    LOG("Vor Min");
  #endif
  printf("Min = %f\n", MIN(x++, y));
 
  return 0;
}