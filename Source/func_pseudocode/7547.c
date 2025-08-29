_$s16EyeCandyGraphics13CGSConnectionV19backgroundEventMaskAA06SystemfG0Vvg
__int64 __fastcall CGSConnection.backgroundEventMask.getter(__int64 a1)
{
  __int64 v1; // x19
  __int64 v2; // x20
  __int64 v3; // x0
  _QWORD *v5; // [xsp+8h] [xbp-28h] BYREF
  unsigned int v6; // [xsp+10h] [xbp-20h]
  EyeCandyGraphics::SystemEventMask v7; // [xsp+14h] [xbp-1Ch] BYREF

  v7.rawValue = 0;
  if ( !(unsigned int)CGSGetBackgroundEventMask(a1, &v7) )
    return CGPoint.init(_:)(v7);
  v5 = _swiftEmptyArrayStorage;
  v1 = sub_100012EBC();
  v2 = sub_100002BF4(&unk_100029C88);
  v3 = sub_100012F08();
  sub_10001CE70(&v5, v2, v3, &type metadata for SystemEventMask, v1);
  return v6;
}