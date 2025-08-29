__Z8toString13http_status_t
__CFString *__fastcall toString(__int64 a1)
{
  __CFString *v1; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  if ( (unsigned int)a1 >= 7 )
    v1 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithFormat:](
             &OBJC_CLASS___NSString,
             "stringWithFormat:",
             CFSTR("Unknown http status %d"),
             a1));
  else
    v1 = off_100091438[(int)a1];
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v1);
}