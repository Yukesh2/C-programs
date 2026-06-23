#include<iostream>
#include<string>
 

class copy{
	private:
		std::string s;
		int i =0 ;

	public:
		void hello(){
			std::cin>>s;
			char a[10];
			//pointitng towards the first element 
			const char  *ptr = s.c_str();
			while(*ptr != '\0'){
				a[i] = *ptr;
				i++;
				ptr++;

				
			}
			a[i] = '\0'; 
			for(int j=0;j<10;j++){
				std::cout<<a[j]<<std::endl;
			}

		}
};

int main(){
	copy done;
	done.hello();
	return 0;
}
