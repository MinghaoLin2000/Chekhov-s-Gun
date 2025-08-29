+[NSButton scopedButtonWithTitle:]
id __cdecl +[NSButton scopedButtonWithTitle:](id a1, SEL a2, id a3)
{
  NSButton *v3; // x19
  NSFont *v4; // x20
  double v5; // d0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(
         +[NSButton buttonWithTitle:target:action:](
           &OBJC_CLASS___NSButton,
           "buttonWithTitle:target:action:",
           a3,
           0LL,
           0LL));
  -[NSButton setBezelStyle:](v3, "setBezelStyle:", 13LL);
  -[NSButton setButtonType:](v3, "setButtonType:", 6LL);
  -[NSButton setShowsBorderOnlyWhileMouseInside:](v3, "setShowsBorderOnlyWhileMouseInside:", 1LL);
  v4 = objc_retainAutoreleasedReturnValue(+[NSFont boldSystemFontOfSize:](&OBJC_CLASS___NSFont, "boldSystemFontOfSize:", 12.0));
  -[NSButton setFont:](v3, "setFont:", v4);
  objc_release(v4);
  LODWORD(v5) = 1144750080;
  -[NSButton setContentHuggingPriority:forOrientation:](v3, "setContentHuggingPriority:forOrientation:", 0LL, v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}