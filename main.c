/******************************************************************************

                            Online C Compiler.
                Code, Cπompile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#define RESPONSES_SIZE 40
#define FREQUENCY_SIZE 11
#define SIZE 5
#include <stdio.h>
#include <math.h>
void Lesson_1(){
    int studentId= 15;
    int studentAge= 20;
    float studentFee = 13.5;
    char studentGrade = 'b';
    
    printf("student Id : %i\n",studentId);
    printf("studentAge : %i\n",studentAge);
    printf("studentFee : %f\n",studentFee);
    printf("studentGrade : %i\n",studentGrade);
    


    int length = 4;
    int width = 6;
    int area ;
    area = length * width;
    printf("area of this field = %i",area);
}

void example(){
    int frequency[FREQUENCY_SIZE] = {0};
    int responses[RESPONSES_SIZE] = {
        1,2,3,4,5,6,7,8,9,10, 1,2,3,4,5,4,7,8,9,10, 1,2,4,10,5,6,7,8,3,10, 1,1,1,4,1,1,1,8,9,10
    };
    for (size_t answer = 0; answer < RESPONSES_SIZE;++answer){
        ++frequency[responses[answer]];
    }
    
    for(int i =0 ; i< 11;i++){
        printf("%d\n",frequency[i]);
    }
}
void examle2(){
     int n[SIZE] = {19,3,13,7,11};
    printf("%s%13s%17s\n","Element","Value","histogram");
    for(int i = 0; i < 5; i++){
        printf("%d           %d       ", i ,n[i]);
        for(int j = 0;j < n[i];j++ ){
            printf("*");
        }
        puts("");
    }
}
void Lesson_2(){
    char myText[] = "cenk kıran";
    printf("%s\n",myText);
    int number2= 100;
    printf("%i\n",number2);
    float number3 = 5.75;
    printf("%f\n",number3);
    double number4 = 5.66E6;
    printf("%lf\n",number4); 
}
void Lesson_3(){
    float myFloatNum = 3.5;
    double myDoubleNum = 19.9999;
    
    
    printf("%.4lf\n",myDoubleNum);
     printf("%.1lf\n",myDoubleNum);
      printf("%.2lf\n",myDoubleNum);
      
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    printf("%lu\n", sizeof(myInt));
    printf("%lu\n", sizeof(myFloat));
    printf("%lu\n", sizeof(myDouble));
    printf("%lu\n", sizeof(myChar));
}
void Lesson_6(){
    unsigned int passes =0;
    unsigned int failer = 0;
    unsigned int student =1;
    
    int result ;
    
    while(student <= 10){
        
        printf("please enter the number(1 passes,2 failere)\n");
        scanf("%d",&result);
        if(result == 1){
            passes++;
        }
        else{
            failer++;
        }
        student++;
    }
    
    printf("passes student number is %i, failere stundent number is %i",passes,failer);

}
void Lesson_4(){
    int items= 50;
    float cost_per_item = 9.99;
    float total_cost = items * cost_per_item;
    char currency = '$';
    
    printf("number of items : %d\n",items);
    printf("cost per items : %.2f\n",cost_per_item);
    printf("total price : %.2f%c\n",total_cost,currency);
    
}
void Lesson_5(){
    int x =5;
    int y = 2;
    float sum1 = 5./2;
    float sum = (float)5/2;
    printf("%f",sum);
}
void week_1_question_1_1(){
    int number1 = 20;
   printf("%i",number1/2);
}

void week_1_question_1_2(){
   int number[3];
    for(int i = 0; i<3;i++){
        scanf("%i",&number[i]);
    }
    for(int i = 0; i<3;i++){
        int yüzdelik = number[i] / 100;
        int ondalik = (number[i] / 10) - yüzdelik*10;
        int kalan = number[i] % 10;
        printf("this number has %i x 100 and %i x 10 and %i x 1 .the result is %i\n",yüzdelik,ondalik,kalan,number[i]);
    }
}
void week_1_question_1_3(){
    float exteriorAngle;
    int sides;

    printf("Enterangle of the polygon =>  ");
    scanf("%f", &exteriorAngle);

    if (exteriorAngle > 0 && exteriorAngle < 360) {
        sides = 360 / exteriorAngle;
        printf("The number of sides  is: %d\n", sides);
    } else {
        printf("Invalid angle.\n");
    }

}
void week_1_question_1_4(){
    float costPrice, priceWith8KDV, priceWith18KDV;

    printf("Enter the cost value of the product=> ");
    scanf("%f", &costPrice);

    priceWith8KDV = costPrice * 1.08;
    priceWith18KDV = costPrice * 1.18;

    printf("Price with 8%% KDV: %.2f\n", priceWith8KDV);
    printf("Price with 18%% KDV: %.2f\n", priceWith18KDV);

}
void week_1_question_1_5(){
    float midterm1, final1, midterm2, final2, average1, average2, overallAverage;

    printf("Enter midterm and final grades for Course 1: ");
    scanf("%f %f", &midterm1, &final1);

    printf("Enter midterm and final grades for Course 2: ");
    scanf("%f %f", &midterm2, &final2);

    average1 = (midterm1 * 0.4) + (final1 * 0.6);
    average2 = (midterm2 * 0.4) + (final2 * 0.6);
    overallAverage = (average1 + average2) / 2;

    printf("Average  Course 1: %.2f\n", average1);
    printf("Average  Course 2: %.2f\n", average2);
    printf("Overall average: %.2f\n", overallAverage);
}
void week_1_question_1_6(){
    float radius, perimeter, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    perimeter = 2 * PI * radius;
    area = 3.14 * radius * radius;

    printf("Perimeter of the circle: %.2f\n", perimeter);
    printf("Area of the circle: %.2f\n", area);
}
void week_1_question_1_7(){
    float num1, num2, arithmeticMean, geometricMean;

    printf("Enter  numbers: ");
    scanf("%f %f", &num1, &num2);

    arithmeticMean = (num1 + num2) / 2;
    geometricMean = sqrt(num1 * num2);

    printf("Arithmetic mean (rounded): %d\n", (int)round(arithmeticMean));
    printf("Geometric mean (rounded): %d\n", (int)round(geometricMean));
}
void week_2_question_2_1(){
    int numbers[3];
    for(int i =0;i<3;i++){
        printf("enter %i. number : ",i + 1);

        scanf("%d",&numbers[i]);
        if(number[i] < 0){
            printf("please enter positive number\n");
            i -= 1;
        }
    }
    
    if(!(numbers[0] < (numbers[1] + numbers[2]) && numbers[0] > abs(numbers[1] - numbers[2]))){// to use abs functions add  <stdlib.h>     
    
        printf("this is not a triangle");
    }
    else if(numbers[0]==numbers[1] && numbers[2]==numbers[1]){
        printf("this triangle is equilateral");
    }
    else if(numbers[0]!=numbers[1] && numbers[2]!=numbers[1] && numbers[2] !=  numbers[0]){
        printf("this triangle is diverse");
    }
    else{
        printf("this triangle is isosceles");
    }
}
void  week_2_question_2_2(){
    //ax^2 + bx +c , delta = b^2 -4ac 
    int roots[3];//roots[0] = a ,roots[1] = b,roots[2] = c 
    for(int i =0 ; i<3;i++){
        printf("please enter the term that equation has %i. : ",i + 1);
        scanf("%d",&roots[i]);
    }
    
    int delta = roots[1]*roots[1] - 4*roots[0]*roots[2];
    if(delta < 0){
        printf("there is no roots in reel numbers\n");
    }
    else{
        float firstRoot = (-(roots[1]) - (float)sqrt(delta))/2*roots[0];
        float secondRoot = (-(roots[1]) - (float)sqrt(delta))/2*roots[0];
    
        printf("firstRoot  = %f\n",firstRoot);
        printf("secondRoot  = %f",firstRoot);
    }
}
void week_2_question_2_3(){
     int year;
    printf("enter a year ");
    scanf("%d",&year);
    if(year % 4 == 0){
        printf("this year is a leap year");
    }
    else{
        printf("this year is not a leap year");
    }
}
void week_2_question_2_4(){
    int sizeOfArray;
   printf("please enter the size of array: ");
   scanf("%i",&sizeOfArray);
   int numbers[sizeOfArray];
   for(int i =0 ; i<sizeOfArray;i++){
        printf("please enter number %i. : ",i + 1);
        scanf("%d",&numbers[i]);
   }
  
   for(int i = 1;i <sizeOfArray;i++){//big o Notation N^2
       for(int i = 1 ; i<sizeOfArray ;i++){
            int temp = numbers[i];// 3,2,1
            if(numbers[i- 1] >numbers[i]){   
                numbers[i] = numbers[i- 1];
                numbers[i- 1] = temp;
            }
       }
   }
    
    for(int i = 0;i<sizeOfArray;i++){
        printf("%i,",numbers[i]);
        }
}
void week_2_question_2_5(){
    float priceProduct1;
    float priceProduct2;
    scanf("%f",&priceProduct1);
    scanf("%f",&priceProduct2);
    float total = 0 ;
    
    if(priceProduct1 + priceProduct2 >200){
        if(priceProduct1<priceProduct2){
            total += priceProduct1*0.75 + priceProduct2;
        }
        else{
            total += priceProduct1 + priceProduct2*0.75;
        }
    }
    else{
        total += priceProduct2 + priceProduct1;
    }
    printf("%f",total);
}
void week_2_question_2_6(){
    // fonksiyon kullandım recusive son number i almak için
    int FindTheDigit(int number){
    if((number / 10) >=  1){
        return 1 + FindTheDigit(number / 10);
       }
    else{
        return 1;
    }
    
    }

int enteredNumber;
    
    scanf("%d",&enteredNumber);
   
   printf("%d",FindTheDigit(enteredNumber));
}
void week_2_question_2_7(){
    int number;
    scanf("%d",&number);
    int thousands = number / 1000;      
    int hundreds = (number / 100) % 10; 
    int tens = (number / 10) % 10;      
    int ones = number % 10;
    printf("%d\n", thousands);
    printf("%d\n", hundreds);
    printf("%d\n", tens);
    printf("%d\n", ones);
}
void week_3_question_3_2(){
    int sum = 0 ;
   int number_1;
   int number_2;
   
   scanf("%d %d",&number_1,&number_2);
   
   for(int i = number_1;i <= number_2 ; i++){
       sum += i;
   }
   printf("%d",sum);
}
void week_3_question_3_4(){
int number1;
   int number2;
   int bool = 1;
   while(bool){
    printf("enter two number :");
   scanf("%d %d",&number1,&number2);
   if(number1 > 0 && number2 >0){
       bool = 0;
   }
   }
   
   printf("combination of 2 entered positive numbers is %d",FindFactori(number1)/(FindFactori(number1-number2)*FindFactori(number2)));
   
   
    
}
int FindFactori(int number){
    if(number == 1){
        return 1;
    }
    return number * FindFactori(number-1);
}
void week_3_question_3_5(){
int firstNumber = 0;
   int secondNumber = 1;
   int variableNumber =0;
   
   for(int i = 0 ; i<=11;i++){//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89
   
       printf("%i. eleman %d \n",i,firstNumber);
       
       variableNumber = firstNumber + secondNumber;
       firstNumber = secondNumber;
       secondNumber = variableNumber;
       
   }
   
   
}
void week_3_question_3_6(){
       for(int i = 0 ; i<10;i++){
       for(int j = 10;j>i;j--){
           printf(" ");
       }
       for(int j = 0;j < i;j++){
           printf("* ");
       }
      
       printf("\n");
   }
   printf("\n");
   
   
   //
   for(int i = 0 ; i<10;i++){
       for(int j = 10;j>i;j--){
           printf("*");
       }
       for(int j = 0;j < i;j++){
           printf("* ");
       }
       printf("*");
       for(int j = 10;j>i;j--){
           printf("*");
       }
      
       printf("\n");
   }
   
   for(int i = 0 ; i<10;i++){
       for(int j =0;j<i;j++){
           printf("*");
       }
      
      
       printf("\n");
   }
   
   
}
void week_3_question_3_7(){
     int isEvenNumber;
    printf("enter a number: ");
    scanf("%d",&isEvenNumber);
    
   int number = 1;
   for(int i = 0;i<isEvenNumber;i++){
       if(isEvenNumber%2 == 0){
           if(i == 0){
                printf("%d",number);
                printf("%d\n",number);
            }
            for(int j = 0; j<=i;j++){
                printf("%d",number);
                number++;
            }
            for(int j = 0; j<=i + 1;j++){
                if(j == 0){
                    printf("%d",number);
                }
                printf("%d",number);
                number--;
            }
            number = 1;
            
            printf("\n");
       }
       else{
           if(i == 0){
                printf("%d\n",number);
            }
            for(int j = 0; j<=i;j++){
                printf("%d",number);
                number++;
            }
            for(int j = 0; j<=i + 1;j++){
                printf("%d",number);
                number--;
            }
            number = 1;
            printf("\n");
       }
   }
}
void week_5_question_5_1(){
float FindThreeAverage(int arr[],int lenght)
{
     int sum = 0;
    if (lenght % 2 != 1 ){
        sum += arr[(lenght/2)] + arr[(lenght/2)-1] + arr[(lenght/2)+1];
    }
    else{
      printf("enter proper format");
      return 0;
        
    }
    
    return (float) sum / 3; 
}

int arr[7] = {1,2,3,4,5,6,7};
    int lenght = sizeof(arr)/sizeof(arr[1]);
    printf(" FindAverage = %f",FindThreeAverage(arr,lenght));
}
void week_5_question_5_2(){
    float FindAverage(int arr[],int lenght)
{
   
    int sum =0 ;
    for(int i = 0 ; i < lenght;i++ ){
        sum += arr[i];
    }
    return (float) sum / lenght; 
}
  int arr[6] = {1,2,3,4,5,6};
    int lenght = sizeof(arr)/sizeof(arr[1]);
    printf(" FindAverage = %f",FindAverage(arr,lenght));
}
void week_5_question_5_3(){
     int arr[SIZE] = {5, 7, 9, 11};
    for(int i = 0; i < SIZE ; i++){
        printf("%d arr[%d]",i,arr[i]);
        for(int j = 0;j < arr[i];j++){
            printf("*");
        }
        puts("");
    }
}
void week_5_question_5_4(){
     int arr[4] = {1,1,1,1};
    
    for(int i = 0;i< 4;i++){
       
            if(i == 0){
                for(int j = 0;j < 4;j++){
                     printf("%d",arr[j]);
                }
            }
            else if(i ==1){
               for(int j = 0;j < 1;j++){
                     printf("%d",arr[j]);
                }
            }
        else if(i ==2){
               for(int j = 0;j < 2;j++){
                     printf("%d",arr[j]);
                }
            }
            else{
                 printf("  ");
                 for(int j = 0;j < 2;j++){
                     printf("%d",arr[j]);
                }
            }

        puts("");
    }
    
}
void week_5_question_5_5(){
    void SumTwoVector(int arr[],int arr2[],int lenght){
    int newArr[lenght];
    for(int i = 0;i<lenght ;i++){
        newArr[i] = arr2[i] + arr[i];
    }
    printf("result= ");
    for(int i = 0 ; i< lenght;i++){
        printf("%d",newArr[i]);
    }
}
}

void week_5_question_5_6(){
    int FindTheLargest(int arr[],int length){
    int max = arr[0];
    for(int i = 1; i<length ; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;
  
}
int FindTheSmallest(int arr[],int length){
    int min = arr[0];
    for(int i = 1; i<length ; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    return min;
  
}
}
void week_5_question_5_7(){
    int vector1[3] = {1,212,3};
    int vector2[7] = {434,12,3,43,45,4353,454};
    
    int temp;
    for(int i = 1 ; i < 7;i++){
        for(int j = 1;j < i + 1;j++ ){
            if(vector2[j] < vector2[j-1]){
                temp = vector2[j-1] ;
                vector2[j-1] = vector2[j];
                vector2[j] = temp;
                
                
            }
        }
    }
    
   for(int i = 0;i <7;i++){
       printf("%d\n",vector2[i]);
   }
}

int main()
{
    
    
    
    return 0;
}