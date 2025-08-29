-[DeviceModeTestViewController testContentsStringForFileBase:ofType:]
id __cdecl -[DeviceModeTestViewController testContentsStringForFileBase:ofType:](
        DeviceModeTestViewController *self,
        SEL a2,
        id a3,
        id a4)
{
  id v5; // x22
  id v6; // x19
  NSBundle *v7; // x20
  NSString *v8; // x21
  NSString *v9; // x19
  __int64 v11; // [xsp+8h] [xbp-28h] BYREF
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v5 = objc_retain(a4);
  v6 = objc_retain(a3);
  v7 = objc_retainAutoreleasedReturnValue(+[NSBundle bundleForClass:](&OBJC_CLASS___NSBundle, "bundleForClass:", objc_opt_class(&OBJC_CLASS___AMPDevice)));
  v8 = objc_retainAutoreleasedReturnValue(-[NSBundle pathForResource:ofType:](v7, "pathForResource:ofType:", v6, v5));
  objc_release(v5);
  objc_release(v6);
  v11 = 0LL;
  v9 = objc_retainAutoreleasedReturnValue(
         +[NSString stringWithContentsOfFile:encoding:error:](
           &OBJC_CLASS___NSString,
           "stringWithContentsOfFile:encoding:error:",
           v8,
           4LL,
           &v11));
  objc_release(v8);
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v9);
}