#include <iostream>
#include <cstdlib>  // rand(), srand()

using namespace std;

int main() {
    // 고정된 시드를 사용하여 난수 생성기 초기화
    srand(42);  // 시드를 42로 설정

    // 랜덤 숫자 생성
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
    // 현재 시간을 시드로 사용하여 난수 생성기 초기화
    srand(static_cast<unsigned int>(time(0)));

    // 랜덤 숫자 생성
    for (int i = 0; i < 10; ++i) {
        int random_number = rand();
        cout << "Random number " << i + 1 << ": " << random_number << endl;
    }

    return 0;
}
*/