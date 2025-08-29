-[Document init]
Document *__cdecl -[Document init](Document *self, SEL a2)
{
  Document *v2; // x19
  NSUserDefaults *v3; // x20
  NSData *mRTFDData; // x0
  NSDate *v5; // x0
  NSDate *mCreationDate; // x8
  NSDate *v7; // x0
  NSDate *mModificationDate; // x8
  float v9; // s0
  CGFloat v10; // d8
  float v11; // s0
  objc_super v13; // [xsp+0h] [xbp-40h] BYREF

  v13.receiver = self;
  v13.super_class = (Class)&OBJC_CLASS___Document;
  v2 = -[Document init](&v13, "init");
  if ( v2 )
  {
    v3 = objc_retainAutoreleasedReturnValue(+[NSUserDefaults standardUserDefaults](&OBJC_CLASS___NSUserDefaults, "standardUserDefaults"));
    mRTFDData = v2->mRTFDData;
    v2->mRTFDData = 0LL;
    objc_release(mRTFDData);
    v2->mWindowColor = (unsigned int)-[NSUserDefaults integerForKey:](v3, "integerForKey:", CFSTR("ColourIndex"));
    v2->mWindowFlags = (unsigned int)-[NSUserDefaults integerForKey:](v3, "integerForKey:", CFSTR("WindowFlags"));
    v5 = objc_retainAutoreleasedReturnValue(+[NSDate date](&OBJC_CLASS___NSDate, "date"));
    mCreationDate = v2->mCreationDate;
    v2->mCreationDate = v5;
    objc_release(mCreationDate);
    v7 = objc_retainAutoreleasedReturnValue(+[NSDate date](&OBJC_CLASS___NSDate, "date"));
    mModificationDate = v2->mModificationDate;
    v2->mModificationDate = v7;
    objc_release(mModificationDate);
    -[NSUserDefaults floatForKey:](v3, "floatForKey:", CFSTR("ViewWidth"));
    v10 = v9;
    -[NSUserDefaults floatForKey:](v3, "floatForKey:", CFSTR("ViewHeight"));
    v2->mWindowFrame.origin = (CGPoint)vdupq_n_s64(0x4059000000000000uLL);
    v2->mWindowFrame.size.width = v10;
    v2->mWindowFrame.size.height = v11;
    objc_release(v3);
  }
  return v2;
}