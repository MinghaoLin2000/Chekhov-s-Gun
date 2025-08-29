_$s16EyeCandyGraphics9CGSWindowV11setProperty_6forKey10connectionyyp_SSAA13CGSConnectionVtF
__int64 __fastcall CGSWindow.setProperty(_:forKey:connection:)(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  void *v8; // x22
  __int64 v9; // x23
  __int64 v10; // x0
  __int64 v11; // x21
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v8 = (void *)sub_10001CAC0(a2, a3);
  v9 = *(_QWORD *)(a1 + 24);
  v10 = sub_100002CB0(a1, v9);
  v11 = sub_10001D0D0(v10, v9);
  CGSSetWindowProperty(a4, a5, v8, v11);
  objc_release(v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return swift_unknownObjectRelease(v11);
}