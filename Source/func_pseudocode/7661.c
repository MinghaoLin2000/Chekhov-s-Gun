_$sSo17SLSTransactionRefa16EyeCandyGraphicsE30batchReassociateWindowsToSpace_5spaceySayAC9CGSWindowVG_AC8CGSSpaceVtF
Swift::Void __swiftcall SLSTransactionRef.batchReassociateWindowsToSpace(_:space:)(
        Swift::OpaquePointer _,
        EyeCandyGraphics::CGSSpace space)
{
  __int64 v2; // x20
  __int64 v4; // x22
  int *v6; // x24
  unsigned __int64 v7; // x25
  int v8; // w26
  int v9; // t1
  unsigned __int64 v10; // x8
  void *v11; // x22
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v4 = *((_QWORD *)_._rawValue + 2);
  if ( v4 )
  {
    sub_10000A970(0LL, v4, 0LL);
    v6 = (int *)((char *)_._rawValue + 32);
    v7 = _swiftEmptyArrayStorage[2];
    do
    {
      v9 = *v6++;
      v8 = v9;
      v10 = _swiftEmptyArrayStorage[3];
      if ( v7 >= v10 >> 1 )
        sub_10000A970(v10 > 1, v7 + 1, 1LL);
      _swiftEmptyArrayStorage[2] = v7 + 1;
      *((_DWORD *)&_swiftEmptyArrayStorage[4] + v7++) = v8;
      --v4;
    }
    while ( v4 );
  }
  v11 = (void *)sub_10001CB60(_swiftEmptyArrayStorage, &type metadata for UInt32);
  swift_bridgeObjectRelease(_swiftEmptyArrayStorage);
  SLSTransactionBatchReassociateWindowsToSpace(v2, v11, space.spid);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v11);
}