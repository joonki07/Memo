//#include "Header.h"
//
//// 
//
//int main()
//{
//	int prices[5];
//
//	for (int i = 0; i < 5; i++)
//	{
//		prices[i] = 100 * (i + 1);
//	}
//
//	for (int i = 0; i < 5; i++)
//	{
//		printf("물건 가격 : %d\n", prices[i]);
//	}
//
//	// 문자열
//	// cher
//
//	char name[12] = "바나나";
//
//	char word[5];
//
//	// 상수 문자열
//	// 입력은 진행할 수 없습니다.
//	// 초기화는 가능합니다.
//	const char* item;
//	item = "바나나맛 우유";
//
//    // 문자열 입력(scanf)
//
//	// 1. 배열을 선언하고, 크기를 설정합니다.
//
//	char p1[10]; // 크기가 10인 char 배열
//
//	printf("문자열을 입력해주세요 >> ");
//	scanf("%s", p1); // 문자열에서는 주소 연산자(&)를 붙이지 않습니다.
//	// 이유 : 베열은
//	printf("출력 결과 : %s", p1);
//
//	// 위의 코드에서는 띄어쓰기 작업이 불가능합니다.
//	//아래의 코드를 통해 띄어쓰기 작업을 진행합니다.
//
//	getcher(); // 입력 후 남아있는 문장들을 return하는 기능(빼주기)
//
//	char p2[10];
//	printf("문자열을 다시 입력해주세요 >> ");
//	scanf("%[^\n]s", p2); 
//	printf("출력 결과 : %s", p2);
//
//	return 0;
//}
