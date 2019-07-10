#ifndef _RGPROPID_H_
#define _RGPROPID_H_

// {EA385786-C4EE-4ae8-8AC2-F992AA041C71}
//DEFINE_GUID(KSPROPSETID_UsbEchoBlasterRegisters, 
//0xea385786, 0xc4ee, 0x4ae8, 0x8a, 0xc2, 0xf9, 0x92, 0xaa, 0x4, 0x1c, 0x71);
#define STATIC_KSPROPSETID_UsbEchoBlasterRegisters \
	0xea385786, 0xc4ee, 0x4ae8, 0x8a, 0xc2, 0xf9, 0x92, 0xaa, 0x4, 0x1c, 0x71
DEFINE_GUIDSTRUCT("EA385786-C4EE-4ae8-8AC2-F992AA041C71", KSPROPSETID_UsbEchoBlasterRegisters);
#define KSPROPSETID_UsbEchoBlasterRegisters DEFINE_GUIDNAMED(KSPROPSETID_UsbEchoBlasterRegisters)

enum {
	KSPROPERTY_LINEBUFFER_UZ = 0,
	KSPROPERTY_LINEBUFFER_AGC,
	KSPROPERTY_LINEBUFFER_TFC,
	KSPROPERTY_LINEBUFFER_TGC,
	KSPROPERTY_DELAYS_TRANSMIT,
	KSPROPERTY_DELAYS_RECEIVE,
	KSPROPERTY_REGISTERS_FX2,
	KSPROPERTY_REGISTERS_I2C,
	KSPROPERTY_REGISTERS_TGC_CFM,
	KSPROPERTY_REGISTERS_SFR
};

// {96EBFF87-707D-43f8-8E10-FD6E5C15ECDC}
// DEFINE_GUID(KSPROPSET_UsbEchoBlasterControl, 
// 0x96ebff87, 0x707d, 0x43f8, 0x8e, 0x10, 0xfd, 0x6e, 0x5c, 0x15, 0xec, 0xdc);
#define STATIC_KSPROPSET_UsbEchoBlasterControl \
	0x96ebff87, 0x707d, 0x43f8, 0x8e, 0x10, 0xfd, 0x6e, 0x5c, 0x15, 0xec, 0xdc
DEFINE_GUIDSTRUCT("96EBFF87-707D-43f8-8E10-FD6E5C15ECDC", KSPROPSET_UsbEchoBlasterControl);
#define KSPROPSET_UsbEchoBlasterControl DEFINE_GUIDNAMED(KSPROPSET_UsbEchoBlasterControl)

enum {
	KSPROPERTY_USBRAWCTRL = 0,
	KSPROPERTY_USBEP1OUT,
	KSPROPERTY_MULTYBEAM,
	KSPROPERTY_AFECHANNEL,
};

typedef struct
{
	KSPROPERTY property;
	WORD request;
	WORD wValue;
	WORD wIndex;
	WORD wLength;
} KSPROPERTY_USBRAWCTRL_S, *PKSPROPERTY_USBRAWCTRL_S;


// {F9FAAE52-91AD-4ae1-B644-B8F4CC32E8BF}
// DEFINE_GUID(KSPROPSETID_UsbSmartUsRegisters, 
//			0xf9faae52, 0x91ad, 0x4ae1, 0xb6, 0x44, 0xb8, 0xf4, 0xcc, 0x32, 0xe8, 0xbf);
#define STATIC_KSPROPSETID_UsbSmartUsRegisters \
	0xf9faae52, 0x91ad, 0x4ae1, 0xb6, 0x44, 0xb8, 0xf4, 0xcc, 0x32, 0xe8, 0xbf
DEFINE_GUIDSTRUCT("F9FAAE52-91AD-4ae1-B644-B8F4CC32E8BF", KSPROPSETID_UsbSmartUsRegisters);
#define KSPROPSETID_UsbSmartUsRegisters DEFINE_GUIDNAMED(KSPROPSETID_UsbSmartUsRegisters)

enum {
	KSPROPERTY_REGISTERS_AFE = 0,
};


// {CD0B693F-9B1A-4380-8730-E9604F3E1556}
// DEFINE_GUID(KSPROPSETID_UsbArtUsRegisters,
//	0xcd0b693f, 0x9b1a, 0x4380, 0x87, 0x30, 0xe9, 0x60, 0x4f, 0x3e, 0x15, 0x56);
#define STATIC_KSPROPSETID_UsbArtUsRegisters \
	0xcd0b693f, 0x9b1a, 0x4380, 0x87, 0x30, 0xe9, 0x60, 0x4f, 0x3e, 0x15, 0x56
