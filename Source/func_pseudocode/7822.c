_$s16EyeCandyGraphics9CGSWindowV10connection4type5shape11opaqueShape5flags4tagsAcA13CGSConnectionV_So14CGSBackingTypeVSo11CGRegionRefaAOs5Int32VSo10WindowTagsVtcfC
__int64 __fastcall CGSWindow.init(connection:type:shape:opaqueShape:flags:tags:)(
        __int64 a1,
        __int64 a2,
        void *a3,
        void *a4)
{
  __int64 v6; // x8
  __int64 v7; // x5
  unsigned int v9; // [xsp+Ch] [xbp-64h]
  _BYTE v10[48]; // [xsp+10h] [xbp-60h] BYREF
  __int64 v11; // [xsp+40h] [xbp-30h]

  sub_10001B228();
  v11 = v6;
  WindowTags.asUnsafePointer<A>(_:)(&type metadata for (), sub_10001937C, v10, v7, &type metadata for () + 1);
  objc_release(a3);
  objc_release(a4);
  return v9;
}