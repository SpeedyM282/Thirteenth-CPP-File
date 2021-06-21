/*
Name: Akhadbek Rizakulov
ID: 2010227
Date: 13.04.2021
*/

#include <iostream>
#include <iomanip>
template <typename T, typename P>
class Pair{
	public:
		
		void set_Var1(T var1){
			this->var1 = var1;
		}
		
		T get_Var1(){
			return var1;
		}
		
		void set_Var2(P var2){
			this->var2 = var2;
		}
		
		P get_Var2(){
			return var2;
		}
		
		void swap_vars(){
			T rar = var1;
			var1 = var2;
			var2 = rar;
			std::cout << "Variable 1 = " << var1 << "\n";
			std::cout << "Variable 2 = " << var2 << "\n";
		}
		
	private:
		T var1; 
		P var2;
};

int main(){
	int par1, par2;
//	double dar1, dar2;
//	char car1, car2;
	
	Pair <int, int> myObj;
//	Pair <double, double> myObj;
//	Pair <char, char> myObj;
	
	std::cout << std::setfill('-') << std::setw(35) << "\n";
	std::cout << "\tEnter values\n";
	std::cout << std::setfill('-') << std::setw(35) << "\n\n";
	
	std::cout << "Enter variable 1: ";
	std::cin >> par1;
	std::cout << "Enter variable 2: ";
	std::cin >> par2;
	
	myObj.set_Var1(par1);
	myObj.set_Var2(par2);
	
	std::cout << "\n" << std::setfill('-') << std::setw(35) << "\n";
	std::cout << "\t  Values\n";
	std::cout << std::setfill('-') << std::setw(35) << "\n\n";
	
	std::cout << "Variable 1: " << myObj.get_Var1() << "\n";
	std::cout << "Variable 2: " << myObj.get_Var2() << "\n";
	
	std::cout << "\n" << std::setfill('-') << std::setw(35) << "\n";
	std::cout << "\tSwaped values\n";
	std::cout << std::setfill('-') << std::setw(35) << "\n\n";
	
	myObj.swap_vars();
	std::cout << "\n";
	
	system("pause");
	return 0;
}









