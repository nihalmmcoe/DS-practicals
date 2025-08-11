//Write a program to track rainfall data for 3 cities over 4 months. Using a 2D array, we can store the data, calculate the average rainfall for each city, and display the rainfall data in a tabular format.


#include <stdio.h>

int main() {
  float rainfall[3][4];
  float total=0.0,avg=0.0 ;
 
  printf("Enter data for avg. rainfall for cities");
  for(int c=0;c<3;c++)
  {
    printf("\n Enter data for city %d",c+1);
    for(int m=0;m<4;m++)
    {
      printf("\n Months %d: ",m+1);
      scanf("%f",&rainfall[c][m]);
    }
  }

  printf("Rainfall tracking");
  printf("\n Sr.no.\tCity\tMonth1\t\tMonth2\t\tMonth3\t\tMonth4\t\tAvg rainfall\n");
  for(int c=0;c<3;c++){
    total = 0.0;
    printf("%d",c+1);
    printf("\tCity %d",c+1);
    for(int m=0;m<4;m++){
      printf("\t%f",rainfall[c][m]);
      total+=rainfall[c][m];
    }
    avg=total/4;
    printf("\t%f\n",avg);
  }

  return 0;
}
