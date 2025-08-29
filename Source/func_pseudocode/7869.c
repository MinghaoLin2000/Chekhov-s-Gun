_$s16EyeCandyGraphics9CGSWindowV12setTransform_10connectionySo08CGAffineF0V_AA13CGSConnectionVtF
// local variable allocation has failed, the output may be wrong!
Swift::Void __swiftcall CGSWindow.setTransform(_:connection:)(
        CGAffineTransform *_,
        EyeCandyGraphics::CGSConnection connection)
{
  __int64 v2; // x2
  __int128 v3; // q1
  _OWORD v4[3]; // [xsp+0h] [xbp-30h] BYREF

  v3 = *(_OWORD *)&_->c;
  v4[0] = *(_OWORD *)&_->a;
  v4[1] = v3;
  v4[2] = *(_OWORD *)&_->tx;
  CGSSetWindowTransformAtPlacement(*(_QWORD *)&connection.cid, v2, 0LL, 0LL, v4);
}