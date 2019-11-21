#include <stdio.h>
int sum(int _nNum){
	int result = 0;
	
	for(int i = 0; i <= _nNum; i++){
		result += i;
	}

	return result;
}

int getCnt(int _nNum){
	int nCnt = 0;
	
	for(int i = 2; i < _nNum / i; i++){                                       // 약수 빠르게 구하는 방법. 
		if(_nNum % i == 0){
			nCnt += 2;
		}
	}
	return nCnt + 2;
}

int main(){

	for(int i = 0; ;i++){
		if(getCnt(sum(i)) >= 500){
			printf("%d\n", sum(i));
                        return 0;
		}
	}
	return 0;
}
