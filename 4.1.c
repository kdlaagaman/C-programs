#include <stdio.h>
char* get_rank(float marks) 
{
    if (marks < 40) 
    {
        return "Fail";
    } 
    else if (marks >= 40 && marks < 55) 
    {
        return "Pass & Third Division";
    } else if (marks >= 55 && marks < 65) 
    {
        return "Second Division";
    } else if (marks >= 65 && marks < 80)
     {
        return "First Division";
    } else if (marks >= 80 && marks < 95)
     {

        return "Distinction";
    } else 
    {
        return "Extra Ordinary";
    }
}

int main()
 {
    float physics, chemistry, math, english, biology;
    float total, percentage;
    printf("Enter marks for Physics: ");
    scanf("%f", &physics);
    printf("Enter marks for Chemistry: ");
    scanf("%f", &chemistry);
    printf("Enter marks for Math: ");
    scanf("%f", &math);
    printf("Enter marks for English: ");
    scanf("%f", &english);
    printf("Enter marks for Biology: ");
    scanf("%f", &biology);
    total= physics + chemistry + math + english + biology;
    percentage = (total / 500) * 100;
    printf("Physics: %s\n", get_rank(physics));
    printf("Chemistry: %s\n", get_rank(chemistry));
    printf("Math: %s\n", get_rank(math));
    printf("English: %s\n", get_rank(english));
    printf("Biology: %s\n", get_rank(biology));
    printf("\nTotal Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Overall Rank: ");
    if (percentage < 40) {
        printf("Fail\n");
    } 
    else if (percentage >= 40 && percentage < 55) 
    {
        printf("Pass & Third Division\n");
    }
     else if (percentage >= 55 && percentage < 65)
      {
    
        printf("Second Division\n");
    } else if (percentage >= 65 && percentage < 80) {
        printf("First Division\n");
    } else if (percentage >= 80 && percentage < 95) {
        printf("Distinction\n");
    } else {
        printf("Extra Ordinary\n");
    }

    return 0;
}