DEFINE_GUIDSTRUCT("CD0B693F-9B1A-4380-8730-E9604F3E1556", KSPROPSETID_UsbArtUsRegisters);
#define KSPROPSETID_UsbArtUsRegisters DEFINE_GUIDNAMED(KSPROPSETID_UsbArtUsRegisters)

typedef struct
{
	KSPROPERTY property;
	DWORD dwRegistersArray;
	DWORD dwRegistersOffset;
} KSPROPERTY_USBARTUSREGS_S, *PKSPROPERTY_USBARTUSREGS_S;

enum {
	KSPROPERTY_MEMORY_REGS = 0,
};

// {55693149-7B56-489A-BC93-74CC29E1F084}
// DEFINE_GUID(KSPROPSETID_StreamConnection,
//	0x55693149, 0x7b56, 0x489a, 0xbc, 0x93, 0x74, 0xcc, 0x29, 0xe1, 0xf0, 0x84);
#define STATIC_KSPROPSETID_StreamConnection \
	0x55693149, 0x7b56, 0x489a, 0xbc, 0x93, 0x74, 0xcc, 0x29, 0xe1, 0xf0, 0x84
DEFINE_GUIDSTRUCT("55693149-7B56-489A-BC93-74CC29E1F084", KSPROPSETID_StreamConnection);
#define KSPROPSETID_StreamConnection DEFINE_GUIDNAMED(KSPROPSETID_StreamConnection)

typedef struct
{
	DWORD dwStreamID;
	DWORD dwStreamType;				// 'USMS' for ultrasound stream
	DWORD dwStreamSubtype;			// combination of flags of scanning mode.
} KSSTREAM_MAP, *PKSSTREAM_MAP;

enum
{
	KSPROPERTY_STREAMCONNECTION_MAP = 0,					// A KSMULTIPLE_ITEM structure, followed by a sequence of 64-bit aligned KSSTREAM_MAP structures
	KSPROPERTY_STREAMCONNECTION_DATAFORMAT = 1,				// KSDATAFORMAT
	KSPROPERTY_STREAMCONNECTION_PROPOSEDATAFORMAT = 2,		// KSDATAFORMAT
	KSPROPERTY_STREAMCONNECTION_DATARANGES = 3,				// A KSMULTIPLE_ITEM structure, followed by a sequence of 64-bit aligned KSDATARANGE structures
	KSPROPERTY_STREAMCONNECTION_ENABLE = 4,					// ULONG
};

typedef struct
{
	KSPROPERTY property;
	DWORD dwStreamID;
	DWORD dwReserved;
} KSPROPERTY_STREAMFORMAT_S, *PKSPROPERTY_STREAMFORMAT_S;


// {2F5577D7-88C1-4275-BBD2-71C6BBC3D17B}
// DEFINE_GUID(CLSID_UltrasonicResearchInstrument,
//	0x2f5577d7, 0x88c1, 0x4275, 0xbb, 0xd2, 0x71, 0xc6, 0xbb, 0xc3, 0xd1, 0x7b);
#define STATIC_KSCATEGORY_UsgResearchInstrument \
	0x2f5577d7, 0x88c1, 0x4275, 0xbb, 0xd2, 0x71, 0xc6, 0xbb, 0xc3, 0xd1, 0x7b
DEFINE_GUIDSTRUCT("2F5577D7-88C1-4275-BBD2-71C6BBC3D17B", KSCATEGORY_UsgResearchInstrument);
#define KSCATEGORY_UsgResearchInstrument DEFINE_GUIDNAMED(KSCATEGORY_UsgResearchInstrument)


// {5C259E00-F30A-11d6-95E3-0020ED1A49FF}
//DEFINE_GUID(CLSID_UltrasonicBeamformer, 
//0x5c259e00, 0xf30a, 0x11d6, 0x95, 0xe3, 0x0, 0x20, 0xed, 0x1a, 0x49, 0xff);
#define STATIC_KSCATEGORY_UsgBeamformer \
	0x5c259e00, 0xf30a, 0x11d6, 0x95, 0xe3, 0x0, 0x20, 0xed, 0x1a, 0x49, 0xff
DEFINE_GUIDSTRUCT("5C259E00-F30A-11d6-95E3-0020ED1A49FF", KSCATEGORY_UsgBeamformer);
#define KSCATEGORY_UsgBeamformer DEFINE_GUIDNAMED(KSCATEGORY_UsgBeamformer)

// {148A9260-A3A7-11d6-95E3-0020ED1A49FF}
#define STATIC_FILTERREF_EchoBlaster128 \
	0x148a9260, 0xa3a7, 0x11d6, 0x95, 0xe3, 0x0, 0x20, 0xed, 0x1a, 0x49, 0xff
