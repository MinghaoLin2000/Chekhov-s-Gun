_$s16EyeCandyGraphics9CGSWindowV10connection4rect6opaque4tags5title10resolution6renderAcA13CGSConnectionV_So6CGRectVSbSo10WindowTagsVSSSg04CoreC07CGFloatVySo12CGContextRefaXEtcfC
__int64 __fastcall CGSWindow.init(connection:rect:opaque:tags:title:resolution:render:)(
        __int64 a1,
        char a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void (*a6)(void),
        double a7,
        double a8,
        double a9,
        double a10,
        double a11)
{
  void *v18; // x0
  void *v19; // x23
  id v20; // x0
  void *v21; // x25
  __int64 v22; // x21
  __int64 v23; // x0
  void *v24; // x20
  __int64 v25; // x27
  CGContextRef_optional v26; // x0
  CGContext *value; // x24
  _DWORD v29[6]; // [xsp-30h] [xbp-E0h] BYREF
  void *v30; // [xsp-18h] [xbp-C8h]
  __int64 v31; // [xsp-10h] [xbp-C0h]
  unsigned int *v32; // [xsp-8h] [xbp-B8h]
  _QWORD v33[3]; // [xsp+8h] [xbp-A8h] BYREF
  unsigned int v34; // [xsp+24h] [xbp-8Ch] BYREF

  type metadata accessor for CGRegion(0LL);
  v18 = (void *)static CGRegionRef.new(_:)();
  v19 = v18;
  if ( (a2 & 1) != 0 )
    v20 = objc_retain(v18);
  else
    v20 = (id)static CGRegionRef.new()();
  v21 = v20;
  v34 = 0;
  v29[4] = a1;
  v30 = v19;
  v31 = __chkstk_darwin(v20);
  v32 = &v34;
  WindowTags.asUnsafePointer<A>(_:)(&type metadata for (), sub_100019738, v29, a3, &type metadata for () + 1);
  v22 = v34;
  if ( v34 )
  {
    if ( a5 )
    {
      v23 = swift_bridgeObjectRetain(a5);
      v24 = (void *)sub_10001B1EC(v23);
      v33[0] = a4;
      v33[1] = a5;
      swift_bridgeObjectRetain(a5);
      v25 = sub_10001D0F0(v33, &type metadata for String);
      CGSSetWindowProperty(a1, v22, v24, v25);
      swift_bridgeObjectRelease_n(a5, 2LL);
      objc_release(v24);
      swift_unknownObjectRelease(v25);
    }
    if ( a11 != 1.0 )
      CGSSetWindowResolution(a1, v22, a11);
    v26.value = CGSWindow.makeContext(connection:)((EyeCandyGraphics::CGSConnection)a1).value;
    if ( v26.value )
    {
      value = v26.value;
      a6();
      CGContextFlush(value);
      objc_release(value);
    }
    objc_release(v21);
    objc_release(v19);
  }
  else
  {
    objc_release(v21);
    objc_release(v19);
    swift_bridgeObjectRelease(a5);
  }
  return v22;
}