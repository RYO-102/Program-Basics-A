//����҂��
//���̃v���O������system�R�}���h�g���Ă�̂ŁA�ςȈ��������ƃp�\�R��������\����ł��B
//�ӔC�͈�؎��Ȃ��̂ŁA�e�l�ł�������ƃ`�F�b�N���Ȃ�����s���Ă��������B

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int result;
	char command[100];

	//�����̊m�F �����I��2�����ɃR���p�C���Ƃ���邩���H
	if(argc == 1){
		printf("\033[32m�������ݒ肳��Ă��܂���\033[0m\n");
		return 1;
	}else if(argc != 2){
		printf("\033[32m������2�ȏ�ݒ肳��Ă��܂�\033[0m\n");
		return 1;
	}

	printf("\033[32m%s���R���p�C�����܂�\033[0m\n\n",argv[1]);
	snprintf(command, sizeof(command), "cl %s.c", argv[1]);
	result = system(command);
	printf("\n");	//�R���p�C���̕����ɖ�����Ȃ�����

	//���̒i�K�Ŏ��s�̃R�}���h���
	snprintf(command, sizeof(command), "%s",argv[1]);

	if(result != 0){
		printf("\033[32m�G���[�����o����܂���\033[0m\n");
		return 0;

		/*�f�B���N�g�����̃t�@�C����T���Ĉ�������exe������������s���邩�����`���ɂ���
		  �e�X�ŉ������Ă�����Ă������B
		printf("\033[32mY or N:\033[0m");
		scanf("%c",&error_do);
		while(1){
			switch (error_do){
				case 'Y':
					printf("\033[32m���s���܂�\033[0m\n");
					system(command);
					return 0;
				case 'N':
					printf("\033[32m���s�����I�����܂�\033[0m\n");
					return 0;
				default:
					printf("\033[32mY,N�ȊO�̕��������͂���܂���\033[0m\n");
			}
		}
		*/

	}else{
		printf("\033[32m����ɃR���p�C���ł��܂����B\033[0m");
		//���s���邩�I�ׂ�悤�ɂ����ق�����������
		printf("\033[32m���s���܂��B\033[0m\n\n");
		system(command);
	}
}