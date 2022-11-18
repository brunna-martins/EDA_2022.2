//#include <stdio.h>

int faz_conta_direito(int parcelas, char op) {
	int i;
	int conta = 0;
	int numero1 = 0;
	int outros_numeros;
	
	scanf("%d", &numero1);
	
	conta += numero1;
	
	if (op == '+') {
		for (i=1; i<parcelas; i++) {
			scanf(" %d", &outros_numeros);
			conta += outros_numeros;
		}
	} else if (op == '-') {
		for (i=1; i<parcelas; i++) {
			scanf(" %d", &outros_numeros);
			conta -= outros_numeros;
		}
	}
	
	return conta;
}

/*int main(void){
	
	int minha_conta;
	int minhas_parcelas = 4;
	char meu_op = '-';
	
	minha_conta = faz_conta_direito(minhas_parcelas, meu_op);
	
	printf("%d", minha_conta);
	
	return 0;
}*/
