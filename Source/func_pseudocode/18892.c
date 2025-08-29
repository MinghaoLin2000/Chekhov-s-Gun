-[SiriNCService _handleEvent:type:]
bool __cdecl -[SiriNCService _handleEvent:type:](SiriNCService *self, SEL a2, __CGEvent *a3, unsigned int a4)
{
  int v8; // w22
  EventRef event; // [xsp+0h] [xbp-50h] BYREF
  _QWORD block[5]; // [xsp+8h] [xbp-48h] BYREF

  if ( a4 < 0xFFFFFFFE )
  {
    event = 0LL;
    if ( !CreateEventWithCGEvent(kCFAllocatorDefault, a3, 0, &event) )
    {
      v8 = IsUserCancelEventRef(event);
      ReleaseEvent(event);
      if ( v8 )
        return -[SiriNCService _handleUserCancel](self, "_handleUserCancel");
    }
    if ( a4 == 10 && (unsigned __int16)CGEventGetIntegerValueField(a3, kCGKeyboardEventKeycode) == 49LL )
      return -[SiriNCService _handleSpace](self, "_handleSpace");
  }
  else
  {
    block[0] = _NSConcreteStackBlock;
    block[1] = 3254779904LL;
    block[2] = sub_100009028;
    block[3] = &unk_100020670;
    block[4] = self;
    dispatch_async(&_dispatch_main_q, block);
  }
  return 0;
}