#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define STUDENTS 10

struct student
{
	int num;
	int kor;
	int eng;
	int math;
	int sum;
	float avg;
};
int main(void)
{
	struct student s_list[STUDENTS];
	srand((unsigned)time(NULL));
	for(int i=0;i<STUDENTS;i++){
		s_list[i].num=i+1;
		s_list[i].kor=rand()%100+1;
		s_list[i].eng=rand()%100+1;
		s_list[i].math=rand()%100+1;
		
	    s_list[i].sum=s_list[i].kor+s_list[i].eng+s_list[i].math;
		s_list[i].avg=s_list[i].sum/3;
	}
	printf("번호\t국어\t영어\t수학\t총점\t평균\n____________________________________\n");
	for(int i=0;i<STUDENTS;i++)
		printf("[%2d]\t%d\t%d\t%d\t%d\t%.1f\n", s_list[i].num, s_list[i].kor, s_list[i].eng, s_list[i].math, s_list[i].sum, s_list[i].avg);
	return 0;
}
