/*Author:Bruce Steven L. Alvero
Section:AB-5L*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void numberDelimited(int number,char delimiter,int jumps);
void numToWords(int number);

void numToWords(int number){
	 int length=0,copy=0,i,type=0,tens=0;
     int *arr;
	 if(number<0||number>1000000){
      	printf("Input must be between 0 and 1000000. Inclusive of 0 and 1000000.Try Again\n");
      	exit(0);
      }

   else{

      //loop to count the number of digits of the input
   	  copy=number;
      while(copy!=0){
      	copy/=10;
      	length++;
      }

     //allocate memory for arrays
      arr=(int *)malloc(length*sizeof(int));
  
      //store input in array
      for(i=length-1;i>=0;i--){
         copy=number;
         number/=10;
         copy%=10;//get digit
         arr[i]=copy;
      }
      
      if(length==7){
      	//millions
      	type=7;
       }
       else if(length==6){
       	//hundred thousands
       	type=6;
       }
       else if(length==5){
       	//ten thousands
       	type=5;
       }
       else if(length==4){
       	//thousands
       	type=4;
       }
       else if(length==3){
       	//hundreds
       	type=3;
       }
       else if(length==2){
       	//tens
       	type=2;
       }
       else{
       	//ones
       	type=1;
       }
  
       //loop that prints the appropriate word based on the given number and position
    for(i=0;i<length&&type>0;i++,type--){
        if(type==7){
           	if(arr[i]==1)
               printf("one million");
           	else if(arr[i]==2)
              printf("two million");
            else if(arr[i]==3)
              printf("three million");
            else if(arr[i]==4)
              printf("four million");
            else if(arr[i]==5)
              printf("five million");
            else if(arr[i]==6)
              printf("six million");
            else if(arr[i]==7)
              printf("seven million");
            else if(arr[i]==8)
              printf("eight million");
            else if(arr[i]==9)
              printf("nine million");
           	
          }

        else if(type==6&&arr[i]!=0){
           	if(arr[i]==1)
               printf(" one hundred");
           	else if(arr[i]==2)
              printf(" two hundred");
            else if(arr[i]==3)
              printf(" three hundred");
            else if(arr[i]==4)
              printf(" four hundred");
            else if(arr[i]==5)
              printf(" five hundred");
            else if(arr[i]==6)
              printf(" six hundred");
            else if(arr[i]==7)
              printf(" seven hundred");
            else if(arr[i]==8)
              printf(" eight hundred");
            else if(arr[i]==9)
              printf(" nine hundred");
           	
         }

        else if(type==5&&arr[i]!=0){
           	if(arr[i]==1){
               tens=1;//for 10,000-19000
               if(arr[i+1]==0)
               printf(" ten");
            }
           	else if(arr[i]==2)
              printf(" twenty");
            else if(arr[i]==3)
              printf(" thirty");
            else if(arr[i]==4)
              printf(" forty");
            else if(arr[i]==5)
              printf(" fifty");
            else if(arr[i]==6)
              printf(" sixty");
            else if(arr[i]==7)
              printf(" seventy");
            else if(arr[i]==8)
              printf(" eighty");
            else if(arr[i]==9)
              printf(" ninety");
           	
         }

       else if(type==4){
       	if((arr[i]==0&&arr[i-1]==0)&&arr[i-2]==0)
       	continue;
        else if(arr[i]==0)
        	printf(" thousand");
        else{
         if(tens!=1){
           	if(arr[i]==1)
              printf(" one thousand");
           	else if(arr[i]==2)
              printf(" two thousand");
            else if(arr[i]==3)
              printf(" three thousand");
            else if(arr[i]==4)
              printf(" four thousand");
            else if(arr[i]==5)
              printf(" five thousand");
            else if(arr[i]==6)
              printf(" six thousand");
            else if(arr[i]==7)
              printf(" seven thousand");
            else if(arr[i]==8)
              printf(" eight thousand");
            else if(arr[i]==9)
              printf(" nine thousand");
           }
          else{
          	if(arr[i]==1)
              printf(" eleven thousand");
           	else if(arr[i]==2)
              printf(" twelve thousand");
            else if(arr[i]==3)
              printf(" thirteen thousand");
            else if(arr[i]==4)
              printf(" fourteen thousand");
            else if(arr[i]==5)
              printf(" fifteen thousand");
            else if(arr[i]==6)
              printf(" sixteen thousand");
            else if(arr[i]==7)
              printf(" seventeen thousand");
            else if(arr[i]==8)
              printf(" eighteen thousand");
            else if(arr[i]==9)
              printf(" nineteen thousand");

            tens=0;
          }
        }
      }
       
      else if(type==3&&arr[i]!=0){
          if(arr[i]==1)
              printf(" one hundred");
           	else if(arr[i]==2)
              printf(" two hundred");
            else if(arr[i]==3)
              printf(" three hundred");
            else if(arr[i]==4)
              printf(" four hundred");
            else if(arr[i]==5)
              printf(" five hundred");
            else if(arr[i]==6)
              printf(" six hundred");
            else if(arr[i]==7)
              printf(" seven hundred");
            else if(arr[i]==8)
              printf(" eight hundred");
            else if(arr[i]==9)
              printf(" nine hundred");
       }

     else if(type==2&&arr[i]!=0){
           	if(arr[i]==1){
               tens=1;//for numbers 10-19
               if(arr[i+1]==0)
               	printf(" ten");
             }
           	else if(arr[i]==2)
              printf(" twenty");
            else if(arr[i]==3)
              printf(" thirty");
            else if(arr[i]==4)
              printf(" forty");
            else if(arr[i]==5)
              printf(" fifty");
            else if(arr[i]==6)
              printf(" sixty");
            else if(arr[i]==7)
              printf(" seventy");
            else if(arr[i]==8)
              printf(" eighty");
            else if(arr[i]==9)
              printf(" ninety");
           	
        }
     else{
     	if((arr[i]==0&&arr[i-1]==0)&&arr[i-2]==0)
       	continue;
        else if(arr[i]==0)
        continue;
        else{
         if(tens!=1){
           	if(arr[i]==1)
              printf(" one");
           	else if(arr[i]==2)
              printf(" two");
            else if(arr[i]==3)
              printf(" three");
            else if(arr[i]==4)
              printf(" four");
            else if(arr[i]==5)
              printf(" five");
            else if(arr[i]==6)
              printf(" six");
            else if(arr[i]==7)
              printf(" seven");
            else if(arr[i]==8)
              printf(" eight");
            else if(arr[i]==9)
              printf(" nine");
           }

          else{  
            if(arr[i]==1)
              printf("eleven");
           	else if(arr[i]==2)
              printf(" twelve");
            else if(arr[i]==3)
              printf(" thirteen");
            else if(arr[i]==4)
              printf(" fourteen");
            else if(arr[i]==5)
              printf(" fifteen");
            else if(arr[i]==6)
              printf(" sixteen");
            else if(arr[i]==7)
              printf(" seventeen");
            else if(arr[i]==8)
              printf(" eighteen");
            else if(arr[i]==9)
              printf(" nineteen");

            tens=0;
          }
        }
      }     
    }
  }
   	free(arr); 
}
  



void numberDelimited(int number,char delimeter,int jumps){
      int length=0,copy=0,i,count,position,found=0;
      int *output;

      //exit if input is negative or greater than 1000000
   if(number<0||number>1000000){
      	printf("Input must be between 0 and 1000000. Inclusive of 0 and 1000000.Try Again\n");
      	exit(0);
      }

   else{

      //loop to count the number of digits of the input
   	  copy=number;
      while(copy!=0){
      	copy/=10;
      	length++;
      }
 

      //allocate space for array to store the output
      output=(int *)malloc(length*sizeof(int));

      //reinitialize temporary copy
      copy=0;
      //store each digit in the array
      for(i=length-1,count=1;i>=0;i--,count++){

         if(count==jumps&&found==0){
         	position=i;//get delimeter position
         	found=1;//delimiter position found
         	i++;
         	continue;
         }

         else{
         copy=number;
         number/=10;
         copy%=10;//get digit
         output[i]=copy;
         }
       }

      found=0;
      //print output 
      for(i=0;i<length;i++){

          if(i==position&&found==0)//delimiter position found
          {
         	printf("%c",delimeter);
         	found=1;
            i--;
         	continue;
           }
  
          else
      	  printf("%d",output[i]);
      } 

      	free(output);    
    }
}  