DEFINE_GUIDSTRUCT("148A9260-A3A7-11d6-95E3-0020ED1A49FF", FILTERREF_EchoBlaster128);
#define FILTERREF_EchoBlaster128 DEFINE_GUIDNAMED(FILTERREF_EchoBlaster128)

// {BED2F243-5E64-41da-A2F8-E3103535C4A1}
#define STATIC_FILTERREF_EchoBlaster128_C \
	0xbed2f243, 0x5e64, 0x41da, 0xa2, 0xf8, 0xe3, 0x10, 0x35, 0x35, 0xc4, 0xa1
DEFINE_GUIDSTRUCT("BED2F243-5E64-41da-A2F8-E3103535C4A1", FILTERREF_EchoBlaster128_C);
#define FILTERREF_EchoBlaster128_C DEFINE_GUIDNAMED(FILTERREF_EchoBlaster128_C)

// {0F122C2A-AC5B-4b27-A11D-E5E695E1DBDD}
#define STATIC_FILTERREF_EchoBlaster64 \
	0xf122c2a, 0xac5b, 0x4b27, 0xa1, 0x1d, 0xe5, 0xe6, 0x95, 0xe1, 0xdb, 0xdd
DEFINE_GUIDSTRUCT("0F122C2A-AC5B-4b27-A11D-E5E695E1DBDD", FILTERREF_EchoBlaster64);
#define FILTERREF_EchoBlaster64 DEFINE_GUIDNAMED(FILTERREF_EchoBlaster64)


// {92E3FB4A-DD6F-4bc8-BF39-714C26EF8B49}
#define STATIC_FILTERREF_LogicScanBeamformer \
	0x92e3fb4a, 0xdd6f, 0x4bc8, 0xbf, 0x39, 0x71, 0x4c, 0x26, 0xef, 0x8b, 0x49
DEFINE_GUIDSTRUCT("92E3FB4A-DD6F-4bc8-BF39-714C26EF8B49", FILTERREF_LogicScanBeamformer);
#define FILTERREF_LogicScanBeamformer DEFINE_GUIDNAMED(FILTERREF_LogicScanBeamformer)

// {194A7CCB-43B5-4870-8B18-066589AD5A2A}
#define STATIC_FILTERREF_LogicScan128B \
	0x194a7ccb, 0x43b5, 0x4870, 0x8b, 0x18, 0x6, 0x65, 0x89, 0xad, 0x5a, 0x2a
DEFINE_GUIDSTRUCT("194A7CCB-43B5-4870-8B18-066589AD5A2A", FILTERREF_LogicScan128B);
#define FILTERREF_LogicScan128B DEFINE_GUIDNAMED(FILTERREF_LogicScan128B)

// {38139F94-C769-4791-AE94-1E54B39A11FE}
#define STATIC_FILTERREF_LogicScan64 \
	0x38139f94, 0xc769, 0x4791, 0xae, 0x94, 0x1e, 0x54, 0xb3, 0x9a, 0x11, 0xfe
DEFINE_GUIDSTRUCT("38139F94-C769-4791-AE94-1E54B39A11FE", FILTERREF_LogicScan64);
#define FILTERREF_LogicScan64 DEFINE_GUIDNAMED(FILTERREF_LogicScan64)

// {453BA303-3058-4ccd-AF6A-F9219DDCF7A0}
#define STATIC_FILTERREF_LogicScan64B \
	0x453ba303, 0x3058, 0x4ccd, 0xaf, 0x6a, 0xf9, 0x21, 0x9d, 0xdc, 0xf7, 0xa0
DEFINE_GUIDSTRUCT("453BA303-3058-4ccd-AF6A-F9219DDCF7A0", FILTERREF_LogicScan64B);
#define FILTERREF_LogicScan64B DEFINE_GUIDNAMED(FILTERREF_LogicScan64B)

// {EFD6C1D1-ECD2-4207-908D-778E058E6CDD}
#define STATIC_FILTERREF_SiteRiteBeamformer \
	0xefd6c1d1, 0xecd2, 0x4207, 0x90, 0x8d, 0x77, 0x8e, 0x5, 0x8e, 0x6c, 0xdd
DEFINE_GUIDSTRUCT("EFD6C1D1-ECD2-4207-908D-778E058E6CDD", FILTERREF_SiteRiteBeamformer);
#define FILTERREF_SiteRiteBeamformer DEFINE_GUIDNAMED(FILTERREF_SiteRiteBeamformer)

