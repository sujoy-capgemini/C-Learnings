// #include <stdio.h>
// #include <string.h>

// //Define a strature:
// typedef struct Student{
//     char name[50];
//     int roll;
//     float marks;
// }Student;


// int main() {
//     Student s1;
//     strcpy(s1.name,"Sujoy");
//     s1.roll=1222;
//     s1.marks=13.3;
    
//     printf("My name is : %s",s1.name);
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     //Code
//     int x=10;
//     int *ptr=&x;
//     printf(" x address :%d\n",ptr);

//     int **ptr2=&ptr; //double pointer :
//     printf("ptr2  address :%d\n",ptr2);

//     return 0;
// }





#include <stdio.h>

typedef struct Calculator{
    int x;
    int y;
}Calculator;

int add(Calculator *nums){
    int x=nums->x;
    int y=nums->y;
    return x+y;
}
int main() {
    //Code
    Calculator nums;
    printf("Enter 1st Number :");
    scanf("%d",&nums.x);
    printf("Enter 2nd Number :");
    scanf("%d",&nums.y);
    printf("Addision : %d\n",add(&nums));
    return 0;
}