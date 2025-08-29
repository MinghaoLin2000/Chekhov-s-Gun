_uarpProcessingFlagsReasonToString
const char *__fastcall uarpProcessingFlagsReasonToString(int a1)
{
  unsigned int v1; // w8
  unsigned __int64 v2; // t2

  HIDWORD(v2) = a1;
  LODWORD(v2) = a1 - 256;
  v1 = v2 >> 8;
  if ( v1 > 0xE )
    return "<unknown>";
  else
    return (&off_1000246D8)[v1];
}