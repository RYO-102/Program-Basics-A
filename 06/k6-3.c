#include <stdio.h>

int main()
{
	/*変数宣言*/
	int balance, price, cash_back;

	/*初期化*/
	balance = 10000;

	/*残額が0より大きいとき継続*/
	while(0 < balance){
		/*残額の確認と支払金額の入力*/
		printf("残額は%d円です\n",balance);
		printf("支払金額:");
		scanf("%d",&price);

		/*残額が支払金額を上回っているか判定*/
		if(balance < price){
			printf("残額が足りません!\n");
		}else{
			/*残額から支払金額を引き、キャッシュバック*/
			balance -= price;
			cash_back = price / 1000;
			balance += cash_back * 100;
		}
	}
	/*終了メッセ*/
	printf("残額が0円になりました\n");
	printf("終了します\n");
}