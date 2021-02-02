#include<WinSock2.h>	
#include<stdio.h>
#include<WS2tcpip.h>

#pragma comment(lib,"Ws2_32.lib")
WSADATA wsaData;
int main() 
{
	printf("hello world once again & forever!");
	int iResult;

	// Initialize Winsock
	iResult = WSAStartup(MAKEWORD(2, 2), &wsaData);
	if (iResult != 0) {
		printf("WSAStartup failed: %d\n", iResult);
		return 1;
	}
}