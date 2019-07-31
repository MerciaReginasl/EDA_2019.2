#include<stdio.h>
#include<math.h>

int main(){
	float x1, y1, x2, y2, p1, p2;
	double Distancia;
	
	
	scanf("%f %f", &x1, &y1);
	scanf("%f %f", &x2, &y2);

	
	p1 = pow((x2-x1), 2);
  p2 = pow((y2-y1), 2);
	
  Distancia = sqrt((p1+p2));
	
	printf("%.4lf\n", Distancia);
	
	return 0;
		
	
}
