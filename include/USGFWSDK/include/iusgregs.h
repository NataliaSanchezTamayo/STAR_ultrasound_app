#ifndef __IUSGREGS_H__
#define __IUSGREGS_H__

#include "iusgregd.h"

// {DE9766C2-A1B9-4419-B0B3-A98372F36EFB}
#define STATIC_KSPROPSETID_RegistryLink \
	0xde9766c2, 0xa1b9, 0x4419, 0xb0, 0xb3, 0xa9, 0x83, 0x72, 0xf3, 0x6e, 0xfb
DEFINE_GUIDSTRUCT("DE9766C2-A1B9-4419-B0B3-A98372F36EFB", KSPROPSETID_RegistryLink);
#define KSPROPSETID_RegistryLink DEFINE_GUIDNAMED(KSPROPSETID_RegistryLink)

enum
{
	KSPROPERTY_RegistryLink_Path = 0,
	KSPROPERTY_RegistryLink_Mode,
};

typedef ULTRASOUNDPROBEINFO2 KS_ULTRASOUNDPROBEINFO2, *PKS_ULTRASOUNDPROBEINFO2;

// структура для передачи и приема строки реестра
// используется драйвером и интерфейсом пина
typedef struct tagKSPROPERTY_REGISTRYPATH
{
	ULONG StructureSize;
	ULONG uKeyBase;
	ULONG pathLenght;
	WCHAR wchRegistryPath[1];
} KSPROPERTY_REGISTRYPATH, *PKSPROPERTY_REGISTRYPATH;

typedef struct tagKS_DATARANGE_ULTRASOUND_PROBE
{
	KSDATARANGE dataRange;
	KS_ULTRASOUNDPROBEINFO2 probeInfo2;
} KS_DATARANGE_ULTRASOUND_PROBE;

#define REGPATHMODE_AUTO	1
#define REGPATHMODE_MANUAL	2

#endif	// __IUSGREGS_H__