#include <iostream>

using namespace std;

void menu(){
	cout<<"	SISTEMA DE COMPRAS "<<endl;
	cout<<"1 - Camisa    R$25.50"<<endl;
	cout<<"2 - Calça     R$60.25"<<endl;
	cout<<"3 - Gravata   R$15.30"<<endl;
	cout<<"4 - Finalizar as Compras"<<endl;
}

int main (){
	setlocale(LC_ALL,"portuguese");
	float total =0, subtotal =0;
	int op, quantidade;
	
	
	do{
		menu();
		cout<<"Escolha a opção desejada: ";
		cin>>op;
		if(op != 4){
		cout<<"Informe a quantidade: ";
		cin>>quantidade;	
		}
		switch(op){
		case 1:
			subtotal = 25.50 * quantidade;
			total = total + subtotal;
			cout<<"Subtotal: R$"<<subtotal<<endl;
			break;
		case 2:
			subtotal = 60.25 * quantidade;
			total = total + subtotal;
			cout<<"Subtotal: R$"<<subtotal<<endl;
			break;
		case 3:
			subtotal = 15.30 * quantidade;
			total = total + subtotal;
			cout<<"Subtotal: R$"<<subtotal<<endl;
			break;
		}
	
	}while (op != 4);
	cout<<"Total: R$"<<total<<endl;
	
}
