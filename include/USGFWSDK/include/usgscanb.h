#ifndef _USGSCANB_H_
#define _USGSCANB_H_

#ifdef __cplusplus
extern "C" {            /* Assume C declarations for C++ */
#endif  /* __cplusplus */

// объ€вление класса

// {0ABDE8E1-A253-4850-994D-D39C7538F48F}
DEFINE_GUID(CLSID_ScanConverterModeB, 
0xabde8e1, 0xa253, 0x4850, 0x99, 0x4d, 0xd3, 0x9c, 0x75, 0x38, 0xf4, 0x8f);

// {0E3A8CE5-7E5F-4238-8847-29AB0F2D358E}
DEFINE_GUID(IID_IUltrasonicPalette, 
0xe3a8ce5, 0x7e5f, 0x4238, 0x88, 0x47, 0x29, 0xab, 0xf, 0x2d, 0x35, 0x8e);

// {217101E6-3678-4e40-A176-2FC8C585FCEE}
DEFINE_GUID(CLSID_ScanConverterModeBPropPage, 
0x217101e6, 0x3678, 0x4e40, 0xa1, 0x76, 0x2f, 0xc8, 0xc5, 0x85, 0xfc, 0xee);


DECLARE_INTERFACE_(IUltrasonicPalette,IUnknown)
{
	STDMETHOD(SetUsgPalette)(THIS_
		ULONG iStart,				// index of first entry to set
		ULONG cEntries,				// number of entries to set
		const PALETTEENTRY* ppe		// array of palette entries
		) PURE;
	STDMETHOD(GetUsgPalette)(THIS_
		ULONG iStart,				// first entry to retrieve
		ULONG cEntries,				// number of entries to retrieve
		PALETTEENTRY* ppe			// array that receives entries
		) PURE;
	STDMETHOD(SetUsgBkColor)(THIS_
		COLORREF crBkColor			// color to set as background
		) PURE;
	STDMETHOD(GetUsgBkColor)(THIS_
		COLORREF *pcrBkColor		// value that receives background color
		) PURE;
};

// {0D32B1AD-5467-4de1-ACBD-B25E72E2DFE0}
DEFINE_GUID(IID_IUltrasonicImageB, 
0xd32b1ad, 0x5467, 0x4de1, 0xac, 0xbd, 0xb2, 0x5e, 0x72, 0xe2, 0xdf, 0xe0);

#define USGIMAGE_ORIENTF_MIRROR		1
#define USGIMAGE_ORIENTF_FLIP		2
#define USGIMAGE_ORIENTF_ROTATE		4

#define EC_USG_BASE (EC_USER + 0x100)

#define EC_USG_CALCCHANGED (EC_USG_BASE + 1)

DECLARE_INTERFACE_(IUltrasonicImageB,IUnknown)
{
	STDMETHOD(GetResolution)(THIS_	// retrieves horisontal and vertical resolution of ultrasound image
		ULONG *pXPelsPerMeter,		// value that receives horizontal resolution
		ULONG *pYPelsPerMeter		// value that receives vertical resolution
		) PURE;
	STDMETHOD(GetPosition)(THIS_	// retrieves position of probe's center in pixels
		POINT *pProbeCenter			// points structure that receives position of the probe's center
		) PURE;
	STDMETHOD(SetResolution) (THIS_
		ULONG *pXPelsPerMeter,
		ULONG *pYPelsPerMeter
		) PURE;
	STDMETHOD(SetPosition)(THIS_
		POINT *pProbeCenter
		) PURE;
	// image orientation
	STDMETHOD(SetOrientation) (THIS_
		ULONG OrientationFlags
		) PURE;
	STDMETHOD(GetOrientation) (THIS_
		ULONG *pOrientationFlags
		) PURE;
};

// {7C3E5354-CF6B-45b6-BF93-72526E847C47}
DEFINE_GUID(IID_IUltrasonicImage2D, 
0x7c3e5354, 0xcf6b, 0x45b6, 0xbf, 0x93, 0x72, 0x52, 0x6e, 0x84, 0x7c, 0x47);

/*
// flags for SetImageProperties method call
#define IMAGE2D_PROP_ResolutionValid	0x01	// pointer to resolutoin is pointer to valid data. Set resolution specified
#define IMAGE2D_PROP_ResolutionAuto		0x02	// always use prefered resolution
#define IMAGE2D_PROP_ResolutionReset	0x03	// reset resolution to prefered and use it without changes in future
#define IMAGE2D_PROP_ResolutionMask		0x0f

#define IMAGE2D_PROP_PositionValid		0x10	// pointer to position is pointer to valid data. Set position specified
#define IMAGE2D_PROP_PositionAuto		0x20	// always use prefered position
#define IMAGE2D_PROP_PositionReset		0x30	// reset position to prefered and use it without changes in future
#define IMAGE2D_PROP_PositionMask		0xf0

#define IMAGE2D_PROP_DirectionValid		0x100	// direction parameter is valid
#define IMAGE2D_PROP_OrientationValid	0x200	// orientation parameter is valid
#define IMAGE2D_PROP_DirectionAuto		0x300	// direction is calculated from orientaion flag
#define IMAGE2D_PROP_DirectionReset		0x400	// direction is reset to prefered value and will use without changes
#define IMAGE2D_PROP_DirectionMask		0xf00	
*/

/*
*
*/

typedef struct _IMAGE2D_PROPERTIES
{
	DWORD dwSize;		// size of IMAGE2D_PROPERTIES structure
	DWORD dwFlags;		// determines what fields are valid
	LONG nXPelsPerUnit;	// axis X resolution
	LONG nYPelsPerUnit;	// axis Y resolution
	POINT ptProbeCenter;	// position of probe center in pixels
	LONG nDirection;		// direction of ultrasound image
	BOOL fResolutionAuto;
	BOOL fPositionAuto;
	BOOL fDirectionAuto;
	DWORD dwOrientation;
} IMAGE2D_PROPERTIES;

// nXPelsPerUnit field is valid
#define IMG2D_RESOLUTIONX	0x10
// nYPelsPerUnit field is valid
#define IMG2D_RESOLUTIONY	0x20
// ptProbeCenter field is valid
#define IMG2D_POSITION		0x40
// nDirection field is valid
#define IMG2D_DIRECTION		0x80
// fResolutionAuto field is valid
#define IMG2D_RESOLUTIONAUTO	0x100
// fPositionAuto field is valid
#define IMG2D_POSITIONAUTO		0x200
// fDirectionAuto field is valid
#define IMG2D_DIRECTIONAUTO		0x400
// dwOrientation field is valid
#define IMG2D_ORIENTATION		0x800

DECLARE_INTERFACE_(IUltrasonicImage2D, IUltrasonicImageB)
{
	STDMETHOD(GetDirection)(THIS_
		LONG* pDirection
		) PURE;
	STDMETHOD(SetDirection)(THIS_
		LONG nDirection
		) PURE;

	STDMETHOD(SetImageProperties)(THIS_
		IMAGE2D_PROPERTIES* pImageProps
		) PURE;
	STDMETHOD(GetImageProperties)(THIS_
		BOOL fPrefered, 
		IMAGE2D_PROPERTIES* pImageProps
		) PURE;

	STDMETHOD(SetViewRect)(THIS_
		FLOAT x1,
		FLOAT y1,
		FLOAT x2,
		FLOAT y2
		) PURE;
	STDMETHOD(GetViewRect)(THIS_
		FLOAT *pX1,
		FLOAT *pY1,
		FLOAT *pX2,
		FLOAT *pY2,
		BOOL fPrefered
		) PURE;

	STDMETHOD(SetZoom)(THIS_
		FLOAT ZoomCenterX,
		FLOAT ZoomCenterY,
		LONG ZoomFactor
		) PURE;
	STDMETHOD(GetZoom)(THIS_
		FLOAT *pZoomCenterX,
		FLOAT *pZoomCenterY,
		LONG *pZoomFactor,
		BOOL fPrefered
		) PURE;
};


// {EBE979CC-B5D6-46e9-8DEA-841A53F042AA}
DEFINE_GUID(IID_IUltrasoundImageSize, 
0xebe979cc, 0xb5d6, 0x46e9, 0x8d, 0xea, 0x84, 0x1a, 0x53, 0xf0, 0x42, 0xaa);

DECLARE_INTERFACE_(IUltrasoundImageSize,IUnknown)
{
	STDMETHOD(put_OutputSize) (THIS_
		LONG nWidth,
		LONG nHeight
		) PURE;
	STDMETHOD(get_OutputSize) (THIS_
		LONG *nWidth,
		LONG *nHeight
		) PURE;
};

#ifdef __cplusplus
}                       /* End of extern "C" { */
#endif  /* __cplusplus */

#endif	//_USGSCANB_H_