#include <iostream>
#include <string>

using namespace std;

int main()
{
	string inputNum;
	int sum = 0, sizeOfDigit[3], numOfDigit = 0;		//100λ�����ۼ����Ϊ900��������λ����������ܱ�ʾ	
	cin >> inputNum;

	//�ۼ����������
	for (int i = 0; i < inputNum.size(); i++)
	{
		sum += inputNum[i] - '0';	//���ַ���ת��Ϊint��	
	}
	
	//��ȡλ��
	//��ȡÿһλ���Ƕ��� 
	while (sum > 0)
	{
		sizeOfDigit[numOfDigit] = sum % 10;
		sum /= 10;
		numOfDigit++;
	}

	for (int i = numOfDigit - 1; i >= 0 ; i--)
	{
		if (i != numOfDigit-1)
		{
			cout << ' ';
		}

		switch (sizeOfDigit[i])
		{
		case 0: cout << "ling"; break;
		case 1: cout << "yi"; break;
		case 2: cout << "er"; break;
		case 3: cout << "san"; break;
		case 4: cout << "si"; break;
		case 5: cout << "wu"; break;
		case 6: cout << "liu"; break;
		case 7: cout << "qi"; break;
		case 8: cout << "ba"; break;
		case 9: cout << "jiu"; break;
		}
	}

	return 0;
}