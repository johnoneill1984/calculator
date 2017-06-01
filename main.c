/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: 151145
 *
 * Created on 19 May 2017, 09:30
 */

#include <stdio.h>
#include <stdlib.h>

#include "Calculations.h"

/*
 * 
 */
int main(int argc, char** argv) {
    float number1, number2;// The two operands used for the calculation
    char operator;
    while (1){
        printf("******Welcome to John's Calculator******\n"
                
              "please enter an operand or q to quit, either(*,/,-,+,^,v) \n");
        scanf ("%c", &operator);
        if (operator =='q'){
            printf("Thanks for using my calculator, goodbye");    
            break;
        }
        if (operator =='r'){
            printf("Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Aenean commodo ligula eget dolor. Aenean massa. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Donec quam felis, ultricies nec, pellentesque eu, pretium quis, sem. Nulla consequat massa quis enim. Donec pede justo, fringilla vel, aliquet nec, vulputate eget, arcu. In enim justo, rhoncus ut, imperdiet a, venenatis vitae, justo. Nullam dictum felis eu pede mollis pretium. Integer tincidunt. Cras dapibus. Vivamus elementum semper nisi. Aenean vulputate eleifend tellus. Aenean leo ligula, porttitor eu, consequat vitae, eleifend ac, enim. Aliquam lorem ante, dapibus in, viverra quis, feugiat a, tellus. Phasellus viverra nulla ut metus varius laoreet. Quisque rutrum. Aenean imperdiet. Etiam ultricies nisi vel augue. Curabitur ullamcorper ultricies nisi. Nam eget dui. Etiam rhoncus. Maecenas tempus, tellus eget condimentum rhoncus, sem quam semper libero, sit amet adipiscing sem neque sed ipsum. Nam quam nunc, blandit vel, luctus pulvinar, hendrerit id, lorem. Maecenas nec odio et ante tincidunt tempus. Donec vitae sapien ut libero venenatis faucibus. Nullam quis ante. Etiam sit amet orci eget eros faucibus tincidunt. Duis leo. Sed fringilla mauris sit amet nibh. Donec sodales sagittis magna. Sed consequat, leo eget bibendum sodales, augue velit cursus nunc, ");    
            break;
        }
        printf("Please enter 2 numbers \n");
        scanf("%f %f", &number1, &number2);
    
        switch(operator)
        {
            case '*': printf("%f * %f = %f\n", number1, number2, multiplication(number1, number2) ); break;
            case '/': printf("%f / %f = %f\n", number1, number2, division(number1, number2)); break;
            case '-': printf("%f - %f = %f\n", number1, number2, subtraction (number1, number2)); break;
            case '+': printf("%f + %f = %f\n", number1, number2, addition (number1, number2)); break;
            case '^': printf("%f ^ %f = %f\n", number1, number2, power(number1, number2)); break;
            case 'v': printf("%f v %f = %f\n", number1, number2, root(number1, number2)); break;
            default: printf("Sorry %c is not a valid operand\n", operator); 
        }
        fflush(stdin);
    }
    
    
    return (EXIT_SUCCESS);
}

