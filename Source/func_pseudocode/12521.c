-[NSURL tsu_reachableFileURLByDeletingUnreachablePathComponents]
id __cdecl -[NSURL tsu_reachableFileURLByDeletingUnreachablePathComponents](NSURL *self, SEL a2)
{
  NSURL *v3; // x19
  NSString *v4; // x20
  NSUInteger v5; // x21
  NSURL *v6; // x20
  NSURL *v7; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( -[NSURL isFileURL](self, "isFileURL") )
  {
    v3 = objc_retain(self);
    while ( 1 )
    {
      v4 = objc_retainAutoreleasedReturnValue(-[NSURL path](v3, "path"));
      v5 = -[NSString length](v4, "length");
      objc_release(v4);
      if ( v5 < 3 )
        break;
      if ( -[NSURL checkResourceIsReachableAndReturnError:](v3, "checkResourceIsReachableAndReturnError:", 0LL) )
      {
        v6 = objc_retain(v3);
        v3 = v6;
        if ( v6 )
          goto LABEL_10;
      }
      else
      {
        v7 = objc_retainAutoreleasedReturnValue(-[NSURL URLByDeletingLastPathComponent](v3, "URLByDeletingLastPathComponent"));
        objc_release(v3);
        v3 = v7;
      }
    }
    v6 = 0LL;
LABEL_10:
    objc_release(v3);
  }
  else
  {
    v6 = 0LL;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}