_$s16EyeCandyGraphics9CGSWindowV8getTitle10connectionSSSgAA13CGSConnectionV_tF
// local variable allocation has failed, the output may be wrong!
Swift::String_optional __swiftcall CGSWindow.getTitle(connection:)(EyeCandyGraphics::CGSConnection connection)
{
  __int64 v1; // x0
  int v2; // w0
  bool v3; // zf
  void *v4; // x1
  Swift::String_optional result; // x0
  _QWORD v6[2]; // [xsp+8h] [xbp-18h] BYREF
  __int64 v7; // [xsp+18h] [xbp-8h] BYREF

  v1 = ((__int64 (__fastcall *)(__int64, unsigned __int64, _QWORD))CGSWindow.getProperty(forKey:connection:))(
         0x646E69575347436BLL,
         0xEF656C746954776FLL,
         *(_QWORD *)&connection.cid);
  if ( v1 )
  {
    v7 = v1;
    v2 = swift_dynamicCast(v6, &v7, (char *)&type metadata for Swift.AnyObject + 8, &type metadata for String, 6LL);
    v3 = v2 == 0;
    if ( v2 )
      v1 = v6[0];
    else
      v1 = 0LL;
    if ( v3 )
      v4 = 0LL;
    else
      v4 = (void *)v6[1];
  }
  else
  {
    v4 = 0LL;
  }
  result.value._object = v4;
  result.value._countAndFlagsBits = v1;
  return result;
}