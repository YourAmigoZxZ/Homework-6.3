#include "Fraction_1.h"

int main()
{
	setlocale(LC_ALL, "rus");

	Fraction fract;
	Fraction fract_2;
	int num, den, num_2, den_2, user_choice;
	enum Menu {EXIT = 0, INITIALIZATION, PRINT, SUM, DIFFERENCE, MULTIPLICATION, DIVISION};

	do
	{
		system("cls");
		cout << "\n1.������ ��������� � ����������� ��� ������\n2.������� ����� �� �����\n3.����� ������\n4.�������� ������\n5.������������ ������\n6.������� ������\n0.�����\n";
		cin >> user_choice;

		switch (user_choice)
		{
		case INITIALIZATION:
			system("cls");
			cout << "������� ��������� � ����������� ��� ������ �����: ";
			cin >> num >> den;

			fract.set_num(num);
			fract.set_den(den);

			cout << "������� ��������� � ����������� ��� ������ �����: ";
			cin >> num_2 >> den_2;

			fract_2.set_num(num_2);
			fract_2.set_den(den_2);
			break;
		case PRINT:
			printf("������ ����� - %d/%d\n", fract.get_num(), fract.get_den());
			printf("������ ����� - %d/%d\n", fract_2.get_num(), fract_2.get_den());
			system("pause");
			break;
		case SUM:
			cout << fract + fract_2 << '\n';
			system("pause");
			break;
		case DIFFERENCE:
			cout << fract - fract_2 << '\n';
			system("pause");
			break;
		case MULTIPLICATION:
			cout << fract * fract_2 << '\n';
			system("pause");
			break;
		case DIVISION:
			cout << fract / fract_2 << '\n';
			system("pause");
			break;
		case EXIT:
			break;
		}
	} while (user_choice != 0);

	return 0;
}