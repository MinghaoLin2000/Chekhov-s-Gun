_uarpStatusCodeToString
const char *__fastcall uarpStatusCodeToString(unsigned int a1)
{
  if ( a1 > 0x3E )
    return "<unknown>";
  else
    return (&off_1000244B0)[a1];
}