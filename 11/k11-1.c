#include <stdio.h>

typedef struct{
	int no;
	char class;
	int score;
}students;

int main(){
	students student_socre[6] = {{9972002, 'A', 84},{9972016, 'B', 70},{9972037, 'A',65},{9972052, 'A', 96},{9972079, 'B', 82},{9972088, 'B', 73}};
	int lower_limit, i;
	int  counter_A = 0, counter_B = 0;

	printf("�p��̓_���̉���:");
	scanf("%d",&lower_limit);

	printf("�p��̓_����%d�_�ȏ�̐l�̃��X�g:\n",lower_limit);
	for(i = 0; i < 6; i++){
		if(student_socre[i].score >= lower_limit){
			printf("%d\n",student_socre[i].no);

			if(student_socre[i].class == 'A'){
				counter_A++;
			}else{
				counter_B++;
			}
		}
	}
	printf("A�g:%d�l,B�g:%d�l\n",counter_A, counter_B);
}