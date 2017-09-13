# 수면 시 생체신호 변화를 이용한 홈 오토메이션 제어

2017년도 STEAM R&E
주제: 수면 시 생체신호 변화를 이용한 홈 오토메이션 제어

R&E 연구 중 사용한 소스 코드입니다.

## 각 파일의 설명

### Arduino 폴더

이 파일을 전부 다운로드한 다음, 아두이노에 업로드합니다.

main.ino: 소스 코드의 메인이 되는 파일입니다.

AllSerialControl.h: Pulse 센서를 사용하기 위한 파일입니다.

Interrupt.h: Pulse 센서를 컨트롤하기 위한 파일입니다.

### Raspberry_Pi 폴더

이 파일을 전부 다운로드한 다음, 라즈베리 파이에서 사용합니다.

main.py: 파이썬 메인 코드입니다.

## Changelog


### Arduino Code

#### v1
##### 개선된 기능
+ 최초 소스 코드
+ 아두이노에서 심박, 주변 온도, 대상 온도(체온)를 시간에 따라 디스플레이하는 기능 추가
+ 아두이노 시리얼 모니터를 사용하여 데이터를 받아보는 기능 추가
##### 보고된 에러
+ 가끔씩 시간이 10초 가량 어긋나는 오류가 있음

#### v11
##### 개선된 기능
+ 실시간 저장 기능 추가: 아두이노와 라즈베리 파이를 연결하여 시간에 따라 자동으로 MySQL 데이터베이스에 저장되도록 함
+ 다이얼 위치에 따라 다른 센서의 값을 볼 수 있는 기능 추가
##### 보고된 에러
+ 시간이 1시간 가량 어긋나는 오류가 있음
+ 센서 데이터 수집이 간헐적으로 멈추는 오류가 있음

#### v12
##### 개선된 기능
+ 센서 데이터 수집이 간헐적으로 멈추는 오류를 해결
+ 센서가 데이터를 1초 간격으로 수집하도록 수정
+ 다이얼 위치에 따라서 센서의 값을 보거나 시간을 볼 수 있도록 수정
##### 보고된 에러
+ 가끔씩 시간이 1초 가량 어긋나는 오류가 있음 

### Raspberry Pi Code

#### v1
##### 개선된 기능
+ 최초 소스 코드
+ 아두이노 시리얼 모니터에서 출력한 데이터를 MySQL에 저장하는 기능 추가
+ 수집되는 데이터를 터미널에 출력하는 기능 추가

#### v2
##### 개선된 기능
+ 이름 입력 기능 추가: 사용자가 이름을 입력하면 MySQL에서 이름에 따라 데이터를 따로 보관할 수 있음
+ 파일 저장 기능 추가: 데이터가 수집되기 시작하면 데이터가 텍스트(.txt) 파일로 저장됨
