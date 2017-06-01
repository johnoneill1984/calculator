/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Calculations.h
 * Author: 151145
 *
 * Created on 19 May 2017, 11:01
 */

#ifndef CALCULATIONS_H
#define CALCULATIONS_H

#ifdef __cplusplus
extern "C" {
#endif
float multiplication(float x, float y); //returns x times y
float division (float x, float y);      //returns x divided by y
float addition (float x, float y);      //returns x plus y
float subtraction (float x, float y);   //returns x minus y
float power (float x, float p);         //returns x to the power of p
float root (float x, float r);          //returns x to the power of inverse r
void welcome ();


#ifdef __cplusplus
}
#endif

#endif /* CALCULATIONS_H */

