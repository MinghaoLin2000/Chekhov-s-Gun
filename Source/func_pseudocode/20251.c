-[ipp_t init]
ipp_t *__cdecl -[ipp_t init](ipp_t *self, SEL a2)
{
  ipp_t *v2; // x19
  NSMutableArray *v3; // x0
  NSMutableArray *attrs; // x8
  objc_super v6; // [xsp+0h] [xbp-20h] BYREF

  v6.receiver = self;
  v6.super_class = (Class)&OBJC_CLASS___ipp_t;
  v2 = -[ipp_t init](&v6, "init");
  if ( v2 )
  {
    v3 = objc_opt_new(&OBJC_CLASS___NSMutableArray);
    attrs = v2->_attrs;
    v2->_attrs = v3;
    objc_release(attrs);
  }
  return v2;
}