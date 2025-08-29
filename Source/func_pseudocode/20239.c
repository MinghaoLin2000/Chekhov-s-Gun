-[ipp_attribute_t debugDescription]
id __cdecl -[ipp_attribute_t debugDescription](ipp_attribute_t *self, SEL a2)
{
  id v3; // x19
  id v4; // x21
  NSString *v5; // x20
  objc_super v7; // [xsp+10h] [xbp-30h] BYREF
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v7.receiver = self;
  v7.super_class = (Class)&OBJC_CLASS___ipp_attribute_t;
  v3 = objc_retainAutoreleasedReturnValue(-[ipp_attribute_t description](&v7, "description"));
  v4 = objc_retainAutoreleasedReturnValue(-[ipp_attribute_t loggingDict](self, "loggingDict"));
  v5 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("%@ %@"), v3, v4));
  objc_release(v4);
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}