_$s16EyeCandyGraphics8CGSSpaceV9getValues10connectionSDySSyXlGAA13CGSConnectionV_tF
__int64 CGSSpace.getValues(connection:)()
{
  __int64 v0; // x0
  void *v1; // x19
  __int64 v2; // x21
  __int64 v4; // x20
  __int64 v5; // [xsp+8h] [xbp-28h] BYREF
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v0 = CGSSpaceCopyValues();
  if ( v0 )
  {
    v1 = (void *)v0;
    v5 = 0LL;
    sub_10001CA70(
      v0,
      &v5,
      &type metadata for String,
      (char *)&type metadata for Swift.AnyObject + 8,
      &protocol witness table for String);
    v2 = v5;
    if ( v5 )
    {
      objc_release(v1);
      return v2;
    }
    else
    {
      v4 = sub_10001CA80(
             _swiftEmptyArrayStorage,
             &type metadata for String,
             (char *)&type metadata for Swift.AnyObject + 8,
             &protocol witness table for String);
      objc_release(v1);
      return v4;
    }
  }
  else
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return sub_10001CA80(
             _swiftEmptyArrayStorage,
             &type metadata for String,
             (char *)&type metadata for Swift.AnyObject + 8,
             &protocol witness table for String);
  }
}