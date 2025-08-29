-[AMPProgressBarView drawRect:]
void __cdecl -[AMPProgressBarView drawRect:](AMPProgressBarView *self, SEL a2, CGRect a3)
{
  void *v4; // x21
  void *v5; // x22
  unsigned int v6; // w20
  NSBezierPath *v7; // x21
  NSBezierPath *v8; // x22
  NSColor *v9; // x0
  NSColor *v10; // x22
  NSColor *v11; // x0
  NSColor *v12; // x20
  __int64 v13; // [xsp+0h] [xbp-70h] BYREF
  NSRect v14; // [xsp+8h] [xbp-68h]
  id v15; // [xsp+28h] [xbp-48h]
  NSRect v16; // 0:d0.8,8:d1.8,16:d2.8,24:d3.8

  +[NSGraphicsContext saveGraphicsState](
    &OBJC_CLASS___NSGraphicsContext,
    "saveGraphicsState",
    a3.origin.x,
    a3.origin.y,
    a3.size.width,
    a3.size.height);
  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(NSApp, "effectiveAppearance"));
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "name"));
  v6 = (unsigned int)objc_msgSend(v5, "isEqualToString:", NSAppearanceNameAqua);
  LOBYTE(v13) = v6;
  objc_release(v5);
  objc_release(v4);
  BYTE1(v13) = objc_msgSend(NSApp, "userInterfaceLayoutDirection", v13) == (void *)1;
  -[AMPProgressBarView bounds](self, "bounds");
  v14 = NSInsetRect(v16, 0.5, 0.5);
  v7 = objc_retainAutoreleasedReturnValue(
         +[NSBezierPath bezierPathWithRoundedRect:xRadius:yRadius:](
           &OBJC_CLASS___NSBezierPath,
           "bezierPathWithRoundedRect:xRadius:yRadius:"));
  v15 = v7;
  -[NSBezierPath setLineWidth:](v7, "setLineWidth:", 0.5);
  -[AMPProgressBarView bounds](self, "bounds");
  v8 = objc_retainAutoreleasedReturnValue(
         +[NSBezierPath bezierPathWithRoundedRect:xRadius:yRadius:](
           &OBJC_CLASS___NSBezierPath,
           "bezierPathWithRoundedRect:xRadius:yRadius:"));
  -[NSBezierPath addClip](v8, "addClip");
  objc_release(v8);
  if ( v6 )
    v9 = objc_retainAutoreleasedReturnValue(+[NSColor whiteColor](&OBJC_CLASS___NSColor, "whiteColor"));
  else
    v9 = objc_retainAutoreleasedReturnValue(+[NSColor colorWithWhite:alpha:](&OBJC_CLASS___NSColor, "colorWithWhite:alpha:", 1.0, 0.1));
  v10 = v9;
  -[NSColor setFill](v9, "setFill");
  -[NSBezierPath fill](v7, "fill");
  if ( v6 )
    v11 = objc_retainAutoreleasedReturnValue(
            +[NSColor colorWithCalibratedWhite:alpha:](
              &OBJC_CLASS___NSColor,
              "colorWithCalibratedWhite:alpha:",
              0.6,
              1.0));
  else
    v11 = objc_retainAutoreleasedReturnValue(+[NSColor grayColor](&OBJC_CLASS___NSColor, "grayColor"));
  v12 = v11;
  -[NSColor setStroke](v11, "setStroke");
  -[NSBezierPath stroke](v7, "stroke");
  if ( self->_indeterminateAnimationTimer )
    -[AMPProgressBarView drawIndeterminateProgress](self, "drawIndeterminateProgress");
  else
    -[AMPProgressBarView drawDeterminateProgressBarWithState:](self, "drawDeterminateProgressBarWithState:", &v13);
  +[NSGraphicsContext restoreGraphicsState](&OBJC_CLASS___NSGraphicsContext, "restoreGraphicsState");
  objc_release(v12);
  objc_release(v10);
  objc_release(v15);
}