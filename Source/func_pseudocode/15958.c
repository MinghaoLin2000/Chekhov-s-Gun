_uarpApplyFlagsToString
const char *__fastcall uarpApplyFlagsToString(int a1)
{
  if ( (unsigned int)(a1 - 1) > 5 )
    return "<unknown>";
  else
    return (&off_1000246A8)[a1 - 1];
}