+[LSRAudioDump filenameForTaskIdentifier:]
id __cdecl +[LSRAudioDump filenameForTaskIdentifier:](id a1, SEL a2, id a3)
{
  id v3; // x19
  NSString *v4; // x20
  timeval v6; // [xsp+40h] [xbp-90h] BYREF
  tm v7; // [xsp+50h] [xbp-80h] BYREF
  __int64 vars8; // [xsp+D8h] [xbp+8h]

  memset(&v7, 0, sizeof(v7));
  v6.tv_sec = 0LL;
  *(_QWORD *)&v6.tv_usec = 0LL;
  v3 = objc_retain(a3);
  gettimeofday(&v6, 0LL);
  localtime_r(&v6.tv_sec, &v7);
  v4 = objc_retainAutoreleasedReturnValue(
         +[NSString stringWithFormat:](
           &OBJC_CLASS___NSString,
           "stringWithFormat:",
           CFSTR("%@-%04d%02d%02d-%02d%02d%02d.%d.wav"),
           v3,
           (unsigned int)(v7.tm_year + 1900),
           (unsigned int)(v7.tm_mon + 1),
           (unsigned int)v7.tm_mday,
           (unsigned int)v7.tm_hour,
           (unsigned int)v7.tm_min,
           (unsigned int)v7.tm_sec,
           getpid(),
           v6.tv_sec,
           *(_QWORD *)&v6.tv_usec));
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}