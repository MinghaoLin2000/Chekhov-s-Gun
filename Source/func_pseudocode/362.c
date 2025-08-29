-[AskUserAlert handleAskUserOtherButton:]
void __cdecl -[AskUserAlert handleAskUserOtherButton:](AskUserAlert *self, SEL a2, id a3)
{
  NSString *v3; // x20
  NSURL *v4; // x19
  NSWorkspace *v5; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[AskUserAlert otherURLString](self, "otherURLString", a3));
  v4 = objc_retainAutoreleasedReturnValue(+[NSURL URLWithString:](&OBJC_CLASS___NSURL, "URLWithString:", v3));
  objc_release(v3);
  v5 = objc_retainAutoreleasedReturnValue(+[NSWorkspace sharedWorkspace](&OBJC_CLASS___NSWorkspace, "sharedWorkspace"));
  -[NSWorkspace openURL:](v5, "openURL:", v4);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}