-[IKPTRecentsService oldRepositoryPath]
id __cdecl -[IKPTRecentsService oldRepositoryPath](IKPTRecentsService *self, SEL a2)
{
  uid_t v2; // w0
  NSString *v3; // x19
  NSString *v4; // x20
  NSString *v5; // x19
  NSString *v6; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v2 = getuid();
  v3 = objc_retainAutoreleasedReturnValue(
         +[NSString stringWithCString:encoding:](
           &OBJC_CLASS___NSString,
           "stringWithCString:encoding:",
           getpwuid(v2)->pw_dir,
           4LL));
  v4 = objc_retainAutoreleasedReturnValue(-[NSString stringByAppendingPathComponent:](v3, "stringByAppendingPathComponent:", CFSTR("Library")));
  objc_release(v3);
  v5 = objc_retainAutoreleasedReturnValue(-[NSString stringByAppendingPathComponent:](v4, "stringByAppendingPathComponent:", CFSTR("Images")));
  v6 = objc_retainAutoreleasedReturnValue(
         -[NSString stringByAppendingPathComponent:](
           v5,
           "stringByAppendingPathComponent:",
           CFSTR("iChat Recent Pictures")));
  objc_release(v5);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}