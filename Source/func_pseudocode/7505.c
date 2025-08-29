_$s16EyeCandyGraphics8CGSSpaceV10addWindows_12removingFrom10connectionySayAA9CGSWindowVG_So0D11ListOptionsVAA13CGSConnectionVtF
void __fastcall CGSSpace.addWindows(_:removingFrom:connection:)(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // x23
  __int64 v8; // x0
  void *v9; // x20

  if ( *(_QWORD *)(a1 + 16) )
  {
    v7 = sub_100002BF4(&unk_100029BE0);
    v8 = sub_100011A98(v7);
    v9 = (void *)Collection<>.cfarray.getter(v7, v8);
    CGSSpaceAddWindowsAndRemoveFromSpaces(a3, a4, v9, a2);
    objc_release(v9);
  }
}