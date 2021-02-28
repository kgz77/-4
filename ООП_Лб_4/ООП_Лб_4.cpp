//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class Int {
//private:
//	long long num;//число 
//public:
//	Int() :num(0) {}		       //конструктор по умолчанию num = 0
//	Int(long long num) :num(num) {}//конструктор с аргументом
//	//метод для вывода значения на экран
//	void show() { cout << "num : " << this->num << endl; }
//	//перегрузка оператора + 
//	Int operator +(const Int& R) {
//		Int result;
//		result.num = this->num + R.num;//Вычисление суммы
//		//проверка на переполнения и бросать исключение
//		if ((result.num < INT32_MIN) || (result.num > INT32_MAX))
//			throw "Ошибка! Выход за границы типа int \n ";
//		return result;
//	}
//	//перегрузка оператора -
//	Int operator -(const Int& R) {
//		Int result;
//		result.num = num - R.num;
//		if ((result.num < INT32_MIN) || (result.num > INT32_MAX))
//			throw "Ошибка! Выход за границы типа int \n ";
//		return result;
//	} 
//	//перегрузка оператора *
//	Int operator *(const Int& R) {
//		Int result;
//		result.num = num * R.num;
//		if ((result.num < INT32_MIN) || (result.num > INT32_MAX))
//			throw "Ошибка! Выход за границы типа int \n ";
//		return result;
//	}
//	//перегрузка оператора /
//	Int operator /(const Int& R) {
//		try{
//			if (R.num == 0)
//				throw "На ноль делить нельзя!";
//		}
//		catch (char* str) {
//			cout << "\n" << str << endl;
//		}
//		Int result;
//		result.num = num / R.num;
//		if ((result.num < INT32_MIN) || (result.num > INT32_MAX))
//			throw "Ошибка! Выход за границы типа int \n ";
//		return result;
//	}
//	//Перегрузка оператора ++ 
//	Int operator ++() {
//		++num;
//		return *this;
//	}
//
//	Int operator++(int) {
//		num++;
//		return *this;
//	}
//	~Int() {}
//};
//
//
//
//int main() {
//	setlocale(LC_ALL, "ru");
//	Int  C, D, E, F;
//	int x, y, m;
//	do
//	{
//		cout << "\nВведите первое число : ";
//		cin >> x;
//		cout << "Введите второе число : ";
//		cin >> y;
//		Int A(x), B(y);
//		cout << "1 - Сложение\n2 - Вычитание\n3 - Умножение\n4 - Деление\n0 - Инкремент" << endl;
//		cout << "Выберите действие : ";
//		cin >> m; 
//		try {
//			switch (m)
//			{
//			case 1: C = A + B; C.show(); cout << endl; break;
//			case 2: D = A - B; D.show(); cout << endl; break;
//			case 3: E = A * B; E.show(); cout << endl; break;
//			case 4: F = A / B; F.show(); cout << endl; break;
//			default:
//				break;
//			}
//		}
//		catch (const char* str) {
//			cout << str;
//		}
//	} while (m != 0);
//
//	cout << "Инкрементирование " << endl;
//	++C;
//	C.show();
//	cout << endl;
//
//	C++;
//	C.show();
//	cout << endl;
//
//	cout << endl;
//
//
//	system("pause");
//	return 0;
//}

//#include<iostream>
//
//using namespace std;
//
//class Fraction {
//private:
//	double chislo;
//public:
//	Fraction() :chislo(0) {}
//	Fraction(double ch) :chislo(ch) {}
//	void show() { cout << "result : " << this->chislo << endl; }
//	Fraction operator +(const Fraction& R) {
//		Fraction result;
//		result.chislo = this->chislo + R.chislo;
//		return result;
//	}
//	Fraction operator +(const double& num) {
//		Fraction result;
//		result.chislo = this->chislo + num;
//		return result;
//	}
//	Fraction operator -(const Fraction& R) {
//		Fraction result;
//		result.chislo = this->chislo - R.chislo;
//		return result;
//	}
//	Fraction operator -(const double& num) {
//		Fraction result;
//		result.chislo = this->chislo - num;
//		return result;
//	}
//	Fraction operator *(const Fraction& R) {
//		Fraction result;
//		result.chislo = this->chislo * R.chislo;
//		return result;
//	}
//	Fraction operator *(const double& num) {
//		Fraction result;
//		result.chislo = this->chislo * num;
//		return result;
//	}
//	Fraction operator /(const Fraction& R) {
//		if (R.chislo == 0)
//			throw "Ошибка! На ноль делить нельзя.";
//		Fraction result;
//		result.chislo = this->chislo / R.chislo;
//		return result;
//	}
//	Fraction operator /(const double& num) {
//		if (num == 0)
//			throw "Ошибка! На ноль делить нельзя.";
//		Fraction result;
//		result.chislo = this->chislo / num;
//		return result;
//	}
//	Fraction operator++() {
//		++chislo;
//		return *this;
//	}
//	Fraction operator++(int) {
//		chislo++;
//		return *this;
//	}
//	~Fraction() {}
//};
//
//
//
//int main() {
//	setlocale(LC_ALL, "ru");
//
//	Fraction A(5), B(5), C;
//	C = A + B + 5;
//	cout << "C = A(5) + B(5) + 5" << endl;
//	C.show();
//	cout << endl;
//	
//	C = A - B + 5;
//	cout << "C = A(5) - B(5) + 5" << endl;
//	C.show();
//	cout << endl;
//
//	C = A * B + 5;
//	cout << "C = A(5) * B(5) + 5" << endl;
//	C.show();
//	cout << endl;
//
//	C = A / B + 5;
//	cout << "C = A(5) / B(5) + 5" << endl;
//	C.show();
//	cout << endl;
//
//	try {
//		Fraction N(0);
//		cout << "C = A(5) * N(0) + 5" << endl;
//		C = A / N + 5;
//		C.show();
//	}
//	catch (const char* str) {
//		cout << str << endl;
//	}	cout << endl;
//
//
//
//
//	system("pause");
//	return 0;
//}

//#include<iostream>
//
//using namespace std;
//
//class Square {
//private:
//	double result;
//public:
//	Square() :result(1) {}
//	void showSquare() { cout << "    S = " << result << endl; }
//	double rect_area(double a) {
//		cout << "\nСторона квадрата " << endl;
//		cout << "    a = " << a << "\n";
//		result = a * a;
//		return result;
//	}
//	double rect_area(double a, double b) {
//		cout << "\nСтороны прямоугольника " << endl;
//		cout << "a = " << a << "\tb = " << b << endl;
//		result = a * b;
//		return result;
//	}
//};
//
//int main() {
//	setlocale(LC_ALL, "ru");
//
//	Square A;//объект класса
//
//	A.rect_area(10);//перегруженный метод для квадарта
//	A.showSquare();//вывод результата
//
//	A.rect_area(10, 15);//перегруженный метод для прямоугольника
//	A.showSquare();
//
//	cout << endl;
//	system("pause");
//	return 0;
//}