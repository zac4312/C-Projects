#include<stdio.h>

     int main() {
        
        int final_grade = 89.0;
        float finals; 

        float cross_check;

        float midterm;
        float HO1, HO2;
        float machine_project, course_acts;

        printf("Input\n");
    
        printf("Midterm Exam Score: "); 
        scanf("%f", &midterm);

        printf("Hands-On Exam 1 Score: "); 
        scanf("%f", &HO1);

        printf("Hands-On Exam 1 Score: "); 
        scanf("%f", &HO2);

        printf("Machine Project Score: "); 
        scanf("%f", &machine_project);

        printf("Course Activities Grade: "); 
        scanf("%f", &course_acts);
   
        int pre_check = (final_grade - (midterm * .2) - (((HO1 + HO2)/2)* .2) - (machine_project * .2) - (course_acts * .2))/.2;
        finals = (pre_check * .2 )/ .2;

        printf("You must attain a Finals Score of: %f\n", finals);

        printf("\n");

        cross_check = (midterm * .2) + (finals * .2) + (((HO1 + HO2)/2) * .2) + (machine_project * .2) + (course_acts * .2); 
        printf("Cross check: %f \n", cross_check);

        printf("Getting a Finals Score of: %f \n", finals);
        printf("Will get you a final grade of %d: %b", final_grade, final_grade == cross_check);

        return 1;
}
