-[SiriNCService _releaseEventTap]
void __cdecl -[SiriNCService _releaseEventTap](SiriNCService *self, SEL a2)
{
  __int64 v2; // x20
  __CFRunLoopSource *eventTapSource; // x20
  __int64 v5; // x21
  __CFRunLoop *Main; // x0
  __int64 v7; // x20

  v2 = AFSiriLogContextConnection;
  if ( self->_eventTap )
  {
    if ( os_log_type_enabled(AFSiriLogContextConnection, OS_LOG_TYPE_DEBUG) )
      sub_100012A84(v2);
    eventTapSource = self->_eventTapSource;
    if ( eventTapSource )
    {
      v5 = AFSiriLogContextConnection;
      if ( os_log_type_enabled(AFSiriLogContextConnection, OS_LOG_TYPE_DEBUG) )
        sub_100012A0C(v5);
      CFRelease(eventTapSource);
      self->_eventTapSource = 0LL;
      Main = CFRunLoopGetMain();
      CFRunLoopRemoveSource(Main, eventTapSource, kCFRunLoopDefaultMode);
    }
    v7 = AFSiriLogContextConnection;
    if ( os_log_type_enabled(AFSiriLogContextConnection, OS_LOG_TYPE_DEBUG) )
      sub_100012994(v7);
    CFMachPortInvalidate(self->_eventTap);
    CFRelease(self->_eventTap);
    self->_eventTap = 0LL;
  }
  else if ( os_log_type_enabled(AFSiriLogContextConnection, OS_LOG_TYPE_ERROR) )
  {
    sub_10001291C(v2);
  }
}