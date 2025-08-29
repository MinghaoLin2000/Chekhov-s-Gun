-[TSUDescription p_header]
id __cdecl -[TSUDescription p_header](TSUDescription *self, SEL a2)
{
  NSObject **p_object; // x20
  id WeakRetained; // x21
  const char *Name; // x22
  id v6; // x20
  __CFString *v7; // x19
  void *cfType; // x0
  CFTypeID v9; // x0
  CFStringRef v10; // x20
  __int64 vars8; // [xsp+48h] [xbp+8h]

  p_object = &self->_object;
  WeakRetained = objc_loadWeakRetained((id *)&self->_object);
  objc_release(WeakRetained);
  if ( WeakRetained )
  {
    Name = class_getName(self->_class);
    v6 = objc_loadWeakRetained((id *)p_object);
    v7 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithFormat:](
             &OBJC_CLASS___NSString,
             "stringWithFormat:",
             CFSTR("(%s*)%p%@"),
             Name,
             v6,
             self->_header));
    objc_release(v6);
  }
  else
  {
    cfType = self->_cfType;
    if ( cfType )
    {
      v9 = CFGetTypeID(cfType);
      v10 = CFCopyTypeIDDescription(v9);
      v7 = objc_retainAutoreleasedReturnValue(
             +[NSString stringWithFormat:](
               &OBJC_CLASS___NSString,
               "stringWithFormat:",
               CFSTR("(%@Ref)%p%@"),
               v10,
               self->_cfType,
               self->_header));
      CFRelease(v10);
    }
    else
    {
      v7 = CFSTR("(void*)nil");
    }
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}