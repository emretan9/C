#include <stdio.h>

int main(){

int m; //m is number of students
int n; //n is number of exams
printf("please enter number of students: ");
scanf("%d", &m);
printf("please enter number of exams: ");
scanf("%d", &n);

double a[m][n]; //student grades on exams
double total[m];
double average[n+1];

for(int j = 0; j < n; j++) //input grades for all students by exam
{
average[j]=0;
printf("Please enter grades for exam %d:\n", j);
for(int i = 0; i < m; i++)
{
printf("student %d: ", i);
scanf("%lf", &a[i][j]);
average[j]=average[j]+a[i][j];
}
average[j]=average[j]/m;
}

average[n]=0;

for(int i = 0; i < m; i++)
{
total[i]=0;
for(int j = 0; j < n; j++)
{
total[i]=total[i]+a[i][j];
printf("%g\t", a[i][j]);
}
printf("%g", total[i]);
average[n]=average[n]+total[i];
printf("\n");
}

average[n]=average[n]/m;

printf("==========================\n");
for(int i = 0; i<n+1; i++) printf("%g\t", average[i]);
}