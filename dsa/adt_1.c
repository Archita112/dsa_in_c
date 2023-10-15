//program using normal functions

// #include<stdio.h>
// #include<stdlib.h>
// #define INT_MAX 100

// //creating the adt
// struct Natural_num{
//     int x, y;
//     // bool true, false;
// };

// int Nat_noZero(int x, int y){
//     if (x == 0 && y == 0)
//     {
//         return 0;
//     }
//     else{
//         printf("None of the numbers is zero");
//     }
//     return 0;
// }

// // bool BooleanIs_Zero(x){
// //     if (x == 0)
// //     {
// //         return false;
// //     }
// //     else{
// //         return true;
// //     }
// //     return true;
// // }

// int nat_noAdd(int x, int y){
//     if(x+y < INT_MAX){
//         return x+y;
//     }
//     else{
//         return INT_MAX;
//     }
//     return 0;
// }

// // bool Boolean_equal(x, y){
// //     if (x == y)
// //     {
// //         return true;
// //     }
// //     else{
// //         return false;
// //     }
// //     return true;
// // }

// int nat_noSuccesor(int x){
//     if (x == INT_MAX)
//     {
//         return x;
//     }
//     else{
//         return x+1;
//     }
//     return 1;
// }

// int nat_noSubtract(int x, int y){
//     if (x < y)
//     {
//         return 0;
//     }
//     else{
//         return x - y;
//     }
//     return -1;
// }

// int main(){
//     int zero_check = Nat_noZero(0, 2);
//     printf("\nFound out if any number is zero or not.\n");

//     int add_result = nat_noAdd(5, 4);
//     printf("\nAdd result: %d\n", add_result);

//     int sub_result = nat_noSubtract(6, 5);
//     printf("\nSubs result: %d\n", sub_result);

//     int next_successor = nat_noSuccesor(4);
//     printf("\nNext successor is %d\n", next_successor);

//     printf("Program executed successfully!\n");
// }

// program written using abstract data type
#include <stdio.h>
#define INT_MAX 100

// Define the abstract data type
struct Natural_num {
    int x, y;
    int initial_value_of_x, initial_value_of_y;
    int new_value_of_x, new_value_of_y;
};

// Function to initialize the ADT
void initialize(struct Natural_num *Natm, int initial_value_of_x, int initial_value_of_y) {
    Natm->x = initial_value_of_x;
    Natm->y = initial_value_of_y;
}

// Function to get the value from the ADT
int get_value1(struct Natural_num *Natm) {
    return Natm->x;
}

int get_value2(struct Natural_num *Natm) {
    return Natm->y;
}

// Function to set a new value for the ADT
void set_value1(struct Natural_num *Natm, int new_value_of_x) {
    Natm->x = new_value_of_x;
}

void set_value2(struct Natural_num *Natm, int new_value_of_y) {
    Natm->y = new_value_of_y;
}

void num_add(struct Natural_num *Natm, int initial_value_of_x, int initial_value_of_y){
    printf("the sum of old values of x and y is %d\n", initial_value_of_x+initial_value_of_y);
}

void num_add1(struct Natural_num *Natm, int new_value_of_x, int new_value_of_y){
    printf("the sum of old values of x and y is %d\n", new_value_of_x+new_value_of_y);
}
//alternative option

// int add(struct AbstractDataType *adt) {
//     return adt->variable1 + adt->variable2;
// }

// // Function to subtract the second variable from the first
// int subtract(struct AbstractDataType *adt) {
//     return adt->variable1 - adt->variable2;
// }

int my_successor(struct Natural_num *Natm, int initial_value_of_x){
    if (initial_value_of_x == INT_MAX)
    {
        return initial_value_of_x;
    }
    else{
        printf("The successor of x is %d\n", initial_value_of_x+1);
    }
}

int my_predessor(struct Natural_num *Natm, int initial_value_of_x){
    if (initial_value_of_x == INT_MAX)
    {
        printf("predessor is %d", initial_value_of_x);
        return initial_value_of_x;
    }
    else{
        printf("The predessor of x is %d\n", initial_value_of_x-1);
    }
}

int multiply(struct Natural_num *Natm, int new_value_of_x, int new_value_of_y){
    return new_value_of_x*new_value_of_y;
}

int divide(struct Natural_num *Natm, int new_value_of_x, int new_value_of_y){
    return new_value_of_x/new_value_of_y;
}

int main() {
    struct Natural_num my_variable;

    initialize(&my_variable, 5, 8);

    // for sum of natural nums
    num_add(&my_variable, 5, 8);
    num_add1(&my_variable, 15, 20);

    //for multiplication of x and y
    multiply(&my_variable, 2, 3);
    printf("The multiplication of x and y is %d\n", multiply(&my_variable, 2, 3));

    //for division of x and y
    divide(&my_variable, 3, 3);    
    printf("The division of x and y is %d\n", divide(&my_variable, 3, 3));

    //for successor of one number
    my_successor(&my_variable, 99);

    //for predessor of one number
    my_predessor(&my_variable, 101);

    // Get the value from the ADT
    // printf("Value of variable1: %d\n", get_value1(&my_variable));
    // printf("Value of variable2: %d\n", get_value2(&my_variable));

    // Set a new value for the ADT
    // set_value1(&my_variable, 15);
    // set_value2(&my_variable, 20);

    // Get the updated value from the ADT
    // printf("Updated value of variable1: %d\n", get_value1(&my_variable));
    // printf("Updated value of variable2: %d\n", get_value2(&my_variable));

    return 0;
}