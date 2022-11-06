#include <stdio.h>
int main() {
	//2차원 배열
	//int arr[2][3]={1,2,3,4,5,6};
	//int arr[2][3] = {{1,2,3,},{4,5,6});
	//위의 두 가지 방식으로 정의할 수 있음
	//배열 정의 시
	//int arr[]={1,2}는 가능(컴파일러에게 원소의 개수를 알려주므로)
	//int arr[];는 불가능
	/*2차원 배열의 경우
	int arr[][2]={{1,2},{3,4}} 가능
	int arr[][2]={1,2},{3,4},{5,6},{7}} 가능(컴파일러가 8번째 자리 0으로 비워둠)
	★그러나
	int arr[2][]={{4,5,6},{7,8,9}는 불가능
	->c 에서 다차원 배열의 경우 맨 앞 크기를 제외한 나머지 크기를 정확히 지정해줘야 함
	*/
	int score[3][2];
	int i, j;
	for (i = 0; i < 3; i++) {
		printf("%d번째 학생\n", i + 1);
		for (j = 0; j < 2; j++) {
			printf("%d과목: ", j + 1);
		scanf_s("%d", &score[i][j]);
	}
	}

	for (i = 0; i < 3; i++) {
		printf("%d번째 학생\n 1과목: %d \n 2과목: %d\n", i + 1, score[i][0], score[i][1]);


	}

	return 0;

}