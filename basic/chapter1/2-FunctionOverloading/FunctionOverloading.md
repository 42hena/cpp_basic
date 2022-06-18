C 언어
- 함수의 이름을 이용하여, 호출 대상을 찾는다.

C++ 언어
- 함수의 이름 , 매개변수의 선언의 정보를 동시에 활용

ex)
int MyFunc(char c){}
int MyFunc(int c){}

int MyFunc(int n){}
int MyFunc(int n1, int n2){}

잘못된 예시
void MyFunc(int n){}
int MyFunc(int n){}