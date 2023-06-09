/*
 * LightingSys.h
 *
 *  Created on: Feb 28, 2023
 *      Author: Alaa Ashraf
 */

/*******************************************************************************************************/
/*                               guard of file will call on time in .c		                           */       
/*******************************************************************************************************/
#ifndef LightingSys_
#define LightingSys_

/***********************************************************************************************/
/*************************************BAD FACE Frame********************************************/
/**************************************Configure Rows*******************************************/
/***********************************************************************************************/


/***********************************************************************************************/
/*************************************Up Arrow Frame********************************************/
/**************************************Configure Rows*******************************************/
/***********************************************************************************************/
#define R_Up0    0b00001000
#define R_Up1    0b00001100
#define R_Up2    0b00001110
#define R_Up3    0b11111111
#define R_Up4    0b11111111
#define R_Up5    0b00001110
#define R_Up6    0b00001100
#define R_Up7    0b00001000


#define col_Up 0b11111111



/***********************************************************************************************/
/*************************************Stop Sign Frame********************************************/
/**************************************Configure Rows*******************************************/
/***********************************************************************************************/
#define R_Stop0    0b00111100
#define R_Stop1    0b01111110
#define R_Stop2    0b11111111
#define R_Stop3    0b11111111
#define R_Stop4    0b11111111
#define R_Stop5    0b11111111
#define R_Stop6    0b01111110
#define R_Stop7    0b00111100


#define col_Stop 0b11111111


/***********************************************************************************************/
/*************************************Stop Sign Frame********************************************/
/**************************************Configure Rows*******************************************/
/***********************************************************************************************/
#define R_Daccel0    0b00100000
#define R_Daccel1    0b00110000
#define R_Daccel2    0b00111000
#define R_Daccel3    0b00111100
#define R_Daccel4    0b00111100
#define R_Daccel5    0b00111000
#define R_Daccel6    0b00110000
#define R_Daccel7    0b00100000


#define col_Daccel 0b11111111



void LIGHTING_SYS_ACCELERATE(void);
void LIGHTING_SYS_DACCELERATE(void);
void LIGHTING_SYS_STOP(void);

 #endif /* LightingSys_ */
