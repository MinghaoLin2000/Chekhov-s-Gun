_$s16EyeCandyGraphics8CGSSpaceV7getName10connectionSSSgAA13CGSConnectionV_tF
// local variable allocation has failed, the output may be wrong!
Swift::String_optional __swiftcall CGSSpace.getName(connection:)(EyeCandyGraphics::CGSConnection connection)
{
  __int64 v1; // x0
  void *v2; // x1
  Swift::String_optional result; // x0

  v1 = sub_10000EFB0(*(_QWORD *)&connection.cid);
  result.value._object = v2;
  result.value._countAndFlagsBits = v1;
  return result;
}