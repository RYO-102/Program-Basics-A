#include <stdio.h>

int main()
{
	/*�ϐ��錾*/
	int interest, grade;

	/*���l�̓���*/
	printf("�����̂��镪��(��:1, ���:2, �f�[�^�Ȋw:3):");
	scanf("%d",&interest);
	printf("�w�N(1�`9):");
	scanf("%d",&grade);

	/*���蕔*/
	if((1 <= grade) && (grade <= 4)){
		/*��������w�����̏���*/
		if(interest == 1){
			printf("���w��\n");
		}else if(interest == 2){
			printf("���f�B�A���w��\n");
		}else if(interest == 3){
			printf("�f�U�C���E�f�[�^�Ȋw��\n");
		}else{
			printf("�͈͊O�̒l�����͂���Ă��܂�\n");
		}
	}else if((5 <= grade) && (grade <= 9)){
		/*���������w�@���̏���*/
		if((1 <= interest) && (interest <= 3)){
			printf("����񌤋���\n");
		}else{
			printf("�͈͊O�̒l�����͂���Ă��܂�\n");
		}
	}else{
		/*�w�N�͈͊O�̃G���[����*/
		printf("�͈͊O�̒l�����͂���Ă��܂�\n");
	}
}