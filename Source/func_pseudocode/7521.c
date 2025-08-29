_$sSl16EyeCandyGraphicsAA8CGSSpaceV7ElementRtzrlE9nswindows_7options7setTags05clearI010connectionSaySo8NSNumberCGAA13CGSConnectionV_So29CGSWorkspaceWindowListOptionsVSo0oI0VAsOtF
_QWORD *__fastcall Collection<>.nswindows(_:options:setTags:clearTags:connection:)(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // x20
  __int64 v15; // x0
  __int64 v17; // x0
  _QWORD v18[5]; // [xsp-40h] [xbp-A0h] BYREF
  int v19; // [xsp-18h] [xbp-78h]
  int v20; // [xsp-14h] [xbp-74h]
  __int64 v21; // [xsp-10h] [xbp-70h]
  int v22; // [xsp-8h] [xbp-68h]
  __int64 v23; // [xsp+8h] [xbp-58h] BYREF

  v15 = sub_10001CC50(a6, a7);
  if ( (v15 & 1) != 0 )
    return _swiftEmptyArrayStorage;
  __chkstk_darwin(v15);
  v18[2] = a6;
  v18[3] = a7;
  v18[4] = a4;
  v19 = a5;
  v20 = a1;
  v21 = v7;
  v22 = a2;
  v17 = sub_100002BF4(&unk_100029C30);
  WindowTags.asUnsafePointer<A>(_:)(&v23, sub_100011BA8, v18, a3, v17);
  return (_QWORD *)v23;
}