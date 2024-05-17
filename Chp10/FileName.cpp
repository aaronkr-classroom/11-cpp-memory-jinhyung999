#include <iostream>
#include <cstdlib>  // rand(), srand()

using namespace std;

int main() {
    // ������ �õ带 ����Ͽ� ���� ������ �ʱ�ȭ
    srand(42);  // �õ带 42�� ����

    // ���� ���� ����
    for (int i = 0; i < 10; ++i) {
        int random_number = rand();
        cout << "Random number " << i + 1 << ": " << random_number << endl;
    }

    return 0;
}
/*
#include <iostream>
#include <cstdlib>  // rand(), srand()
#include <ctime>    // time()

using namespace std;

int main() {
    // ���� �ð��� �õ�� ����Ͽ� ���� ������ �ʱ�ȭ
    srand(static_cast<unsigned int>(time(0)));

    // ���� ���� ����
    for (int i = 0; i < 10; ++i) {
        int random_number = rand();
        cout << "Random number " << i + 1 << ": " << random_number << endl;
    }

    return 0;
}
*/