_$sSo17SLSTransactionRefa16EyeCandyGraphicsE17setWindowProperty_3key5valueyAC9CGSWindowV_SSyptF
__int64 __fastcall SLSTransactionRef.setWindowProperty(_:key:value:)(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // x20
  void *v7; // x22
  __int64 v8; // x23
  __int64 v9; // x0
  __int64 v10; // x19
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v7 = (void *)sub_10001CAC0(a2, a3);
  v8 = *(_QWORD *)(a4 + 24);
  v9 = sub_100002CB0(a4, v8);
  v10 = sub_10001D0D0(v9, v8);
  SLSTransactionSetWindowProperty(v4, a1, v7, v10);
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return swift_unknownObjectRelease(v10);
}