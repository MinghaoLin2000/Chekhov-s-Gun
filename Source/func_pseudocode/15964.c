_uarpLoggingCategoryToString
const char *__fastcall uarpLoggingCategoryToString(unsigned int a1)
{
  if ( a1 > 8 )
    return "<unknown>";
  else
    return (&off_100024778)[a1];
}