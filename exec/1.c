#include <stdio.h>

double soma(double num1, double num2);

double sub(double num1, double num2);

double div(double num1, double num2);

double mut(double num1, double num2);

double media(double num1, double num2);
int main(){
	char op;
	double num1, num2;
	
	printf("Escolha a operacao que quer utilizar +,-,*,/\n");
	scanf("%c",&op);
	printf("Digite o primeiro numero: ");
	scanf("%lf",&num1);
	printf("Digite o segundo numero: ");
	scanf("%lf",&num2);
	
/*	if(op == '+'){
		printf("A soma e: %f",soma(num1,num2));
	}
	else if(op == '-'){
		printf("A Subtracao e: %f",sub(num1,num2));
	}
	else if(op == '*'){
		printf("A mutiplicacao e: %f",mut(num1,num2));
	}
	else if(op == '/'){
		printf("A divisao e: %f",div(num1,num2));
	}else{
		printf("operacao invalida");
	}
 */      //como fazer no if-----------------------------------
	printf("A media dos numeros e: %f\n",media(10,5));
	
	switch (op){
	case '+':
		printf("A soma e: %f",soma(num1,num2)); 
		break;
		
	case '-':
		printf("A subtracao e: %f",sub(num1,num2)); 
		break;
		
	case '*':
		printf("A multiplicacao e: %f",mut(num1,num2)); 
		break;
		
	case '/':
		printf("A divisao e: %f",div(num1,num2)); 
		break;	
				
	default:
		printf("Operacao invalida");
		break;				
}
		
return 0;

}
double soma(double num1, double num2){
	return num1+num2;
}

double sub(double num1, double num2){
	return num1-num2;
}

double div(double num1, double num2){
	return num1/num2;
}

double mut(double num1, double num2){
	return num1*num2;
}

double media(double num1, double num2){
	return (num1+num2)/2;
}



