#include<iostream>
#include<string>

//lenght function 

class check{
	private:
		std::string  s;
		
		
	public:
		void length(){

			
			std::cin>>s;

			 
			 
			//save the starting address first

			const char  *start = s.c_str();
			const char *end = s.c_str();

			//loop to check for the white space 

			while(*end != '\0'){
				end++;
			}
			int length = end - start;
			std::cout<<length<<std::endl;



}
};



//main function 
int main(){
	check strl;
	strl.length();
		
	return 0;
}


