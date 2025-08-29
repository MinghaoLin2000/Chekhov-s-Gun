-[ColorInfo gsave]
void __cdecl -[ColorInfo gsave](ColorInfo *self, SEL a2)
{
  GState *v3; // x19
  NSString *v4; // x21
  NSString *v5; // x21
  NSMutableArray *v6; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_alloc_init(&OBJC_CLASS___GState);
  v4 = objc_retainAutoreleasedReturnValue(-[ColorInfo strokeColorspace](self, "strokeColorspace"));
  -[GState setStrokeColorspace:](v3, "setStrokeColorspace:", v4);
  objc_release(v4);
  v5 = objc_retainAutoreleasedReturnValue(-[ColorInfo nonStrokeColorspace](self, "nonStrokeColorspace"));
  -[GState setNonStrokeColorspace:](v3, "setNonStrokeColorspace:", v5);
  objc_release(v5);
  v6 = objc_retainAutoreleasedReturnValue(-[ColorInfo gstateStack](self, "gstateStack"));
  -[NSMutableArray addObject:](v6, "addObject:", v3);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v3);
}