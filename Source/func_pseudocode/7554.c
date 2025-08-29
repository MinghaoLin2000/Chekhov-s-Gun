_$s16EyeCandyGraphics13CGSConnectionV17setCursorDragLockyyF
Swift::Void __swiftcall CGSConnection.setCursorDragLock()()
{
  __int64 v0; // x0
  __int64 v1; // x19
  __int64 v2; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v1 = v0;
  v2 = sub_10001CBD0(32LL, &type metadata for Bool);
  *(_QWORD *)(v2 + 16) = 32LL;
  *(_QWORD *)(v2 + 33) = 0LL;
  *(_QWORD *)(v2 + 49) = 0LL;
  *(_QWORD *)(v2 + 41) = 0LL;
  *(_QWORD *)(v2 + 56) = 0LL;
  *(_BYTE *)(v2 + 32) = 1;
  SLSSetCursorDragLock(v1, v2 + 32);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  swift_bridgeObjectRelease(v2);
}