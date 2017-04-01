#pragma once

class MBL_CLASS_BUMP4D
{
public:

	MBL_CLASS_BUMP4D(char cXorKey, int iNumOfChars, char *cString);
	MBL_CLASS_BUMP4D(wchar_t wcXorKey, int iNumOfChars, wchar_t *wcString);
	~MBL_CLASS_BUMP4D(void);

protected:
	char *cStringPointer;
	int iCStringPointerLen;
	wchar_t *wcStringPointer;
	int iWStringPointerLen;

};
