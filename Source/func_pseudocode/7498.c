_$sSl16EyeCandyGraphicsAA8CGSSpaceV7ElementRtzrlE7windows_7options7setTags05clearI0SayAA9CGSWindowVGAA13CGSConnectionV_So29CGSWorkspaceWindowListOptionsVSo0nI0VARtF
__int64 __fastcall Collection<>.windows(_:options:setTags:clearTags:)(__int64 a1, __int64 a2)
{
  __int64 v2; // x0
  __int64 v3; // x6
  __int64 v4; // x0
  __int64 v5; // x0
  __int64 v6; // x19
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 result; // x0
  void *v10; // x0
  void *v11; // x24
  __int64 v12; // x0
  char v13; // cf
  char v14; // zf
  __int64 v15; // x0
  __int64 v16; // [xsp+68h] [xbp+68h]

  v2 = sub_1000120C4(a1, a2);
  v16 = v3;
  v4 = sub_1000121D4(v2);
  v5 = sub_100012218(v4);
  v6 = v5;
  if ( (unsigned __int64)v5 >> 62 )
  {
    if ( v5 >= 0 )
      v5 &= 0xFFFFFFFFFFFFFF8uLL;
    v5 = sub_10001D060(v5);
    v7 = v5;
    if ( !v5 )
      goto LABEL_15;
  }
  else
  {
    v7 = *(_QWORD *)((v5 & 0xFFFFFFFFFFFFFF8LL) + 0x10);
    if ( !v7 )
    {
LABEL_15:
      swift_bridgeObjectRelease(v6);
      return sub_1000120A8(_swiftEmptyArrayStorage, v16);
    }
  }
  v8 = sub_100012308(v5);
  result = sub_10001144C(v8);
  if ( (v7 & 0x8000000000000000LL) == 0 )
  {
    do
    {
      if ( (v6 & 0xC000000000000001LL) != 0 )
        v10 = (void *)sub_100012288(result);
      else
        v10 = (void *)sub_100012270(result);
      v11 = v10;
      UInt32.init(_:)((EyeCandyGraphics::SystemEventMask)objc_msgSend(v10, "unsignedIntValue"));
      objc_release(v11);
      v12 = sub_1000120E0();
      if ( v13 )
      {
        v15 = sub_100012168(v12);
        sub_10001144C(v15);
      }
      result = sub_1000121BC();
    }
    while ( !v14 );
    goto LABEL_15;
  }
  __break(1u);
  return result;
}