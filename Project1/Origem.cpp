#include<iostream>

using namespace ::std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	float pd1 = 5.30; float pd2 = 6.00; float pd3 = 3.20; float pd4 = 2.50;
	bool validador = true;
	int code;
	float soma = 0;
	int multiplicador;
	float desconto;
	string resposta;

	cout << "SEJA BEM VINDO A NOSSA LOJA" << ::endl;
	cout << "Pre�o de nossos produtos" << ::endl;
	cout << "C�digo 1 Produto 1: " << pd1 << ::endl << "C�digo 2 Produto 2: " << pd2 << ::endl
		<< "C�digo 3 Produto 3: " << pd3 << ::endl << "C�digo 4 Produto 4: " << pd4 << endl;

		cout << " Digite o c�digo do produto que deseja comprar: " << ::endl;
		cin >> code;
		cout << "Quantos produtos desde voc� quer comprar ?: " << ::endl;
		cin >> multiplicador;

		switch (code){
		case 1:
			multiplicador *= pd1;
			soma += multiplicador;
			multiplicador = 0;
			break;
		case 2:
			multiplicador *= pd2;
			soma += multiplicador;
			multiplicador = 0;
			break;
		case 3:
			multiplicador *= pd3;
			soma += multiplicador;
			multiplicador = 0;
			break;
		case 4:
			multiplicador *= pd4;
			soma += multiplicador;
			multiplicador = 0;
			break;
		}
		if (multiplicador >= 15 ||soma >= 40){
			desconto = (15 * soma) / 100;
			cout << "******Parab�ns Voc� recebeu 15% de desconto*******" << ::endl;
			cout << "O valor ajustado a ser pago � de: " << soma - desconto << ::endl;
		}
		else {
			cout << "OBRIGADO POR COMPRAR !!!" << ::endl;
			cout << "TOTAL A PAGAR: " << soma << ::endl;
		}
		system("pause");		
}
