#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
	//��� ������Ʈ�� �Է��� �μ��� �����ϸ� ���
	if (argc > 1) {
		//ù��° �μ��� ���
		//���� �ϳ��� �԰� ������ �μ����� ���� ���
		cout << argv[1];
		for (int i = 2; i != argc; ++i)
			cout << " " << argv[i];
	}
	cout << endl;
	return 0;
}