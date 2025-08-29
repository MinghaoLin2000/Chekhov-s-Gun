+[AMParametersObserver _keyPathForParametersName:]
id __cdecl +[AMParametersObserver _keyPathForParametersName:](id a1, SEL a2, id a3)
{
  __int64 v3; // x30
  NSString *v4; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  if ( a3 )
  {
    v4 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("parameters.%@"), a3));
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
  }
  else
  {
    v4 = 0LL;
    if ( ((v3 ^ (2 * v3)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
  }
  return objc_autoreleaseReturnValue(v4);
}