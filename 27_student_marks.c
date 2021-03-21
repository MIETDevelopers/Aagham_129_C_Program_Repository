//Standard input and output
#include<stdio.h>

//Student strcture data type: User-Defined data type
struct Student{
	//Student structure Member variables
	int rollNumber;
	float chemistry;
	float maths;
	float physics;
	float totalMarks;
};

int main(){
	//Declare studentMarks variable of Student strcture data type
	struct Student class12thStudent;
	class12thStudent.rollNumber=10;
	class12thStudent.chemistry=9;
	class12thStudent.maths=7;
    class12thStudent.physics=10;
	class12thStudent.totalMarks=class12thStudent.chemistry+class12thStudent.maths+class12thStudent.physics;

	printf("Aagham's (with rollNumber: %d) total marks=%f",class12thStudent.rollNumber,class12thStudent.totalMarks);
    return 0;
}