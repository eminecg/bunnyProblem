
// The purpose of this program is that The bunnies standing in a line, numbered 1, 2, ... ,n . The odd bunnies have the normal 2 ears,the even bunnies  have 3 ears,
// because they each have a raised foot. Recursively return the number of “ears” in the bunny each line without using loops or multiplication.

#include <stdio.h>

//Line number is prompted from the user
int  line;
// Current number of bunny ears number
int sum =0;
//Declaration of recursive method
int f(int currentLine);

int main() {

    printf("Please enter the number of lines (n=) : ");

    // Prompt from user number of line
    scanf("%d",&line);

    // Invokes the method with beginning parameter value
    f(0);

    return 0;
}

int f(int currentLine){

    // Base case of the recursive method to be equal currentLine value to number value
    if(currentLine==line){

        // Checks is temp value is zero ,odd or even to find number of ears depending on it
        // If temp is zero no bunny ears found
        if(currentLine==0){
            printf("bunnyEars%d(%d)  ->  %d \n",line,currentLine,sum);
        }

            // If currentLine is even ,3 number of ears found .Sum value increase 3 and prints current total number of bunny ears
        else if(currentLine%2==0){
            sum=sum+3;
            printf("bunnyEars%d(%d)  ->  %d \n",line,currentLine,sum);

        }

            // If currentLine is odd ,2 number of ears found .Sum value increase 2 and prints current total number of bunny ears
        else if(currentLine%2!=0){
            sum=sum+2;
            printf("bunnyEars%d(%d)  ->  %d \n",line,currentLine,sum);
        }
        return 0;

    }
    // Checks is currentLine value is zero, odd or even to find number of ears depending on it
    // Method calls by itself with new increased currentLine value after printing the current values(line number ,current line number and number of current bunny ears )

    // If temp is zero no bunny ears found
    if(currentLine==0){
        printf("bunnyEars%d(%d)  ->  %d \n",line,currentLine,sum);
        currentLine++;

        return f(currentLine);

    }
        // If currentLine is even ,3 number of ears found .Sum value increase 3 and prints current total number of bunny ears
    else if(currentLine%2==0){
        sum=sum+3;
        printf("bunnyEars%d(%d)  ->  %d \n",line,currentLine,sum);
        currentLine++;

        return f(currentLine);


    }
        // If currentLine is odd ,2 number of ears found .Sum value increase 2 and prints current total number of bunny ears
    else if(currentLine%2!=0){
        sum=sum+2;
        printf("bunnyEars%d(%d)  ->  %d \n",line,currentLine,sum);
        currentLine++;

        return f(currentLine);

    }

}