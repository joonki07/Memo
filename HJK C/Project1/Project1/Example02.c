//# include <stdio.h>
// stdio.h는 C언어에서 입력(input)과 출력
//

// 할수 있는 기능
//1. 파일에 대한 작업(파일 이름 변경, 파일 열기, 닫기, 파일 삭제

// 변수(variable) : 하나의 데이터를 사용자가 이름을 짓고 저장하는 저장 공간

//변수를 만드는 방법(변수 선언 : delcaration)
//자료형 변수명;

// 자료형(type) : 컴퓨터가 데이터를 판단하는 기준이며 방법입니다.
// 자료형의 종류
/***************************************************************************************
자료형의 이름			크기(Byte)		값의 표현 범위			         표현하는 형태
-----------------------------------------------------------------------------------------
char       					1			  -128 ~ 127				       문자 1개
int		       			    4		-2,147,483,648 ~ 2147483647            정수
float				        4             소수점 6자리까지                 실수
double						8			
*****************************************************************************************/

// 변수에 값 적용하기 (초기화 : initialize)
// 변수명 = 값;

// 문장안에서 데이터를 확읺는 방법
// 서식 지정자(Format S
/************************************************
%d 정수(10진수)		decimal
%o 정수(8진수)		octal
%x 정수(16진수)		hexadecimal
%f 실수				float(부동 소수점)
%e 실수             Exponent
%c 문자				character
%s 문장(문자열)		string
%p 16진수 8자리     pointer(포인터)
%% -				%를 출력하고 싶을때 사용
************************************************/

//int main()
//{
//	int gold;
//	gold = 1000;
//
//	// 변수 출력
//	printf("골드 : %d\n", gold);
//
//	// 서식 지정자 형태에 따라 출려하기
//	int number = -10;
//	unsigned int unumber = 20;
//	// unsigned가 붙는 경우 음수에 대한 표현을 하지 않습니다.
//	// 음수로 표현할 수 있는 데이터가 양수 쪽으로 전달
//
//	printf("10진수 : %d\n", number);
//	printf("8진수 : %o\n", number);
//	printf("16진수 : %x\n", number);
//
//	printf("10진수 : %d\n", unumber);
//	printf("8진수 : %o\n", unumber);
//	printf("16진수 : %x\n", unumber);
//	
//
//	return 0;
//}









