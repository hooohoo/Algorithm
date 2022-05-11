#include <stdio.h>

struct tagStudent {
	int age;
	int grade;
	char name[100];
	struct tagStudent *next;
};

typedef struct tagStudent Student;


int main() {

	Student st;
	st.age = 10;
	st.grade = 1;
	st.name[0] = 'K';
	st.name[1] = 'I';
	st.name[2] = 'M';
	st.name[3] = '\0';

	Student st1;
	st1.age = 20;
	st1.grade = 2;
	strcpy(st1.name, "LEE");

	Student st2;
	st2.age = 30;
	st2.grade = 3;
	strcpy(st2.name, "PARK");

	st.next = &st1;

	st1.next = &st2;

	printf("%s\n", st.next->next->name);
	
	// Student st3를 만들고 st2에 연결 후 st를 이용하여 st3의 멤버 값 출력하기

	Student st3;
	st3.age = 40;
	st3.grade = 4;
	strcpy(st3.name, "CHOI");

	st2.next = &st3;

	printf("%s\n", st.next->next->next->name);




	return 0;
}