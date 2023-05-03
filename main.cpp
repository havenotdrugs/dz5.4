#include <iostream>

using namespace std;

class Organ {
public:
	string name;
	int age;

};

class Heart : public Organ {
public:
	bool clot;
	Heart() {
		name = "Сердце";
		cout << name << " - кровь прошла через огран." << endl;
	}
};

class Lungs : public Organ {
public:
	bool isSmoker;
	Lungs() {
		name = "Легкие";
		cout << name << " - кровь прошла через огран." << endl;
	}
};

class Reins : public Organ {
public:
	bool Cystitis;
	Reins() {
		name = "Почки";
		cout << name << " - кровь прошла через огран." << endl;
	}
};

int main() {
	setlocale(LC_ALL, "ru");
	Heart Heart;
	Lungs Lungs;
	Reins Reins;

}

