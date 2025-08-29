-[NSString stringByTrimmingLeadingSpaces]
id __cdecl -[NSString stringByTrimmingLeadingSpaces](NSString *self, SEL a2)
{
  NSUInteger v3; // x0
  NSUInteger v4; // x21
  NSUInteger v5; // x20
  NSString *v6; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = -[NSString length](self, "length");
  if ( !v3 )
    goto LABEL_8;
  v4 = v3;
  v5 = 0LL;
  while ( (unsigned int)-[NSString characterAtIndex:](self, "characterAtIndex:", v5) <= 0x20 )
  {
    if ( v4 == ++v5 )
    {
      v5 = v4;
      break;
    }
  }
  if ( v5 )
    v6 = objc_retainAutoreleasedReturnValue(-[NSString substringFromIndex:](self, "substringFromIndex:", v5));
  else
LABEL_8:
    v6 = objc_retain(self);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}