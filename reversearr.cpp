#include<iostream>

int main(){
	
	int **doptr; //this is double pointer

	doptr = new int*[1];//this will create a arr of size 1
	doptr[0] = new int[5];

	//taking the input form the user 
	
	for(int i=0;i<1;i++){
		for(int j=0;j<5;j++){
			std::cin>>doptr[i][j];

			
		}


	}


	//reversing the array 
	for(int a=0;a<1;a++){
		for(int h=4;h>=0;h--){
			std::cout<<doptr[a][h]<<std::endl;
		}
	}


	return 0;
}
