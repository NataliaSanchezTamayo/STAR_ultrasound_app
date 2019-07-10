#ifndef _USGUTILS_H_
#define _USGUTILS_H_

// #include "usgfw.h"

typedef struct _USGFRAME_FILEHEADER
{
	DWORD ufType;		// specifies file type. Must be 'USBF'
	DWORD ufSize;		// specifies size in bytes of ultrasonic frame file
	WORD ufReserved1;	// reserved, must be zero
	WORD ufReserved2;	// reserved, must be zero
	DWORD ufOffBits;	// specifies offsef, in bytes, from the USGFRAMEINFOHEADER
						// structure to ultrasonic frame bits
} USGFRAME_FILEHEADER, *PUSGFRAME_FILEHEADER;

#endif	// _USGUTILS_H_