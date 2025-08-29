_$s16EyeCandyGraphics8CGSSpaceV12getTransform10connectionSo08CGAffineF0VAA13CGSConnectionV_tF
// local variable allocation has failed, the output may be wrong!
void __swiftcall CGSSpace.getTransform(connection:)(
        CGAffineTransform *__return_ptr retstr,
        EyeCandyGraphics::CGSConnection connection)
{
  __int128 v3; // q1
  __int128 v4; // q2
  _OWORD v5[3]; // [xsp+0h] [xbp-50h] BYREF
  int v6; // [xsp+34h] [xbp-1Ch]

  v6 = 0;
  CGSSpaceGetTransform(v5, *(_QWORD *)&connection.cid);
  v3 = v5[1];
  v4 = v5[2];
  *(_OWORD *)&retstr->a = v5[0];
  *(_OWORD *)&retstr->c = v3;
  *(_OWORD *)&retstr->tx = v4;
}