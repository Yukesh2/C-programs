#include<iostream>

int main(){
	int *p = new int[6];//p points towars the array of size 6
	int *q = new int[10];//q points towards the array of size 10
	//inputing the element 
	for(int j=0;j<6;j++){
		std::cin>>p[j];
	}
	for(int i=0;i<6;i++){//copying the value inside p to q
		q[i] = p[i];
	}
	
	delete []p;//freeing the unused space //deleting the array
	p = q ; //making the p points to q
	q = nullptr;//removing the q pointer to arrray

	for(int y=0;y<6;y++){//displaying the array
		std::cout<<p[y]<<std::endl;//with the help of p pointer
	}



	return 0;
}
