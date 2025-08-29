-[DeviceModeUnpairedViewController setupPairButton]
void __cdecl -[DeviceModeUnpairedViewController setupPairButton](DeviceModeUnpairedViewController *self, SEL a2)
{
  NSCursor *v3; // x21
  NSColor *v4; // x22
  NSButton *v5; // x23
  void *v6; // x24
  NSDictionary *v7; // x20
  id v8; // x21
  NSButton *v9; // x22
  NSString *v10; // x23
  void *v11; // x21
  NSButton *v12; // x19
  _QWORD v13[3]; // [xsp+8h] [xbp-68h] BYREF
  _QWORD v14[3]; // [xsp+20h] [xbp-50h] BYREF

  v13[0] = NSCursorAttributeName;
  v3 = objc_retainAutoreleasedReturnValue(+[NSCursor arrowCursor](&OBJC_CLASS___NSCursor, "arrowCursor"));
  v14[0] = v3;
  v13[1] = NSForegroundColorAttributeName;
  v4 = objc_retainAutoreleasedReturnValue(+[NSColor whiteColor](&OBJC_CLASS___NSColor, "whiteColor"));
  v14[1] = v4;
  v13[2] = NSFontAttributeName;
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceModeUnpairedViewController pairButton](self, "pairButton"));
  v6 = objc_retainAutoreleasedReturnValue(-[NSButton font](v5, "font"));
  v14[2] = v6;
  v7 = objc_retainAutoreleasedReturnValue(
         +[NSDictionary dictionaryWithObjects:forKeys:count:](
           &OBJC_CLASS___NSDictionary,
           "dictionaryWithObjects:forKeys:count:",
           v14,
           v13,
           3LL));
  objc_release(v6);
  objc_release(v5);
  objc_release(v4);
  objc_release(v3);
  v8 = objc_alloc((Class)&OBJC_CLASS___NSAttributedString);
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceModeUnpairedViewController pairButton](self, "pairButton"));
  v10 = objc_retainAutoreleasedReturnValue(-[NSButton title](v9, "title"));
  v11 = objc_msgSend(v8, "initWithString:attributes:", v10, v7);
  objc_release(v10);
  objc_release(v9);
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceModeUnpairedViewController pairButton](self, "pairButton"));
  -[NSButton setAttributedTitle:](v12, "setAttributedTitle:", v11);
  objc_release(v12);
  objc_release(v11);
  objc_release(v7);
}