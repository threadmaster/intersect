#include "headers.h"
#include "prototypes.h"

int main(){

  double x1, y1, x2, y2, x3, y3, x4, y4;

  double deltamatrix[4], matA[4], matB[4];
  double *dmat, *amat, *bmat;
  double ua, ub;
   
  dmat = &deltamatrix[0];
  amat = &matA[0];
  bmat = &matB[0];

  x1 = -6.0;
  y1 = -2.0;
  x2 = 5.0;
  y2 = 1.0;
  x3 = -5.0;
  y3 = -3.0;
  x4 = 6.0;
  y4 = 2.0;

  deltamatrix[0] = x2 - x1;
  deltamatrix[1] = x3 - x4;
  deltamatrix[2] = y2 - y1;
  deltamatrix[3] = y3 - y4;

  matA[0] = x3 - x1;
  matA[1] = x3 - x4;
  matA[2] = y3 - y1;
  matA[3] = y3 - y4;

  matB[0] = x2 - x1;
  matB[1] = x3 - x1;
  matB[2] = y2 - y1;
  matB[3] = y3 - y1;

  ua = det2D(amat)/det2D(dmat);
  ub = det2D(bmat)/det2D(dmat);

  printf("Ua = %f\n", ua);
  printf("Ub = %f\n", ub);
  
  if ( ua >= 1.0 && ub >= 1.0 ) {
    printf(" -- Lines intersect -- \n");
  }
  else {
    printf(" -- Lines do not intersect -- \n");
  }
  
}
