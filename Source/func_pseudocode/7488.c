_$s16EyeCandyGraphics8CGSSpaceV10setDisplay_11isAnimating10connectionySS_SbAA13CGSConnectionVtFZ
void __fastcall static CGSSpace.setDisplay(_:isAnimating:connection:)(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  void *v6; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = (void *)sub_10001CAC0(a1, a2);
  CGSManagedDisplaySetIsAnimating(a4, v6, a3 & 1);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}