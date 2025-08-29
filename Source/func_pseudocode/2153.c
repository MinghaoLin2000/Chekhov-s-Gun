-[AMPProgressBarView drawDeterminateProgressBarWithState:]
void __cdecl -[AMPProgressBarView drawDeterminateProgressBarWithState:](
        AMPProgressBarView *self,
        SEL a2,
        ProgressBarDrawingState *a3)
{
  CGFloat v5; // d8
  double v6; // d0
  double v7; // d8
  double x; // d9
  NSBezierPath *v9; // x19
  NSColor *v10; // x0
  NSColor *v11; // x19
  NSColor *v12; // x20
  NSColor *v13; // x24
  NSColor *v14; // x22
  NSColor *v15; // x25
  double y; // d10
  double height; // d11
  _BOOL4 var1; // w24
  double v19; // d0
  NSBezierPath *v20; // x23
  NSBezierPath *v21; // x23
  NSColor *v22; // x0
  NSColor *v23; // x24
  __int64 vars8; // [xsp+78h] [xbp+8h]
  NSRect v25; // 0:d0.8,8:d1.8,16:d2.8,24:d3.8
  NSRect v26; // 0:d0.8,8:d1.8,16:d2.8,24:d3.8

  objc_msgSend(a3->var3, "setLineWidth:", 1.0);
  v5 = a3->var2.size.width + -1.0;
  -[AMPProgressBarView fractionCompleted](self, "fractionCompleted");
  v7 = floor(v6 * v5);
  x = a3->var2.origin.x;
  if ( a3->var1 )
    x = x + a3->var2.size.width - v7;
  v25.origin.y = a3->var2.origin.y + -0.5;
  v25.size.height = a3->var2.size.height + 1.0;
  v25.origin.x = x;
  v25.size.width = v7;
  v26 = NSInsetRect(v25, -0.5, -0.5);
  v9 = objc_retainAutoreleasedReturnValue(
         +[NSBezierPath bezierPathWithRect:](
           &OBJC_CLASS___NSBezierPath,
           "bezierPathWithRect:",
           v26.origin.x,
           v26.origin.y,
           v26.size.width,
           v26.size.height));
  -[NSBezierPath addClip](v9, "addClip");
  objc_release(v9);
  v10 = objc_retainAutoreleasedReturnValue(+[NSColor lightGrayColor](&OBJC_CLASS___NSColor, "lightGrayColor"));
  v11 = v10;
  if ( a3->var0 )
  {
    v12 = objc_retain(v10);
    v13 = objc_retainAutoreleasedReturnValue(+[NSColor blackColor](&OBJC_CLASS___NSColor, "blackColor"));
    v14 = objc_retainAutoreleasedReturnValue(-[NSColor blendedColorWithFraction:ofColor:](v12, "blendedColorWithFraction:ofColor:", v13, 0.25));
  }
  else
  {
    v15 = objc_retainAutoreleasedReturnValue(-[NSColor colorWithAlphaComponent:](v10, "colorWithAlphaComponent:", 0.5));
    v13 = objc_retainAutoreleasedReturnValue(+[NSColor whiteColor](&OBJC_CLASS___NSColor, "whiteColor"));
    v14 = objc_retainAutoreleasedReturnValue(-[NSColor blendedColorWithFraction:ofColor:](v11, "blendedColorWithFraction:ofColor:", v13, 0.1));
    v12 = v15;
  }
  objc_release(v13);
  -[NSColor setFill](v12, "setFill");
  objc_msgSend(a3->var3, "fill");
  -[NSColor setStroke](v14, "setStroke");
  objc_msgSend(a3->var3, "stroke");
  if ( !a3->var0 )
  {
    y = a3->var2.origin.y;
    height = a3->var2.size.height;
    var1 = a3->var1;
    -[NSColor setStroke](v14, "setStroke");
    v19 = x + 0.5;
    if ( var1 )
      v19 = v7 + x + -0.5;
    +[NSBezierPath strokeLineFromPoint:toPoint:](
      &OBJC_CLASS___NSBezierPath,
      "strokeLineFromPoint:toPoint:",
      v19,
      y + 0.5,
      v19,
      y + height + -0.5);
  }
  -[AMPProgressBarView bounds](self, "bounds");
  v20 = objc_retainAutoreleasedReturnValue(
          +[NSBezierPath bezierPathWithRoundedRect:xRadius:yRadius:](
            &OBJC_CLASS___NSBezierPath,
            "bezierPathWithRoundedRect:xRadius:yRadius:"));
  -[NSBezierPath addClip](v20, "addClip");
  objc_release(v20);
  v21 = objc_retainAutoreleasedReturnValue(
          +[NSBezierPath bezierPathWithRoundedRect:xRadius:yRadius:](
            &OBJC_CLASS___NSBezierPath,
            "bezierPathWithRoundedRect:xRadius:yRadius:",
            a3->var2.origin.x,
            a3->var2.origin.y,
            a3->var2.size.width,
            a3->var2.size.height,
            4.0,
            4.0));
  if ( a3->var0 )
    v22 = objc_retainAutoreleasedReturnValue(
            +[NSColor colorWithCalibratedWhite:alpha:](
              &OBJC_CLASS___NSColor,
              "colorWithCalibratedWhite:alpha:",
              0.6,
              1.0));
  else
    v22 = objc_retainAutoreleasedReturnValue(+[NSColor grayColor](&OBJC_CLASS___NSColor, "grayColor"));
  v23 = v22;
  objc_release(v14);
  -[NSColor setStroke](v23, "setStroke");
  -[NSBezierPath stroke](v21, "stroke");
  objc_release(v21);
  objc_release(v23);
  objc_release(v12);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v11);
}