// {1F42035D-9AB2-4676-A6E7-5A7B66C69345}
// DEFINE_GUID(<<name>>, 
// 			0x1f42035d, 0x9ab2, 0x4676, 0xa6, 0xe7, 0x5a, 0x7b, 0x66, 0xc6, 0x93, 0x45);
#define STATIC_FILTERREF_SiteRite64Beamformer \
	0x1f42035d, 0x9ab2, 0x4676, 0xa6, 0xe7, 0x5a, 0x7b, 0x66, 0xc6, 0x93, 0x45
DEFINE_GUIDSTRUCT("1F42035D-9AB2-4676-A6E7-5A7B66C69345", FILTERREF_SiteRite64Beamformer);
#define FILTERREF_SiteRite64Beamformer DEFINE_GUIDNAMED(FILTERREF_SiteRite64Beamformer)


// {52C94E9E-0554-4110-9B0F-62ABEBB4F267}
#define STATIC_FILTERREF_ClarUsBeamformer \
	0x52c94e9e, 0x554, 0x4110, 0x9b, 0xf, 0x62, 0xab, 0xeb, 0xb4, 0xf2, 0x67
DEFINE_GUIDSTRUCT("52C94E9E-0554-4110-9B0F-62ABEBB4F267", FILTERREF_ClarUsBeamformer);
#define FILTERREF_ClarUsBeamformer DEFINE_GUIDNAMED(FILTERREF_ClarUsBeamformer)

// {F4845E45-CCFD-4cde-951E-59967D9A78E6}
#define STATIC_FILTERREF_SmartUsBeamformer \
	0xf4845e45, 0xccfd, 0x4cde, 0x95, 0x1e, 0x59, 0x96, 0x7d, 0x9a, 0x78, 0xe6
DEFINE_GUIDSTRUCT("F4845E45-CCFD-4cde-951E-59967D9A78E6", FILTERREF_SmartUsBeamformer);
#define FILTERREF_SmartUsBeamformer DEFINE_GUIDNAMED(FILTERREF_SmartUsBeamformer)

// {5B75D2D5-56D7-4c20-90FF-B1BEDC7C11E2}
#define STATIC_FILTERREF_ClarUs4dBeamformer \
	0x5b75d2d5, 0x56d7, 0x4c20, 0x90, 0xff, 0xb1, 0xbe, 0xdc, 0x7c, 0x11, 0xe2
DEFINE_GUIDSTRUCT("5B75D2D5-56D7-4c20-90FF-B1BEDC7C11E2", FILTERREF_ClarUs4dBeamformer);
#define FILTERREF_ClarUs4dBeamformer DEFINE_GUIDNAMED(FILTERREF_ClarUs4dBeamformer)

// {CFC4E019-6549-4ba3-9164-FA9B678C5FBE}
#define STATIC_FILTERREF_AcuVistaBeamformer \
	0xcfc4e019, 0x6549, 0x4ba3, 0x91, 0x64, 0xfa, 0x9b, 0x67, 0x8c, 0x5f, 0xbe
DEFINE_GUIDSTRUCT("CFC4E019-6549-4ba3-9164-FA9B678C5FBE", FILTERREF_AcuVistaBeamformer);
#define FILTERREF_AcuVistaBeamformer DEFINE_GUIDNAMED(FILTERREF_AcuVistaBeamformer)


// {103EFE63-BC88-4fd8-BD0C-038EC09A3336}
#define STATIC_FILTERREF_SmartUsKBeamformer \
	0x103efe63, 0xbc88, 0x4fd8, 0xbd, 0xc, 0x3, 0x8e, 0xc0, 0x9a, 0x33, 0x36
DEFINE_GUIDSTRUCT("103EFE63-BC88-4fd8-BD0C-038EC09A3336", FILTERREF_SmartUsKBeamformer);
#define FILTERREF_SmartUsKBeamformer DEFINE_GUIDNAMED(FILTERREF_SmartUsKBeamformer)

// {EA80E48B-D5D0-4547-BD57-DFC1D78F4001}
#define STATIC_FILTERREF_SmartUsCaperayBeamformer \
	0xea80e48b, 0xd5d0, 0x4547, 0xbd, 0x57, 0xdf, 0xc1, 0xd7, 0x8f, 0x40, 0x1
DEFINE_GUIDSTRUCT("EA80E48B-D5D0-4547-BD57-DFC1D78F4001", FILTERREF_SmartUsCaperayBeamformer);
#define FILTERREF_SmartUsCaperayBeamformer DEFINE_GUIDNAMED(FILTERREF_SmartUsCaperayBeamformer)

