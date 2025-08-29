_$s16EyeCandyGraphics13CGSConnectionV3set8property6forKeyyyp_SStF
__int64 __fastcall CGSConnection.set(property:forKey:)(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // x21
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = (void *)sub_10001CAC0(a2, a3);
  v7 = *(_QWORD *)(a1 + 24);
  v8 = sub_100002CB0(a1, v7);
  v9 = sub_10001D0D0(v8, v7);
  CGSSetConnectionProperty(a4, a4, v6, v9);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return swift_unknownObjectRelease(v9);
}