_$s16EyeCandyGraphics9CGSWindowV10connection4type5shape11opaqueShape5flags4tags7contextAcA13CGSConnectionV_So14CGSBackingTypeVSo11CGRegionRefaAPs5Int32VSo10WindowTagsVSo9CAContextCtcfC
__int64 __fastcall CGSWindow.init(connection:type:shape:opaqueShape:flags:tags:context:)(
        __int64 a1,
        __int64 a2,
        void *a3,
        void *a4,
        __int64 a5,
        __int64 a6,
        void *a7)
{
  __int64 v10; // x6
  __int64 v11; // x8
  __int64 v12; // x5
  unsigned int v14; // [xsp+Ch] [xbp-74h]
  _BYTE v15[48]; // [xsp+10h] [xbp-70h] BYREF
  __int64 v16; // [xsp+40h] [xbp-40h]
  __int64 v17; // [xsp+48h] [xbp-38h]

  sub_10001B228();
  v16 = v11;
  v17 = v10;
  WindowTags.asUnsafePointer<A>(_:)(&type metadata for (), sub_100019468, v15, v12, &type metadata for () + 1);
  objc_release(a3);
  objc_release(a4);
  objc_release(a7);
  return v14;
}