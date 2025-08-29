_uarpProcessingStatusToString
const char *__fastcall uarpProcessingStatusToString(int a1)
{
  if ( (unsigned int)(a1 - 1) > 4 )
    return "<unknown>";
  else
    return (&off_100024750)[(__int16)(a1 - 1)];
}