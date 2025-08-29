-[IFDBundle initWithPath:]
IFDBundle *__cdecl -[IFDBundle initWithPath:](IFDBundle *self, SEL a2, id a3)
{
  id v4; // x19
  IFDBundle *v5; // x20
  NSMutableArray *v6; // x0
  NSMutableArray *usedLuns; // x8
  NSURL *v8; // x21
  __CFBundle *v9; // x0
  os_log_s *v10; // x22
  IFDBundle *v11; // x21
  os_log_s *v12; // x22
  os_log_s *v13; // x23
  CFErrorRef error; // [xsp+8h] [xbp-48h] BYREF
  objc_super v16; // [xsp+10h] [xbp-40h] BYREF

  v4 = objc_retain(a3);
  v16.receiver = self;
  v16.super_class = (Class)&OBJC_CLASS___IFDBundle;
  v5 = -[IFDBundle init](&v16, "init");
  if ( v5 )
  {
    v6 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
    usedLuns = v5->_usedLuns;
    v5->_usedLuns = v6;
    objc_release(usedLuns);
    v8 = objc_retainAutoreleasedReturnValue(+[NSURL fileURLWithPath:](&OBJC_CLASS___NSURL, "fileURLWithPath:", v4));
    v9 = CFBundleCreate(kCFAllocatorDefault, (CFURLRef)v8);
    v5->_bundle = v9;
    if ( v9 )
    {
      error = 0LL;
      if ( CFBundleLoadExecutableAndReturnError(v9, &error) )
      {
        CFBundleGetFunctionPointersForNames(
          v5->_bundle,
          (CFArrayRef)&off_100008378,
          &v5->_ifdMethod.IFDHGetCapabilities);
        v10 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_100003F08());
        if ( os_log_type_enabled(v10, OS_LOG_TYPE_DEBUG) )
          sub_100005868(v4, v10);
        objc_release(v10);
        objc_release(v8);
        goto LABEL_7;
      }
      v12 = error;
      v13 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_100003F08());
      if ( os_log_type_enabled(v13, OS_LOG_TYPE_ERROR) )
        sub_1000057F4(v8, v12, v13);
      objc_release(v13);
    }
    else
    {
      v12 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_100003F08());
      if ( os_log_type_enabled(v12, OS_LOG_TYPE_ERROR) )
        sub_100005780(v8, v12);
    }
    objc_release(v12);
    objc_release(v8);
    v11 = 0LL;
    goto LABEL_14;
  }
LABEL_7:
  v11 = objc_retain(v5);
LABEL_14:
  objc_release(v4);
  objc_release(v5);
  return v11;
}