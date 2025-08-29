-[ClientRequest identifier]
NSString *__cdecl -[ClientRequest identifier](ClientRequest *self, SEL a2)
{
  MediaConversionRequestTracker *requestTracker; // x0
  NSAssertionHandler *v6; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  requestTracker = self->_requestTracker;
  if ( !requestTracker )
  {
    v6 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v6,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("PAMediaConversionServiceSharedUtilitiesServiceSide.m"),
      143LL,
      CFSTR("Unexpected nil request tracker"));
    objc_release(v6);
    requestTracker = self->_requestTracker;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return -[MediaConversionRequestTracker requestIdentifier](requestTracker, "requestIdentifier");
}