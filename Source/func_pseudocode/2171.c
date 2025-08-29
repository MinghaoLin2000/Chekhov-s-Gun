-[TrackListTableView drawRect:]
void __cdecl -[TrackListTableView drawRect:](TrackListTableView *self, SEL a2, CGRect a3)
{
  NSColor *v4; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  if ( -[TrackListTableView dragHighlighted](
         self,
         "dragHighlighted",
         a3.origin.x,
         a3.origin.y,
         a3.size.width,
         a3.size.height) )
  {
    v4 = objc_retainAutoreleasedReturnValue(+[NSColor keyboardFocusIndicatorColor](&OBJC_CLASS___NSColor, "keyboardFocusIndicatorColor"));
    -[NSColor set](v4, "set");
    objc_release(v4);
    +[NSBezierPath setDefaultLineWidth:](&OBJC_CLASS___NSBezierPath, "setDefaultLineWidth:", 5.0);
    -[TrackListTableView bounds](self, "bounds");
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    +[NSBezierPath strokeRect:](&OBJC_CLASS___NSBezierPath, "strokeRect:");
  }
}