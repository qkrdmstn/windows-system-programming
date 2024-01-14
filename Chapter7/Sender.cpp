//
// 1단계. 편지봉투, 혹은 편지봉투를 보내기 위한 통로를 마련하는 작업
//
HANDLE hMailSlot;
hMailSlot = CreateFile("\\\\.\\mailslot\\mailkbox", ...);
...
...
//
// 2단계. 데이터를(데이터가 담긴 편지봉투를) 전송하는 작업
//
CHAR message[50];
WriteFile(hMailSlot, message, , , , );
...