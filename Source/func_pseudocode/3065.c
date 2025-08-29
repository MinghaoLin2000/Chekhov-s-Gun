-[DeviceSetupViewController setupAssistantComplete]
void __cdecl -[DeviceSetupViewController setupAssistantComplete](DeviceSetupViewController *self, SEL a2)
{
  NSNotificationCenter *v2; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue(+[NSNotificationCenter defaultCenter](&OBJC_CLASS___NSNotificationCenter, "defaultCenter"));
  -[NSNotificationCenter postNotificationName:object:](
    v2,
    "postNotificationName:object:",
    CFSTR("DeviceConfigureDidCompleteNotification"),
    0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v2);
}