// {9BE52EC1-583D-42d0-9143-398E2A8607D8}
#define STATIC_FILTERREF_MicrUsBeamformer \
	0x9BE52EC1, 0x583D, 0x42d0, 0x91, 0x43, 0x39, 0x8E, 0x2A, 0x86, 0x07, 0xD8
DEFINE_GUIDSTRUCT("9BE52EC1-583D-42d0-9143-398E2A8607D8", FILTERREF_MicrUsBeamformer);
#define FILTERREF_MicrUsBeamformer DEFINE_GUIDNAMED(FILTERREF_MicrUsBeamformer)

// {9C0C0034-9C07-4831-8C55-1EB88973BCD9}
#define STATIC_FILTERREF_MicrUsBeamformerC \
	0x9c0c0034, 0x9c07, 0x4831, 0x8c, 0x55, 0x1e, 0xb8, 0x89, 0x73, 0xbc, 0xd9
DEFINE_GUIDSTRUCT("9C0C0034-9C07-4831-8C55-1EB88973BCD9", FILTERREF_MicrUsBeamformerC);
#define FILTERREF_MicrUsBeamformerC DEFINE_GUIDNAMED(FILTERREF_MicrUsBeamformerC)

// {95EE2A94-D8BD-4de8-9F6A-98D666699A09}
#define STATIC_FILTERREF_MicrUsBeamformerDuo \
	0x95ee2a94, 0xd8bd, 0x4de8, 0x9f, 0x6a, 0x98, 0xd6, 0x66, 0x69, 0x9a, 0x9
DEFINE_GUIDSTRUCT("95EE2A94-D8BD-4de8-9F6A-98D666699A09", FILTERREF_MicrUsBeamformerDuo);
#define FILTERREF_MicrUsBeamformerDuo DEFINE_GUIDNAMED(FILTERREF_MicrUsBeamformerDuo)

// {E4D2C007-6659-4a52-9149-F91BA32E9885}
#define STATIC_FILTERREF_MicrUsBeamformerD \
	0xe4d2c007, 0x6659, 0x4a52, 0x91, 0x49, 0xf9, 0x1b, 0xa3, 0x2e, 0x98, 0x85
DEFINE_GUIDSTRUCT("E4D2C007-6659-4a52-9149-F91BA32E9885", FILTERREF_MicrUsBeamformerD);
#define FILTERREF_MicrUsBeamformerD DEFINE_GUIDNAMED(FILTERREF_MicrUsBeamformerD)

// {7A590730-53E7-416e-932E-992F0B39A7C4}
#define STATIC_FILTERREF_MicrUsBeamformerDuoD \
	0x7a590730, 0x53e7, 0x416e, 0x93, 0x2e, 0x99, 0x2f, 0xb, 0x39, 0xa7, 0xc4
DEFINE_GUIDSTRUCT("7A590730-53E7-416e-932E-992F0B39A7C4", FILTERREF_MicrUsBeamformerDuoD);
#define FILTERREF_MicrUsBeamformerDuoD DEFINE_GUIDNAMED(FILTERREF_MicrUsBeamformerDuoD)

// {B942B920-AEB7-4e5f-94B7-9EEB8D498AAC}
#define STATIC_FILTERREF_SiteRiteNBeamformer \
	0xb942b920, 0xaeb7, 0x4e5f, 0x94, 0xb7, 0x9e, 0xeb, 0x8d, 0x49, 0x8a, 0xac
DEFINE_GUIDSTRUCT("B942B920-AEB7-4e5f-94B7-9EEB8D498AAC", FILTERREF_SiteRiteNBeamformer);
#define FILTERREF_SiteRiteNBeamformer DEFINE_GUIDNAMED(FILTERREF_SiteRiteNBeamformer)

// {0D7968C0-3E93-44b8-8A75-A87F1B881FF5}
#define STATIC_FILTERREF_SmartUsCBeamformer \
	0xd7968c0, 0x3e93, 0x44b8, 0x8a, 0x75, 0xa8, 0x7f, 0x1b, 0x88, 0x1f, 0xf5
DEFINE_GUIDSTRUCT("0D7968C0-3E93-44b8-8A75-A87F1B881FF5", FILTERREF_SmartUsCBeamformer);
#define FILTERREF_SmartUsCBeamformer DEFINE_GUIDNAMED(FILTERREF_SmartUsCBeamformer)

// {1928DB62-4F54-42db-B527-5572B78C761B}
#define STATIC_FILTERREF_SmartUsKCBeamformer \
	0x1928db62, 0x4f54, 0x42db, 0xb5, 0x27, 0x55, 0x72, 0xb7, 0x8c, 0x76, 0x1b
