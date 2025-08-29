-[SiriNCService observeHostWindowKeynessChanges:]
void __cdecl -[SiriNCService observeHostWindowKeynessChanges:](SiriNCService *self, SEL a2, id a3)
{
  id v4; // x20
  NSNotificationCenter *v5; // x21
  NSNotificationCenter *v6; // x21
  NSNotificationCenter *v7; // x21
  NSNotificationCenter *v8; // x21
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(+[NSNotificationCenter defaultCenter](&OBJC_CLASS___NSNotificationCenter, "defaultCenter"));
  -[NSNotificationCenter removeObserver:name:object:](
    v5,
    "removeObserver:name:object:",
    self,
    NSWindowDidBecomeKeyNotification,
    0LL);
  objc_release(v5);
  v6 = objc_retainAutoreleasedReturnValue(+[NSNotificationCenter defaultCenter](&OBJC_CLASS___NSNotificationCenter, "defaultCenter"));
  -[NSNotificationCenter removeObserver:name:object:](
    v6,
    "removeObserver:name:object:",
    self,
    NSWindowDidResignKeyNotification,
    0LL);
  objc_release(v6);
  v7 = objc_retainAutoreleasedReturnValue(+[NSNotificationCenter defaultCenter](&OBJC_CLASS___NSNotificationCenter, "defaultCenter"));
  -[NSNotificationCenter addObserver:selector:name:object:](
    v7,
    "addObserver:selector:name:object:",
    self,
    "keyWindowChanged:",
    NSWindowDidBecomeKeyNotification,
    v4);
  objc_release(v7);
  v8 = objc_retainAutoreleasedReturnValue(+[NSNotificationCenter defaultCenter](&OBJC_CLASS___NSNotificationCenter, "defaultCenter"));
  -[NSNotificationCenter addObserver:selector:name:object:](
    v8,
    "addObserver:selector:name:object:",
    self,
    "keyWindowChanged:",
    NSWindowDidResignKeyNotification,
    v4);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v8);
}