#include <iostream> // ����/�����
using namespace std; // ���������, ���������� ������������� ��-�� ���� std
const double PI = 3.141592653589793;

int main() {
	setlocale(LC_ALL, "RU"); // ����������� ������������� �������� �����
	float alfa_d, alfa_r, A, B, Z1, Z2; // ���������� ����������
	cout << "������� �������� ���� � ��������� ����:"; // ����� ������ �� �����
	cin >> alfa_d; // ���� �������� � ����������
	
	// ���������� ���� � ��������� [0, 360)
	while (alfa_d >= 360) {
		alfa_d = alfa_d - 360;
	}
	while (alfa_d < 0) {
		alfa_d = alfa_d + 360;
	}

	// ��������� ���� � ������� ����� �������������
	alfa_r = (alfa_d * PI) / 180.0;

	A= sin(alfa_r) / sqrt(1 - pow(sin(alfa_r), 2));
	B= sqrt(1 - pow(cos(alfa_r), 2)) / cos(alfa_r);

	// �������� �� ������� ������
	if (alfa_d == 90 || alfa_d == 270) {
		cout << "��� �������� ��� ������ ����." << endl;
	}

	//����� ����� ��� �������� ���������
	else {
		if (alfa_d>0 && alfa_d<90) {
			Z1 = A;
			Z2 = B;
		}
		else if (alfa_d>90 && alfa_d<180) {
			Z1 = -A;
			Z2 = B;
		}
		else if (alfa_d > 180 && alfa_d < 270) {
			Z1 = -A;
			Z2 = -B;
		}
		else if (alfa_d > 270 && alfa_d < 360) {
			Z1 = A;
			Z2 = -B;
		}
		// ����� ���������� �� �����
		cout << "Z1=" << Z1 << endl << "Z2=" << Z2 << endl;
	}
}