DEFINE_GUIDSTRUCT("1928DB62-4F54-42db-B527-5572B78C761B", FILTERREF_SmartUsKCBeamformer);
#define FILTERREF_SmartUsKCBeamformer DEFINE_GUIDNAMED(FILTERREF_SmartUsKCBeamformer)

// {9A0A79C1-0644-418A-9464-A360B6084181}
#define STATIC_FILTERREF_ArtUsBeamformer \
	0x9a0a79c1, 0x644, 0x418a, 0x94, 0x64, 0xa3, 0x60, 0xb6, 0x8, 0x41, 0x81
DEFINE_GUIDSTRUCT("9A0A79C1-0644-418A-9464-A360B6084181", FILTERREF_ArtUsBeamformer);
#define FILTERREF_ArtUsBeamformer DEFINE_GUIDNAMED(FILTERREF_ArtUsBeamformer)

// {1BD14981-D509-4013-B6E2-64B4A3654528}
#define STATIC_FILTERREF_ArtusResearchInstrument \
	0x1bd14981, 0xd509, 0x4013, 0xb6, 0xe2, 0x64, 0xb4, 0xa3, 0x65, 0x45, 0x28
DEFINE_GUIDSTRUCT("1BD14981-D509-4013-B6E2-64B4A3654528", FILTERREF_ArtusResearchInstrument);
#define FILTERREF_ArtusResearchInstrument DEFINE_GUIDNAMED(FILTERREF_ArtusResearchInstrument)

// {D6639B72-97AD-4588-985E-94899B587663}
#define STATIC_FILTERREF_SpectrusBeamformer \
	0xd6639b72, 0x97ad, 0x4588, 0x98, 0x5e, 0x94, 0x89, 0x9b, 0x58, 0x76, 0x63
DEFINE_GUIDSTRUCT("D6639B72-97AD-4588-985E-94899B587663", FILTERREF_SpectrusBeamformer);
#define FILTERREF_SpectrusBeamformer DEFINE_GUIDNAMED(FILTERREF_SpectrusBeamformer)


// {FE1D88A0-F32B-11d6-95E3-0020ED1A49FF}
//DEFINE_GUID(CLSID_UltrasonicTransducer, 
//			0xfe1d88a0, 0xf32b, 0x11d6, 0x95, 0xe3, 0x0, 0x20, 0xed, 0x1a, 0x49, 0xff);
#define STATIC_KSCATEGORY_UsgProbe \
	0xfe1d88a0, 0xf32b, 0x11d6, 0x95, 0xe3, 0x0, 0x20, 0xed, 0x1a, 0x49, 0xff
DEFINE_GUIDSTRUCT("FE1D88A0-F32B-11d6-95E3-0020ED1A49FF", KSCATEGORY_UsgProbe);
#define KSCATEGORY_UsgProbe DEFINE_GUIDNAMED(KSCATEGORY_UsgProbe)

// {67ED57E6-BC9E-4c5e-B1BE-0F62EF85F7EE}
#define STATIC_FILTERREF_LogicScanProbe \
	0x67ed57e6, 0xbc9e, 0x4c5e, 0xb1, 0xbe, 0xf, 0x62, 0xef, 0x85, 0xf7, 0xee
DEFINE_GUIDSTRUCT("67ED57E6-BC9E-4c5e-B1BE-0F62EF85F7EE", FILTERREF_LogicScanProbe);
#define FILTERREF_LogicScanProbe DEFINE_GUIDNAMED(FILTERREF_LogicScanProbe)


// GUID for probe filters

// probe HL9.0/40/128 (code 0x16)
// {D7B8A242-BA77-409f-ABDD-C2170849C30A}
#define STATIC_FILTERREF_HL90_40_128 \
	0xd7b8a242, 0xba77, 0x409f, 0xab, 0xdd, 0xc2, 0x17, 0x8, 0x49, 0xc3, 0xa
DEFINE_GUIDSTRUCT("D7B8A242-BA77-409f-ABDD-C2170849C30A", FILTERREF_HL90_40_128);
#define FILTERREF_HL90_40_128 DEFINE_GUIDNAMED(FILTERREF_HL90_40_128)

// 8AF5383E-F7D6-4234-99D5-6A6D6E5EC05F
#define STATIC_FILTERREF_CAPETRAY \
	0x8AF5383E, 0xF7D6, 0x4234, 0x99, 0xD5, 0x6A, 0x6D, 0x6E, 0x5E, 0xC0, 0x5F
DEFINE_GUIDSTRUCT("8AF5383E-F7D6-4234-99D5-6A6D6E5EC05F", FILTERREF_CAPETRAY);
#define FILTERREF_CAPETRAY DEFINE_GUIDNAMED(FILTERREF_CAPETRAY)

