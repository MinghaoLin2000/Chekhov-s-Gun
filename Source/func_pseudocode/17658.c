-[ModelKeyServerAPIFetchKeyResult keyAsString:]
// local variable allocation has failed, the output may be wrong!
id __cdecl -[ModelKeyServerAPIFetchKeyResult keyAsString:](ModelKeyServerAPIFetchKeyResult *self, SEL a2, int a3)
{
  __CFString *v3; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  if ( (unsigned int)a3 >= 3 )
    v3 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithFormat:](
             &OBJC_CLASS___NSString,
             "stringWithFormat:",
             CFSTR("(unknown: %i)"),
             *(_QWORD *)&a3));
  else
    v3 = off_1000102F8[a3];
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}