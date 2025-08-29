_$s16EyeCandyGraphics9CGSWindowV20getAssociatedWindows10connectionSayACGAA13CGSConnectionV_tF
_QWORD *CGSWindow.getAssociatedWindows(connection:)()
{
  __int64 v0; // x0
  void *v1; // x20
  __int64 v2; // x19
  __int64 v3; // x21
  _QWORD *result; // x0
  __int64 i; // x22
  id v6; // x0
  void *v7; // x24
  unsigned int v8; // w23
  unsigned __int64 v9; // x8
  unsigned __int64 v10; // x27
  __int64 v11; // x21

  v0 = CGSCopyAssociatedWindows();
  if ( !v0 )
    return _swiftEmptyArrayStorage;
  v1 = (void *)v0;
  v2 = sub_10000E740();
  objc_release(v1);
  if ( !v2 )
    return _swiftEmptyArrayStorage;
  if ( !((unsigned __int64)v2 >> 62) )
  {
    v3 = *(_QWORD *)((v2 & 0xFFFFFFFFFFFFFF8LL) + 0x10);
    if ( v3 )
      goto LABEL_5;
LABEL_19:
    swift_bridgeObjectRelease(v2);
    return _swiftEmptyArrayStorage;
  }
  if ( v2 >= 0 )
    v11 = v2 & 0xFFFFFFFFFFFFFF8LL;
  else
    v11 = v2;
  swift_bridgeObjectRetain(v2);
  v3 = sub_10001D060(v11);
  swift_bridgeObjectRelease(v2);
  if ( !v3 )
    goto LABEL_19;
LABEL_5:
  result = (_QWORD *)sub_10001144C(0LL);
  if ( (v3 & 0x8000000000000000LL) == 0 )
  {
    for ( i = 0LL; i != v3; ++i )
    {
      if ( (v2 & 0xC000000000000001LL) != 0 )
        v6 = (id)sub_100011754(i, v2);
      else
        v6 = objc_retain(*(id *)(v2 + 8 * i + 32));
      v7 = v6;
      v8 = (unsigned int)objc_msgSend(v6, "unsignedIntValue");
      objc_release(v7);
      v10 = _swiftEmptyArrayStorage[2];
      v9 = _swiftEmptyArrayStorage[3];
      if ( v10 >= v9 >> 1 )
        sub_10001144C(v9 > 1);
      _swiftEmptyArrayStorage[2] = v10 + 1;
      *((_DWORD *)&_swiftEmptyArrayStorage[4] + v10) = v8;
    }
    goto LABEL_19;
  }
  __break(1u);
  return result;
}