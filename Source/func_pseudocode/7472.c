_$s16EyeCandyGraphics8CGSSpaceV9setValues_10connectionySDySSyXlG_AA13CGSConnectionVtF
// local variable allocation has failed, the output may be wrong!
Swift::Void __swiftcall CGSSpace.setValues(_:connection:)(
        Swift::OpaquePointer _,
        EyeCandyGraphics::CGSConnection connection)
{
  __int64 v2; // x2
  __int64 v3; // x19
  __int64 v4; // x20
  void *v5; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( *((_QWORD *)_._rawValue + 2) )
  {
    v3 = v2;
    v4 = *(_QWORD *)&connection.cid;
    v5 = (void *)sub_10001CA60(
                   _._rawValue,
                   &type metadata for String,
                   (char *)&type metadata for Swift.AnyObject + 8,
                   &protocol witness table for String);
    CGSSpaceSetValues(v4, v3, v5);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    objc_release(v5);
  }
}