// nodes categories

// generic doppler control node

// {337D03ED-B501-47d4-8431-EEAB3D863943}
#define STATIC_NODETYPE_Usgfw_Doppler \
	0x337d03ed, 0xb501, 0x47d4, 0x84, 0x31, 0xee, 0xab, 0x3d, 0x86, 0x39, 0x43
DEFINE_GUIDSTRUCT("337D03ED-B501-47d4-8431-EEAB3D863943", NODETYPE_Usgfw_Doppler);
#define NODETYPE_Usgfw_Doppler DEFINE_GUIDNAMED(NODETYPE_Usgfw_Doppler)

// {0F37A239-A9F7-4fc7-98A4-1ECE129B7865}
#define STATIC_NODETYPE_Usgfw_ColorDoppler \
	0xf37a239, 0xa9f7, 0x4fc7, 0x98, 0xa4, 0x1e, 0xce, 0x12, 0x9b, 0x78, 0x65
DEFINE_GUIDSTRUCT("0F37A239-A9F7-4fc7-98A4-1ECE129B7865", NODETYPE_Usgfw_ColorDoppler);
#define NODETYPE_Usgfw_ColorDoppler DEFINE_GUIDNAMED(NODETYPE_Usgfw_ColorDoppler)

// {EE94E02A-A94E-42ba-9ACA-4AE83A14F332}
#define STATIC_NODETYPE_Usgfw_SpectralDoppler \
	0xee94e02a, 0xa94e, 0x42ba, 0x9a, 0xca, 0x4a, 0xe8, 0x3a, 0x14, 0xf3, 0x32
DEFINE_GUIDSTRUCT("EE94E02A-A94E-42ba-9ACA-4AE83A14F332", NODETYPE_Usgfw_SpectralDoppler);
#define NODETYPE_Usgfw_SpectralDoppler DEFINE_GUIDNAMED(NODETYPE_Usgfw_SpectralDoppler)

// ColorFlowMapping doppler control node
// {09EAFF69-87FF-4371-949D-46AB8815327F}
#define STATIC_NODETYPE_Usgfw_CFM \
	0x9eaff69, 0x87ff, 0x4371, 0x94, 0x9d, 0x46, 0xab, 0x88, 0x15, 0x32, 0x7f
DEFINE_GUIDSTRUCT("09EAFF69-87FF-4371-949D-46AB8815327F", NODETYPE_Usgfw_CFM);
#define NODETYPE_Usgfw_CFM DEFINE_GUIDNAMED(NODETYPE_Usgfw_CFM)

// Power Doppler control node
// {B28178B2-9ED0-45df-8DC0-82FFAEF6E0AF}
#define STATIC_NODETYPE_Usgfw_PowerDoppler \
	0xb28178b2, 0x9ed0, 0x45df, 0x8d, 0xc0, 0x82, 0xff, 0xae, 0xf6, 0xe0, 0xaf
DEFINE_GUIDSTRUCT("B28178B2-9ED0-45df-8DC0-82FFAEF6E0AF", NODETYPE_Usgfw_PowerDoppler);
#define NODETYPE_Usgfw_PowerDoppler DEFINE_GUIDNAMED(NODETYPE_Usgfw_PowerDoppler)

// PulseWave doppler control node
// {4EB196DD-B5AE-4362-8978-E382FFBE9268}
#define STATIC_NODETYPE_Usgfw_PulseWave \
	0x4eb196dd, 0xb5ae, 0x4362, 0x89, 0x78, 0xe3, 0x82, 0xff, 0xbe, 0x92, 0x68
DEFINE_GUIDSTRUCT("4EB196DD-B5AE-4362-8978-E382FFBE9268", NODETYPE_Usgfw_PulseWave);
#define NODETYPE_Usgfw_PulseWave DEFINE_GUIDNAMED(NODETYPE_Usgfw_PulseWave)

// ContiniousWave doppler control node
// {4BE866C0-F1EF-4a59-8868-FBAF1B2FC436}
#define STATIC_NODETYPE_Usgfw_ContiniousWave \
	0x4be866c0, 0xf1ef, 0x4a59, 0x88, 0x68, 0xfb, 0xaf, 0x1b, 0x2f, 0xc4, 0x36
DEFINE_GUIDSTRUCT("4BE866C0-F1EF-4a59-8868-FBAF1B2FC436", NODETYPE_Usgfw_ContiniousWave);
#define NODETYPE_Usgfw_ContiniousWave DEFINE_GUIDNAMED(NODETYPE_Usgfw_ContiniousWave)

