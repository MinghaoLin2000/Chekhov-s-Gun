+[UINSSystemPreferencesSetting iconWithName:]
id __cdecl +[UINSSystemPreferencesSetting iconWithName:](id a1, SEL a2, id a3)
{
  id v4; // x21
  NSBundle *v5; // x19
  NSImage *v6; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(+[NSBundle bundleForClass:](&OBJC_CLASS___NSBundle, "bundleForClass:", objc_opt_class(a1)));
  v6 = objc_retainAutoreleasedReturnValue(-[NSBundle imageForResource:](v5, "imageForResource:", v4));
  objc_release(v4);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}