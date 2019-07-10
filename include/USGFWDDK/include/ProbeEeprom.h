/*
structures that defines PE format to store data in probe's EEPROM
*/

#if !defined __PROBEEEPROM_H__
#define __PROBEEEPROM_H__

// all structures in this file are packed on word boundaries
//
#include <pshpack2.h>

#ifndef TCC
#define TCC(ch2) ((((WORD)(ch2) & 0xFF) << 8) | (((WORD)(ch2) & 0xFF00) >> 8))
#endif	// PCC

#ifndef FCC
#define FCC(ch4) ((((DWORD)(ch4) & 0xFF) << 24) |     \
	(((DWORD)(ch4) & 0xFF00) << 8) |    \
	(((DWORD)(ch4) & 0xFF0000) >> 8) |  \
	(((DWORD)(ch4) & 0xFF000000) >> 24))
#endif	// FCC


// definition of file identificator. Ultrasound Interchange File Format
#define datatypeProbeEeprom		TCC('PE')
#define listformList			TCC('LS')

#define listtypeProbeHeader		FCC('hdr1')

// identifiers for list type hdr1 
#define ckidManufacturer	0x01	// manufacturer name (string value)
#define ckidProbeName		0x02	// probe name (string value)
#define ckidSerialNumber	0x03	// serial number adjusted in TELEMED (string value)
#define ckidProbeCode		0x04	// probe code (BYTE (WORD?) value)
#define ckidCompatibility	0x05	// flags of compatibility with beamformers (DWORD)
#define ckidExpirationDate	0x06	// work expiration date(DWORD)
#define ckidFunctions		0x07	// bitwise flags of enabled functionality of probe supported modes(DWORD) 
#define ckidCustomer		0x08	// customer (string value)
#define ckidVendorNumber	0x09	// serial number adjusted by PROSONIC (string value)
#define ckidDateCreate		0x0a	// date of EEPROM creation
#define ckidDateModified	0x0b	// date of EEPROM modification
#define ckidProbeType		0x0c	// type of the probe

typedef struct _pechunk
{
	WORD wChunkId;
	WORD wChunkSize;
} PECHUNK, *PPECHUNK;

typedef struct _pelist
{
	WORD wChunkId;
	WORD wChunkSize;
	DWORD dwListId;
} PELIST, *PPELIST;


#define PREEROUND(cb) ((cb) + ((cb)&1))
#define PREENEXT(pChunk) (PPECHUNK)((LPBYTE)(pChunk) \
	+ sizeof(PECHUNK) \
	+ PREEROUND(((PPECHUNK)pChunk)->wChunkSize))

#include <poppack.h>
#endif
