/*
Name: Akhadbek Rizakulov
ID: 2010227
Date: 13.04.2021
*/

#include <iostream>
#include <iomanip>

template <typename T, int N>
class my_array{
	public:
		
		int i;
		
		my_array(int val){
			arr[N] = val;
		}
		
		void set_arrEls(int x, T value){
			arr[x] = value;
		}
		
		T getArr(int x){
			return arr[x];
		}
		
		T getMin(){
			if(arr[0] < arr[1] && arr[0] < arr[2] 
			&& arr[0] < arr[3] && arr[0] < arr[4]){
				
				return arr[0];
			
			}else if(arr[1] < arr[0] && arr[1] < arr[2] 
			&& arr[1] < arr[3] && arr[1] < arr[4]){
			
				return arr[1];
			
			}else if(arr[2] < arr[1] && arr[2] < arr[0] 
			&& arr[2] < arr[3] && arr[2] < arr[4]){
			
				return arr[2];
			
			}else if(arr[3] < arr[1] && arr[3] < arr[2] 
			&& arr[0] > arr[3] && arr[3] < arr[4]){
			
				return arr[3];
			
			}else{
			
				return arr[4];
			
			}
		}
		
		T getMax(){
			if(arr[0] > arr[1] && arr[0] > arr[2] 
			&& arr[0] > arr[3] && arr[0] > arr[4]){
			
				return arr[0];
			
			}else if(arr[0] < arr[1] && arr[1] > arr[2] 
			&& arr[1] > arr[3] && arr[1] > arr[4]){
			
				return arr[1];
			
			}else if(arr[2] > arr[1] && arr[0] < arr[2] 
			&& arr[2] > arr[3] && arr[2] > arr[4]){
			
				return arr[2];
			
			}else if(arr[3] > arr[1] && arr[3] > arr[2] 
			&& arr[0] < arr[3] && arr[3] > arr[4]){
			
				return arr[3];
			
			}else{
			
				return arr[4];
			
			}
		}
		
	private:
		
		T arr[N];
		
};

int main(){
	
	double k;
	
	my_array <double, 5> myObj(0);
	
	std::cout << "Enter elements of array:\n";
	
	for(int j = 0; j < 5; j++){
		std::cin >> k;
		myObj.set_arrEls(j, k);
	}

	std::cout << "\n" << std::setfill('-') << std::setw(35) << "\n";	
	std::cout << "\tAll elements\n";
	std::cout << std::setfill('-') << std::setw(35) << "\n\n";
	for(int i = 0; i < 5; i++){
		std::cout << myObj.getArr(i) << "\n";
	}
	
	std::cout << "\n" << std::setfill('-') << std::setw(35) << "\n";
	std::cout << "   Elements in reverse order\n";
	std::cout << std::setfill('-') << std::setw(35) << "\n\n";
	for(int i = 4; i >= 0; --i){
		std::cout << myObj.getArr(i) << "\n";
	}
	
	std::cout << "\n" << std::setfill('-') << std::setw(35) << "\n\n";
	std::cout << "Minimum element: " << myObj.getMin() << "\n\n";
	
	std::cout << std::setfill('-') << std::setw(35) << "\n\n";
	std::cout << "Maximum element: " << myObj.getMax() << "\n\n";
	std::cout << std::setfill('-') << std::setw(35) << "\n\n";
	
	system("pause");
	return 0;
}












