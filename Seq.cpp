#include"Seq.h"


Seq::Seq(){
	
}
Seq::~Seq(){
}

//	m: number of the machine
//	n: number of the jobs
//	T[]: containing the processing time of each job

int Seq::method1(int m, int n, int *T){

	sort(T, n);

	int *machine;
	machine = new int[m];

//	counter: record the job with corresponding machine
	int counter[n][2];
	
	
	for(int i = 0; i < m; i++){
		machine[i] = T[i];
		counter[i][0] = T[i];
		counter[i][1] = i+1;
	}

	int min = machine[m -1];

	for(int i = m; i < n; i++ ){
		
		min = update(min, m, machine);
		
		if(machine[i - m] == min){

			machine[i-m] = machine[i - m] + T[i];
		//cout<<"machine_new"<< i-m <<","<< machine[i-m]<<endl;
			counter[i][0] = T[i];
			counter[i][1] = i-m+1;
		}

		min = min + T[i];

		
	}
//Printing the result

	int makespan = machine[0];
	for(int i=0; i<m; i++){
		if(makespan<machine[i]){
			makespan = machine[i];
		}
	}

	cout<< "The makespan is: "<< makespan<<endl;
	for(int i=0; i<n; i++){
		cout<<"t="<<counter[i][0]<<" is in machine: "<<counter[i][1]<<endl;
	}
	
	for(int i=0; i<m; i++){
		cout<<"machine: "<< i+1 <<" load time is: "<< machine[i]<<endl;
	}


}

//sorting t1,t2---tm
void Seq:: sort(int arr[], int length){
	
	int i, j, tmp;
	for(i=1; i<length; i++){
  		j=i;
  		while(j>0 && arr[j-1]>arr[j]){
   			tmp = arr[j];
   			arr[j] = arr[j-1];
   			arr[j-1] = tmp;
   			j--;
   		}
	}

}

//update min when adding each new t into A[]
int Seq:: update(int min, int m, int arr2[]){
	for(int i = 0; i< m; i++){

		if( arr2[i] < min){
			min = arr2[i];

			
		}
	}


	return min;

}

