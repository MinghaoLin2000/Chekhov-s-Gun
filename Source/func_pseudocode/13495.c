-[NSString tsu_substringWithComposedCharacterSequencesToFileSystemLength:]
id __cdecl -[NSString tsu_substringWithComposedCharacterSequencesToFileSystemLength:](
        NSString *self,
        SEL a2,
        unsigned __int64 a3)
{
  NSUInteger v5; // x20
  NSUInteger v6; // x21
  unsigned __int64 v7; // x26
  void *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x23
  NSString *v11; // x24
  const char *v12; // x25
  NSString *v13; // x0
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v5 = -[NSString length](self, "length");
  v6 = 0LL;
  if ( v5 )
  {
    v7 = 0LL;
    do
    {
      v8 = -[NSString rangeOfComposedCharacterSequenceAtIndex:](self, "rangeOfComposedCharacterSequenceAtIndex:", v6);
      v10 = v9;
      v11 = objc_retainAutorelease(objc_retainAutoreleasedReturnValue(-[NSString substringWithRange:](self, "substringWithRange:", v8, v9)));
      v12 = -[NSString fileSystemRepresentation](v11, "fileSystemRepresentation");
      objc_release(v11);
      v7 += strlen(v12);
      if ( v7 > a3 )
        break;
      v6 += v10;
    }
    while ( v6 < v5 );
  }
  if ( v6 == v5 )
    v13 = objc_retain(self);
  else
    v13 = objc_retainAutoreleasedReturnValue(-[NSString substringToIndex:](self, "substringToIndex:", v6));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v13);
}