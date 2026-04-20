#include <stdio.h>

int main(void)
{
    int ans=0, guess=0, n=0;        // 정답 ans, 예측 변수 guess, 시도 횟수 n으로 선언 및 초기화 
    
    scanf("%d", &ans);      //먼저 정답을 입력받는다
    
    do {                                //do~while 문을 사용해서 먼저 일단 예측 값을 받는다. 
        scanf("%d", &guess);        //예측 값을 받았으므로 시도 횟수를 1 올려준다
        n++;
        
        if (guess > ans){           //만약 예측값이 처음 입력한 정답보다 크다면
            printf("%d>?\n", guess);        //다음과 같이 출력한다
        }
        else if (guess < ans){      // 예측 값이 정답보다 작을 때 
            printf("%d<?\n", guess);
        }
        else{               // 예측 값이 정답일 때
            printf("%d==?\n", guess);
        }
        
    }while(guess != ans);       //이 반복을 예측값과 정답이 다를 때 계속 반복한다 즉 같아지면 반복문을 빠져나온다

    printf("%d", n);        // 총 시도 횟수를 마지막에 출력한다.
    
    return 0;
}
