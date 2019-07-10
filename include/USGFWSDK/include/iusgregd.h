#ifndef __IUSGREGD_H__
#define __IUSGREGD_H__
// файл содержит определени€ дл€ структур дл€ работы с
// реестром

// USGDATA.H должен быть включен перед использованием этого файла
#ifndef _USGDATA_H_
#error usgdata.h must be included first
#endif

#ifdef __cplusplus
extern "C" {            /* Assume C declarations for C++ */
#endif  /* __cplusplus */

// структура формата данных дл€ соединени€ датчик-формирователь
typedef struct tagULTRASOUNDPROBEINFO2
{
	GUID guid;
	ULONG reserved;
	ULONG elementsNum;
	EXVALUE distance;
	EXVALUE angle;
	EXVALUE focus;
	EXVALUE blankZone;
	ULONG minFrequency;
	ULONG maxFrequency;
	ULONG connectorID;
	GUID mediumsSet;
	ULONG mediumsId;
	ULONG reserved2;
} ULTRASOUNDPROBEINFO2;



#ifdef __cplusplus
}                       /* End of extern "C" { */
#endif  /* __cplusplus */


#endif	// __IUSGREGD_H__