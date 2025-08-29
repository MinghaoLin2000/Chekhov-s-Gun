-[NSString tsu_keyPathByAppendingKey:]
id __cdecl -[NSString tsu_keyPathByAppendingKey:](NSString *self, SEL a2, id a3)
{
  id v4; // x19
  NSString *v5; // x0
  NSString *v6; // x2
  NSString *v7; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  if ( -[NSString length](self, "length") )
  {
    if ( objc_msgSend(v4, "length") )
    {
      v5 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("%@.%@"), self, v4));
      goto LABEL_7;
    }
    v6 = self;
  }
  else
  {
    v6 = (NSString *)v4;
  }
  v5 = objc_retainAutoreleasedReturnValue(+[NSString stringWithString:](&OBJC_CLASS___NSString, "stringWithString:", v6));
LABEL_7:
  v7 = v5;
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}