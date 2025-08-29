-[DeviceDragHandler dragDestinationURL]
NSURL *__cdecl -[DeviceDragHandler dragDestinationURL](DeviceDragHandler *self, SEL a2)
{
  NSURL *dragDestinationURL; // x0
  NSString *v4; // x20
  NSString *v5; // x21
  NSFileManager *v6; // x22
  NSURL *v7; // x0
  NSURL *v8; // x8
  __int64 vars8; // [xsp+28h] [xbp+8h]

  dragDestinationURL = self->_dragDestinationURL;
  if ( !dragDestinationURL )
  {
    v4 = objc_retainAutoreleasedReturnValue(NSTemporaryDirectory());
    v5 = objc_retainAutoreleasedReturnValue(-[NSString stringByAppendingPathComponent:](v4, "stringByAppendingPathComponent:", CFSTR("Drops")));
    v6 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
    -[NSFileManager createDirectoryAtPath:withIntermediateDirectories:attributes:error:](
      v6,
      "createDirectoryAtPath:withIntermediateDirectories:attributes:error:",
      v5,
      1LL,
      0LL,
      0LL);
    objc_release(v6);
    v7 = objc_retainAutoreleasedReturnValue(+[NSURL fileURLWithPath:](&OBJC_CLASS___NSURL, "fileURLWithPath:", v5));
    v8 = self->_dragDestinationURL;
    self->_dragDestinationURL = v7;
    objc_release(v8);
    objc_release(v5);
    objc_release(v4);
    dragDestinationURL = self->_dragDestinationURL;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(dragDestinationURL);
}