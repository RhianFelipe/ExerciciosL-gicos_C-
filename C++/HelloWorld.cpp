#include <iostream> // manipula��o de fluxo de dados padr�o do sistema (entrada padr�o, sa�da padr�o e sa�da de erros padr�o)

using namespace std;  // o certo � que todas as fun��es tenham std:: antes dela, mas com esse comando n�o precisamos acrescentar
int main(void){
	//para printar qualquer digita��o utilizamos a fun��o "cout"
	
	std::cout << "Hello World! \n"; //sem o using namespace std; 
	cout << "Hello World \n"; //com o using namespace std; 
	
	//printando variaveis:
	int a = 5; //variavel do tipo inteiro que recebe o valor 5
	cout << a << "\n"; //para cada nova escrita, devemos utilizar o "<<" 
	
	// outro exemplo de cout
	cout << "O valor da variavel 'a' =" << a << "\n"; // o \n para descer at� a proxima linha
	
	
}
