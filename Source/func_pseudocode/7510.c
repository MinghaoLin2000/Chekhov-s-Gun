_$s16EyeCandyGraphics8CGSSpaceV20getManagedSpacesInfo10connectionSaySDySSyXlGGAA13CGSConnectionV_tFZ
__int64 static CGSSpace.getManagedSpacesInfo(connection:)()
{
  __int64 v0; // x19
  __int64 v1; // x0
  __int64 v2; // x0

  if ( !CGSCopyManagedDisplaySpaces() || (v1 = sub_10000E6E4(), sub_100012134(v1), !v0) )
  {
    v2 = sub_100002BF4(&unk_100029BF8);
    v0 = swift_allocObject(v2, 40LL, 7LL);
    *(_OWORD *)(v0 + 16) = xmmword_10001FC20;
    *(_QWORD *)(v0 + 32) = sub_10001CA80(
                             _swiftEmptyArrayStorage,
                             &type metadata for String,
                             (char *)&type metadata for Swift.AnyObject + 8,
                             &protocol witness table for String);
    swift_bridgeObjectRelease(0LL);
  }
  return v0;
}