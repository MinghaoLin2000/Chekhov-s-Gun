_$sSo19CGSSpaceListOptionsV16EyeCandyGraphicsE7windows_7options7setTags05clearJ010connectionSayAC9CGSWindowVGAC13CGSConnectionV_So018CGSWorkspaceWindowbC0VSo0pJ0VAqMtF
__int64 __fastcall CGSSpaceListOptions.windows(_:options:setTags:clearTags:connection:)(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6)
{
  __int64 v7; // x0
  _QWORD *v8; // x0
  unsigned __int64 v9; // x19
  _QWORD *v10; // x20
  __int64 v11; // x0
  __int64 v12; // x8
  __int64 v13; // x9
  __int64 v14; // x21
  __int64 result; // x0
  void *v16; // x0
  void *v17; // x24
  unsigned __int64 v18; // x8
  char v19; // zf
  __int64 v20; // x0
  _QWORD v21[3]; // [xsp+0h] [xbp-90h] BYREF
  int v22; // [xsp+18h] [xbp-78h]
  int v23; // [xsp+1Ch] [xbp-74h]
  int v24; // [xsp+20h] [xbp-70h]
  int v25; // [xsp+24h] [xbp-6Ch]
  _QWORD *v26; // [xsp+38h] [xbp-58h] BYREF

  v21[2] = a4;
  v22 = a5;
  v23 = a1;
  v24 = a6;
  v25 = a2;
  v7 = sub_100002BF4(&unk_100029C38);
  v8 = WindowTags.asUnsafePointer<A>(_:)(&v26, sub_100011C38, v21, a3, v7);
  v9 = (unsigned __int64)v26;
  v10 = _swiftEmptyArrayStorage;
  if ( !v26 )
    return (__int64)v10;
  v11 = sub_1000122A0(v8);
  if ( v13 )
  {
    sub_10001214C(v11);
    v20 = sub_10001D060(0LL);
    sub_1000122D0(v20);
    goto LABEL_15;
  }
  v14 = *(_QWORD *)(v12 + 16);
  if ( !v14 )
  {
LABEL_15:
    swift_bridgeObjectRelease(v9);
    return (__int64)v10;
  }
  v26 = _swiftEmptyArrayStorage;
  result = sub_10001144C(0LL);
  if ( (v14 & 0x8000000000000000LL) == 0 )
  {
    v10 = v26;
    do
    {
      if ( (v9 & 0xC000000000000001LL) != 0 )
        v16 = (void *)sub_100012288(result);
      else
        v16 = (void *)sub_100012270(result);
      v17 = v16;
      UInt32.init(_:)((EyeCandyGraphics::SystemEventMask)objc_msgSend(v16, "unsignedIntValue"));
      objc_release(v17);
      v26 = v10;
      v18 = v10[3];
      if ( v10[2] >= v18 >> 1 )
      {
        sub_10001144C(v18 > 1);
        v10 = v26;
      }
      result = sub_1000121BC();
    }
    while ( !v19 );
    goto LABEL_15;
  }
  __break(1u);
  return result;
}