__fullProcessNameForPid
NSString *_fullProcessNameForPid()
{
  int v0; // w0
  int v1; // w19
  NSString *v2; // x0
  char buffer[4096]; // [xsp+8h] [xbp-1018h] BYREF
  __int64 vars8; // [xsp+1028h] [xbp+8h]

  v0 = __chkstk_darwin();
  if ( v0 < 1 || (v1 = v0, bzero(buffer, 0x1000uLL), proc_pidpath(v1, buffer, 0x1000u) < 1) )
  {
    v2 = 0LL;
  }
  else
  {
    buffer[4095] = 0;
    v2 = objc_retainAutoreleasedReturnValue(+[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", basename(buffer)));
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v2);
}