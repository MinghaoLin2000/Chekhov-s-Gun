-[DocumentCompressor description]
id __cdecl -[DocumentCompressor description](DocumentCompressor *self, SEL a2)
{
  id v3; // x19
  NSString *v4; // x20
  objc_super v6; // [xsp+10h] [xbp-30h] BYREF
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v6.receiver = self;
  v6.super_class = (Class)&OBJC_CLASS___DocumentCompressor;
  v3 = objc_retainAutoreleasedReturnValue(-[DocumentCompressor description](&v6, "description"));
  v4 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("%@ { %@ }"), v3, self->_name));
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}