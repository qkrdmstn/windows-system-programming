//
// 1�ܰ�. ��������, Ȥ�� ���������� ������ ���� ��θ� �����ϴ� �۾�
//
HANDLE hMailSlot;
hMailSlot = CreateFile("\\\\.\\mailslot\\mailkbox", ...);
...
...
//
// 2�ܰ�. �����͸�(�����Ͱ� ��� ����������) �����ϴ� �۾�
//
CHAR message[50];
WriteFile(hMailSlot, message, , , , );
...