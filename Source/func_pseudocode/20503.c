-[PrintInfoSet init]
PrintInfoSet *__cdecl -[PrintInfoSet init](PrintInfoSet *self, SEL a2)
{
  PrintInfoSet *v2; // x19
  NSMutableDictionary *v3; // x0
  NSMutableDictionary *uuidToPrinters; // x8
  objc_super v6; // [xsp+0h] [xbp-20h] BYREF

  v6.receiver = self;
  v6.super_class = (Class)&OBJC_CLASS___PrintInfoSet;
  v2 = -[PrintInfoSet init](&v6, "init");
  if ( v2 )
  {
    v3 = objc_opt_new(&OBJC_CLASS___NSMutableDictionary);
    uuidToPrinters = v2->_uuidToPrinters;
    v2->_uuidToPrinters = v3;
    objc_release(uuidToPrinters);
  }
  return v2;
}