#ifndef MKFOURCC
#define MKFOURCC( ch0, ch1, ch2, ch3 )                                    \
		( (DWORD)(BYTE)(ch0) | ( (DWORD)(BYTE)(ch1) << 8 ) |	\
		( (DWORD)(BYTE)(ch2) << 16 ) | ( (DWORD)(BYTE)(ch3) << 24 ) )
#endif

// indices definitions
#define listIndexMI			MKFOURCC('M','I',' ',' ')
#define listIndexTI			MKFOURCC('T','I',' ',' ')
#define listIndexTIC		MKFOURCC('T','I','C',' ')
#define listIndexTIB		MKFOURCC('T','I','B',' ')
#define listIndexTIS		MKFOURCC('T','I','S',' ')

#define listModeSD			MKFOURCC('S','D',' ',' ')
#define listModeCD			MKFOURCC('C','D',' ',' ')
#define listModeB			MKFOURCC('B',' ',' ',' ')
#define listModeM			MKFOURCC('M',' ',' ',' ')
#define listModeBM_B		MKFOURCC('B','M',' ','B')	// B component in B+M
#define listModeBPW_B		MKFOURCC('B','P','W','B')	// B component in B+PW
#define listModeCD_B		MKFOURCC('C','D',' ','B')	// B component in Color Doppler
#define listModeTriplex_B	MKFOURCC('T','r',' ','B')	// B component in Triplex
#define listModeTriplex_CD	MKFOURCC('T','r','C','D')	// Color Doppler component in Triplex
#define listModeTriplex_PW	MKFOURCC('T','r','P','W')	// PulseWave Doppler component in Triplex
#define listModeCW			MKFOURCC('C','W',' ',' ')

#define tableFocusCode		MKFOURCC('f','c','0','1')
#define tableFocusDepth		MKFOURCC('f','c','0','2')
#define tablePrfFreq		MKFOURCC('p','f','0','1')
#define tableSampleVolume	MKFOURCC('s','v','0','1')
#define tablePowerCode		MKFOURCC('p','r','0','1')
#define tablePulsesNumber	MKFOURCC('p','n','0','1')

#define chunkFreq			MKFOURCC('f','r','e','q')

typedef struct _INDX_PARAM_ENTRY
{
	LONG nReference;
	LONG nCoeff;
} INDX_RAPAM_ENTRY;

#pragma warning( push )
#pragma warning( disable : 4200 )
typedef struct _INDX_PARAM_TABLE
{
	LONG nEntriesInUse;
	INDX_RAPAM_ENTRY aParam[];
} INDX_RAPAM_TABLE, *PINDX_PARAM_TABLE;
#pragma warning( pop )

#ifndef FCC
#define FCC(ch4) ((((DWORD)(ch4) & 0xFF) << 24) |     \
                  (((DWORD)(ch4) & 0xFF00) << 8) |    \
                  (((DWORD)(ch4) & 0xFF0000) >> 8) |  \
                  (((DWORD)(ch4) & 0xFF000000) >> 24))
#endif

typedef struct _riffchunk {
   DWORD fcc;
   DWORD  cb;
   } RIFFCHUNK, * PRIFFCHUNK;
typedef struct _rifflist {
   DWORD fcc;
   DWORD  cb;
   DWORD fccListType;
   } RIFFLIST, * PRIFFLIST;

#define RIFFROUND(cb) ((cb) + ((cb)&1))
#define RIFFNEXT(pChunk) (PRIFFCHUNK)((LPBYTE)(pChunk) \
                          + sizeof(RIFFCHUNK) \
                          + RIFFROUND(((PRIFFCHUNK)pChunk)->cb))


// file structure for bioeffect indices
/*
RIFF('LISP'
	LIST('mode'
		freq(<frequency>)
		LIST('index'
			table1(<table data>)
			table2(<table data>)
			table3(<table data>)
			LIST('subIndex'
				table1(<table1>)
				table2(<table1>)
				table3(<table1>)
				)
			)
		)
	)
*/

typedef struct _SUAD_DATA_HEADER
{
	LONG nChannelsNumber;
	LONG nPointsNumber;
} SUAD_DATA_HEADER;

#define RiffListSUAC		MKFOURCC('S','U','A','C')
#define tableSuacDataHeader	MKFOURCC('a','h','d','r')
#define tableBinaryData		MKFOURCC('b','d','a','t')

// file structure for apodization filter for SmartUs device
/*
RIFF('SUAC'		// SmartUs Apodization Coefficients
	_hdr(<header data>)	// number of channels and points
	data(<filter data>)	// binary data of coefficients (each coefficient contain 2 bytes)
)
*/

#endif	// _RGPROPID_H_