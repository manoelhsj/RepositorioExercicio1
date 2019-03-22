#include <stdio.h>
#include <math.h>

int fatorial(int num);
int primo();
float potencia (float n1, int n2);
float raiz ( float num );
int bissexto(int num);
float media (float n1,float n2);
float ponderada(float num2, float num3, float num4);
	
int main(void){ 

	int opc = 1;
	int num,n;
	float num2,num3,num4;
	
	while(opc != 0){

		printf("\nMenu\nDigite um numero entre 1 e 9:\n1 - fatorial\n2 - Primo/nao primo\n3 - le n numeros primos/nao primo\n4 - Potencia A elevado a B\n5 - Raiz de A na basa B\n6 - Ano Bissexto\n7 - Media aluno\n8 - Media Ponderada\n9 - Nome/Matricula:\n ");
		scanf("%d", &opc);

		switch(opc){
	
		case 1:
		    printf("informe um numero para qual retorne ao seu fatorial:\n");
		    scanf("%d", &num);
		    printf("O seu fatorial e : %d", fatorial(num));
			break;
			
		case 2:
			num = primo();
   			if(num == 0)
       		  printf("e primo.");
  	  		else
      		  printf("nao e primo");  		  
			break;
			
		case 3:
			do{
    			num = primo();
    			if(num == 0)
       				printf("e primo.\n");
  	  			else
      				printf("nao e primo\n");
      				printf("Digite 0 para voltar ao menu \nOu qualquer outro valor para fazer outra verificacao: ");
					scanf("%d", &n);
					
			} while(n);
			break;
			
		case 4:
			printf("informe o primeiro numero:\n");
	  		scanf("%d",&num);	
	 		printf("informe o segundo numero:\n");
	  		scanf("%f",&num2);
	  		printf(" A elevado B : %e\n",potencia(num,num2));
	  		break; 
	  		
		case 5:
		    printf("digite um valor real:\n");
      		scanf("%f",&num2);
      		printf("Raiz quadrada : %e\n",raiz(num2)); 
	  		break;  
	  		
		case 6:
			printf("Digite um ano:\n");
            scanf("%d",&num);
      	    bissexto(num);
	        break;   
	        
		case 7:
			printf("informe duas notas entre 0.0 e 10.0:\n");
      		scanf("%f%f",&num2,&num3);
      		printf("\nsua media e: %.2f\n", media(num2,num3));
	  		break; 
	  		
		case 8:
		    printf("informe tres notas:\n");
      		scanf("%f%f%f",&num2,&num3,&num4);
      		printf("Sua media ponderada e: %.2f\n", ponderada(num2,num3,num4));
	  		break;  
	  		
		case 9:
			printf("Aluno: manoel henrique da silva\n");
			printf("mat.:%x\n", 1810022969);
			break;
	  
    	default:
    		printf("opçao inexistente");              	
		}
	}

   return 0;
}

int fatorial(int num){
	int i;
	for(i = (num-1); i > 1; i--){
		num = num * i;
	}
 return num;	
}
int primo(){
	
	int i, num, cont=0;
	
  	printf("Informe um numero:\n");
    scanf("%d", &num);
	for (i = 2; i <= num /2; i++){
  		if((num % i) == 0){
			cont++;
  		}
	}
 	return cont;	
}

float potencia (float n1, int n2){
	float result;
	result= pow(n1,n2);
 	return result;	
}

float raiz ( float num ){
	float result;
	result = sqrt(num);
	return result;	
}

int bissexto(int num){
 	int result;
    if(num % 4 ==0 && (num % 400==0||num % 100!=0))
    	printf("ano bissexto");
    else
    	printf("ano nao bissexto");
 return result;	
}

float media (float n1,float n2){
    float result;
    result=(n1+n2)/2;
    if ( n1 < 0.0 || n1 > 10.0 || n2 < 0.0 || n2 > 10.0)   
        printf("Nota valida");
    else
        printf("nota invalida");          
	return result;
}

float ponderada(float num2, float num3, float num4){
	float result;
    result=(num2 + num3 + num4*2)/4;     
      if (result >=6.0)	  
        printf("aprovado\n");
  	  else 		
        printf("reprovado\n");
 return  result;	
}
