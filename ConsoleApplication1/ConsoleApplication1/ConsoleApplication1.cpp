#include <iostream>
#include <cstdlib>
#include <fstream>
#include <iostream>

using namespace std;

void safeFn() {
	ifstream test("test.txt");
	ifstream input("c:users\aluno\desktop\test.txt");
	int nInputValue;

	for (int n = 1; n <= 10; n++) {
		// le o valor
		test >> nInputValue;

		// sai do loop se tiver algum erro
		if (test.fail()) {
			break;
		}

		// valor lido com sucesso
		cout << n << " - " << nInputValue << endl;
	}
}

int main()
{
	safeFn();

	system("PAUSE");
	return 0;
}
