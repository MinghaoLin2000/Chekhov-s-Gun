-[ColorInfo grestore]
void __cdecl -[ColorInfo grestore](ColorInfo *self, SEL a2)
{
  NSMutableArray *v3; // x21
  void *v4; // x19
  void *v5; // x21
  void *v6; // x21
  NSMutableArray *v7; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[ColorInfo gstateStack](self, "gstateStack"));
  v4 = objc_retainAutoreleasedReturnValue(-[NSMutableArray lastObject](v3, "lastObject"));
  objc_release(v3);
  if ( v4 )
  {
    v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "strokeColorspace"));
    -[ColorInfo setStrokeColorspace:](self, "setStrokeColorspace:", v5);
    objc_release(v5);
    v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "nonStrokeColorspace"));
    -[ColorInfo setNonStrokeColorspace:](self, "setNonStrokeColorspace:", v6);
    objc_release(v6);
    v7 = objc_retainAutoreleasedReturnValue(-[ColorInfo gstateStack](self, "gstateStack"));
    -[NSMutableArray removeLastObject](v7, "removeLastObject");
    objc_release(v7);
  }
  else
  {
    -[ColorInfo setStrokeColorspace:](self, "setStrokeColorspace:", CFSTR("DeviceGray"));
    -[ColorInfo setNonStrokeColorspace:](self, "setNonStrokeColorspace:", CFSTR("DeviceGray"));
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}