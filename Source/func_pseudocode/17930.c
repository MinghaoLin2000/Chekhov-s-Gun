-[IKPTRecentsService repositoryPath]
id __cdecl -[IKPTRecentsService repositoryPath](IKPTRecentsService *self, SEL a2)
{
  NSString *v2; // x19
  NSString *v3; // x20
  NSString *v4; // x21
  NSString *v5; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue(NSHomeDirectory());
  v3 = objc_retainAutoreleasedReturnValue(-[NSString stringByAppendingPathComponent:](v2, "stringByAppendingPathComponent:", CFSTR("Library")));
  v4 = objc_retainAutoreleasedReturnValue(-[NSString stringByAppendingPathComponent:](v3, "stringByAppendingPathComponent:", CFSTR("Images")));
  objc_release(v3);
  objc_release(v2);
  v5 = objc_retainAutoreleasedReturnValue(-[NSString stringByAppendingPathComponent:](v4, "stringByAppendingPathComponent:", CFSTR("Recent Pictures")));
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}