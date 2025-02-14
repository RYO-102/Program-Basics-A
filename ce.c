//製作者より
//このプログラムはsystemコマンド使ってるので、変な引数入れるとパソコンが壊れる可能性大です。
//責任は一切取らないので、各個人でしっかりとチェックしながら実行してください。

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int result;
	char command[100];

	//引数の確認 将来的に2つ同時にコンパイルとかやるかも？
	if(argc == 1){
		printf("\033[32m引数が設定されていません\033[0m\n");
		return 1;
	}else if(argc != 2){
		printf("\033[32m引数が2つ以上設定されています\033[0m\n");
		return 1;
	}

	printf("\033[32m%sをコンパイルします\033[0m\n\n",argv[1]);
	snprintf(command, sizeof(command), "cl %s.c", argv[1]);
	result = system(command);
	printf("\n");	//コンパイルの文字に埋もれないため

	//この段階で実行のコマンド作る
	snprintf(command, sizeof(command), "%s",argv[1]);

	if(result != 0){
		printf("\033[32mエラーが検出されました\033[0m\n");
		return 0;

		/*ディレクトリ内のファイルを探して引数名のexeがあったら実行するか聞く形式にする
		  各々で改造してもらってもいい。
		printf("\033[32mY or N:\033[0m");
		scanf("%c",&error_do);
		while(1){
			switch (error_do){
				case 'Y':
					printf("\033[32m実行します\033[0m\n");
					system(command);
					return 0;
				case 'N':
					printf("\033[32m実行せず終了します\033[0m\n");
					return 0;
				default:
					printf("\033[32mY,N以外の文字が入力されました\033[0m\n");
			}
		}
		*/

	}else{
		printf("\033[32m正常にコンパイルできました。\033[0m");
		//実行するか選べるようにしたほうがいいかも
		printf("\033[32m実行します。\033[0m\n\n");
		system(command);
	}
}