#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>
#include <iomanip>

#include "Student_info.h"
#include "grade.h"

using namespace std;

string letter_grade(double grade) {
	//�������� �����ϴ� ����
	static const double numbers[] = {
		97,94,90,
		87,84,80,
		77,74,70,
		60,0
	};
	//���� ��� ��Ī
	static const char* const letter[] = {
		"A+","A","A-",
		"B+","B","B-",
		"C+","C","C-",
		"D","F"
	};
	
	//�迭 ũ��� ��� �ϳ��� ũ�⸦ ����Ͽ� �������� �����ϴ� ���� ������ ����
	static const size_t ngrades = 
		sizeof(numbers) / sizeof(*numbers);
		
	//�־��� ���������� �ش��ϴ� ���ڵ���� ã�Ƽ� ��ȯ
	for (size_t i = 0; i < ngrades; i++) {
		if (grade >= numbers[i])
			return letter[i];
	}
	return "?\?\?";
}

int main() {
	vector<Student_info> students;
	Student_info record;
	string::size_type maxlen = 0;

	ifstream student_file("grades.txt");

	//�л� �̸��� ��� ������ �о� �����ϱ�
	while (read(student_file, record)) {
		maxlen = max(maxlen, record.name.size());
		students.push_back_back(record);
	}

	//�л� ��� �����ұ�
	sort(students.begin(), students.end(), compare);
	//�̸��� ������ ����
	for (vector<Student_info>::size_type i = 0;
		i != students.size(); ++i) {
		cout << students[i].name
		<< string(maxlen + 1 - students[i].name.size(), ' ');
	}

	try {
		double final_grade = students[i].grade();
		streamsize prec = cout.precision();

		cout << setprecision(3) << letter_grade(final_grade)
			<< setprecision(prec) << endl;
	}

	catch (domain_erroer e) {
		cout << e.what() << endl;
	}

	return 0;
}