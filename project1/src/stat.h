/** @file
 *
 *@author Jacob R Schnoor*/

#ifndef STAT_
#define STAT_

/** @class Stat*/
class Stat
{
  private:
   /** The amount of data entered so far*/
   int N;

   /** The most recent number entered*/
   double lastNum;

   /** The total of all numbers entered so far*/
   double sum;

   /** The mean or average of all numbers entered so far*/
   double mean;

   /** The lowest value of all numbers entered so far*/
   double min;

   /** The greatest value of all numbers entered so far*/
   double max;
  public:
   /** Default Constructor*/
   Stat();

    /*Add a data point to the sequence
    *
    *@pre input is a valid double
    *
    *@post the double is introduced to the sequence, private variables
    *change accordingly
    *
    *@return if the number was successfully added*/
   bool add(double input);
   
   /*Gets the number of values
    *
    *@pre none
    *
    *@post none
    *
    *@return N, the number of values entered thus far*/   
   int getNumVals();

   /*Gets the last number entered
    *
    *@pre none
    *
    *@post none
    *
    *@return the last number entered (or 0 if the Stat is empty)*/
   double getLast();

   /*Adds all data values entered
    *
    *@pre none
    *
    *@post none
    *
    *@return the sum of adding all values*/
   double getSum();

   /*Gets the mean or average of the numerical sequence
    *
    *@pre none
    *
    *@post none
    *
    *@return the mean*/
   double getMean();

   /*Gets the smallest value that was inputted to the sequence
    *
    *@pre none
    *
    *@post none
    *
    *@return the smallest value*/
   double getMin();

   /*Gets the greatest value added to the sequence
    *
    *@pre none
    *
    *@post none
    *
    *@return the greatest value*/
   double getMax();

   /*Empties the Stat object
    *
    *@pre none
    *
    *@post everything in Stat is set to zero
    *
    *@return none*/
   void clear();
};

#endif
