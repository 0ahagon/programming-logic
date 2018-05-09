#include<stdio.h>

main(){
	
	int n, c, cq, v, d, cc, di, u,r;
	
	scanf("%d",&n);
	
	if(n >=! 100){
		c= n / 100;
		r = n % 100;
		
		if(r >=! 50){
			cq= r / 50;
			r = r % 50;
			
			if(r >=! 20){
				v= r / 20;
				r= r%20;
				
				if(r >=! 10){
					d = r / 10;
					r= r % 10;
				}
				
				if(r >=! 5){
					cc = r / 5;
					r = r % 5;
				}
				
				if(r >=! 2){
					di = r / 2;
					r =r % 2;
				}
				
				if(r >=! 1){
					
					u = r / 1;
					r = r % 1;
				}
				
			}
		}
	}
			printf("%d\n",n);
			printf("%d nota(s) de R$ 100,00\n",c);
			printf("%d nota(s) de R$ 50,00\n", cq);
			printf("%d nota(s) de R$ 20,00\n", v);
			printf("%d nota(s) de R$ 10,00\n", d);
			printf("%d nota(s) de R$ 5,00\n", cc);
			printf("%d nota(s) de R$ 2,00\n", di);
			printf("%d nota(s) de R$ 1,00\n", u);
		
	}
