//PolymorphicType1.cpp

#include <stdio.h>
#include <tchar.h>
#include <windows.h>

UINT CalDistance(UINT a, UINT b)
{
	return a - b;
}

//UINT64 CalDistance(UINT64 a, UINT64 b)
//{
//	return a - b;
//}

//#if defined(_WIN64)
//	UINT64 CalDistance(UINT64 a, UINT64 b)
//#else 
//	UINT CalDistance(UINT a, UINT b)
//#endif
//	{
//		return a - b;
//	}

int _tmain(void)
{
	INT val1 = 10;
	INT val2 = 20;

	_tprintf(_T("Position %u, %u \n"), (UINT)&val1, (UINT)&val2);
	_tprintf(
		_T("distance : %u \n"),
		CalDistance((UINT)&val1, (UINT)&val2)
	);

	return 0;
}

//#if defined(_WIN64)
//
//	typedef __int64 LONG_PTR;
//	typedef unsigned __int64 ULONG_PTR;
//
//	typedef __int64 INT_PTR;
//	typedef unsigned __int64 UINT_PTR;
//#else
//	typedef long LONG_PTR;
//	typedef unsigned long ULONG_PTR;
//
//	typedef int INT_PTR;
//	typedef unsigned int UINT_PTR;
//#endif
