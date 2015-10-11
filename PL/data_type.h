#ifndef DATA_TYPE_H
#define DATA_TYPE_H

#include<stdbool.h>
#include<string>

class Var {
private:
	float data;
	bool check_real;
public:
	Var();
	Var(float);
	Var(int);
	void operator=(Var);
	Var operator+(Var);
	Var operator-(Var);
	Var operator*(Var);
	Var operator/(Var);
	Var operator^(Var);
	Var var_sin();
	Var var_cos();
};


#endif /* !DATA_TYPE_H */