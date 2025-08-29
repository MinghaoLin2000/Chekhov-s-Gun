-[SiriNCService _createEventTap]
void __cdecl -[SiriNCService _createEventTap](SiriNCService *self, SEL a2)
{
  os_log_s *v4; // x21
  __CFMachPort *eventTap; // x1
  __CFRunLoopSource *RunLoopSource; // x0
  __CFRunLoop *Main; // x0
  NSAssertionHandler *v8; // x21
  NSAssertionHandler *v9; // x21
  NSAssertionHandler *v10; // x21
  int v11; // [xsp+0h] [xbp-40h] BYREF
  const char *v12; // [xsp+4h] [xbp-3Ch]

  if ( !AXIsProcessTrusted() )
  {
    v8 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v8,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("SiriNCService.m"),
      804LL,
      CFSTR("This process is not Accessibility trusted."));
    objc_release(v8);
  }
  v4 = (os_log_s *)AFSiriLogContextConnection;
  if ( self->_eventTap )
  {
    if ( os_log_type_enabled(AFSiriLogContextConnection, OS_LOG_TYPE_ERROR) )
      sub_1000128A4(v4);
  }
  else
  {
    if ( os_log_type_enabled(AFSiriLogContextConnection, OS_LOG_TYPE_DEFAULT) )
    {
      v11 = 136315138;
      v12 = "-[SiriNCService _createEventTap]";
      _os_log_impl((void *)&_mh_execute_header, v4, OS_LOG_TYPE_DEFAULT, "%s Creating Event Tap", (uint8_t *)&v11, 0xCu);
    }
    eventTap = CGEventTapCreate(
                 kCGSessionEventTap,
                 kCGTailAppendEventTap,
                 kCGEventTapOptionDefault,
                 0x1C00uLL,
                 (CGEventTapCallBack)sub_100008DDC,
                 self);
    self->_eventTap = eventTap;
    if ( !eventTap )
    {
      v9 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
      -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
        v9,
        "handleFailureInMethod:object:file:lineNumber:description:",
        a2,
        self,
        CFSTR("SiriNCService.m"),
        822LL,
        CFSTR("Failed to create event tap"));
      objc_release(v9);
      eventTap = self->_eventTap;
    }
    RunLoopSource = CFMachPortCreateRunLoopSource(kCFAllocatorDefault, eventTap, 0LL);
    self->_eventTapSource = RunLoopSource;
    if ( !RunLoopSource )
    {
      v10 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
      -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
        v10,
        "handleFailureInMethod:object:file:lineNumber:description:",
        a2,
        self,
        CFSTR("SiriNCService.m"),
        825LL,
        CFSTR("Failed to create event tap run loop source"));
      objc_release(v10);
    }
    Main = CFRunLoopGetMain();
    CFRunLoopAddSource(Main, self->_eventTapSource, kCFRunLoopDefaultMode);
    CGSSetEventTapTimeout(1.0);
  }
}