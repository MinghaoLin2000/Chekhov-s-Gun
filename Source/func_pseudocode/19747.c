-[ColorInfo init]
ColorInfo *__cdecl -[ColorInfo init](ColorInfo *self, SEL a2)
{
  ColorInfo *v2; // x0
  ColorInfo *v3; // x19
  NSString *strokeColorspace; // x0
  NSString *nonStrokeColorspace; // x0
  NSMutableArray *v6; // x0
  NSMutableArray *gstateStack; // x8
  objc_super v9; // [xsp+0h] [xbp-20h] BYREF

  v9.receiver = self;
  v9.super_class = (Class)&OBJC_CLASS___ColorInfo;
  v2 = -[ColorInfo init](&v9, "init");
  v3 = v2;
  if ( v2 )
  {
    strokeColorspace = v2->strokeColorspace;
    v3->strokeColorspace = (NSString *)CFSTR("DeviceGray");
    objc_release(strokeColorspace);
    nonStrokeColorspace = v3->nonStrokeColorspace;
    v3->nonStrokeColorspace = (NSString *)CFSTR("DeviceGray");
    objc_release(nonStrokeColorspace);
    v6 = objc_retainAutoreleasedReturnValue(+[NSMutableArray arrayWithCapacity:](&OBJC_CLASS___NSMutableArray, "arrayWithCapacity:", 5LL));
    gstateStack = v3->gstateStack;
    v3->gstateStack = v6;
    objc_release(gstateStack);
  }
  return v3;
}