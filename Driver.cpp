#include"Seq.h"
#include<iostream>
#include<fstream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<cstring>
#include<ctime>
#include<time.h>
#include<sys/time.h>

using namespace std;

int main(){


	Seq object;
	Seq object2;
	Seq object3;

//Please fix the value of numM, numJ, and test1[] for different test cases.

//	numM: n(number of machines)
//	numJ: m(number of jobs)
//	test1[]: containing the values of processing time of each job.

	int numM = 3;
	int numJ = 6;
	int test1[] = {2, 3, 4, 6, 2, 2};

	int numM2 = 3;
	int numJ2 = 6;
	int test2[] = {2, 3, 14, 6, 2, 2};

	int numM3 = 15;
	int numJ3 = 4;
	int test3[] = {12, 33, 14, 6, 12, 22, 44, 3, 15, 6, 2, 5, 6, 16, 2};
	


	object.method1(3,6, test1);
	object2.method1(3,6, test2);
	object3.method1(4,15, test3);
   
	

return 0;
}
