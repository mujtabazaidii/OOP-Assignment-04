/*#include<iostream>
using namespace std;
class fraction {

	int num, den;
	static int fractioncount;

public:

	fraction(int n = 1, int d = 1) {
		num = n;
		den = d;
		//fractioncount ++ ;
	}

	void set_num(int n) { num = n; }
	void set_den(int d) { den = d; }

	int get_num()const { return num; }
	int get_den()const { return den; }

	fraction operator + (const fraction& c) {

		fraction temp;
		temp.num = num * c.den + den * c.num;
		temp.den = den * c.den;

		for (int i = temp.den; i >= 2; i--) {
			if (temp.num % i == 0 && temp.den % i == 0) {
				temp.num = temp.num / i;
				temp.den = temp.den / i;
			}
		}
		return temp;

	}

	fraction operator * (const fraction& c) {

		fraction temp;
		temp.num = num * c.num;
		temp.den = den * c.den;

		for (int i = temp.den; i >= 2; i--) {
			if (temp.num % i == 0 && temp.den % i == 0) {
				temp.num = temp.num / i;
				temp.den = temp.den / i;
			}
		}

		return temp;

	}
	bool operator > (const fraction& c) {

		if (num > c.num && den < c.den) {
			return true;
		}

		else { return false; }
	}


	bool isProper()const {

		if (num > den) {
			cout << "Given Fraction Result is Proper Fraction";
			cout << endl;
			return true;
		}

		else {
			cout << "Given Fraction Result is Improper Fraction";
			cout << endl;
			return false;
		}
	}

	void show1() {
		cout << "Sum of Fraction of the Given Value : " << num;
		if (den != 1) {
			cout << " / " << den << endl;
		}
		cout << endl;
	}

	void show2() {
		cout << "Product Fraction of the Given Value : " << num;
		if (den != 1) {
			cout << " / " << den << endl;
		}
		cout << endl;
	}
	~fraction()
	{
	}

};
int main() {

	fraction f1(10, 12), f2(16, 18), f3, f4, f5;
	f3 = f1 + f2;
	f4 = f1 * f2;
	f5 = f1 > f2;
	f3.show1();
	f4.show2();
	f4.isProper();
	cout << endl << endl << endl;
	return 0;
}
*/