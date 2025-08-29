_$s16EyeCandyGraphics9CGSWindowV4move2to10connectionySo7CGPointV_AA13CGSConnectionVtF
__int64 __fastcall CGSWindow.move(to:connection:)(__int64 a1, __int64 a2, double a3, double a4)
{
  _QWORD v5[2]; // [xsp+8h] [xbp-18h] BYREF

  *(double *)v5 = a3;
  *(double *)&v5[1] = a4;
  return CGSMoveWindow(a1, a2, v5);
}