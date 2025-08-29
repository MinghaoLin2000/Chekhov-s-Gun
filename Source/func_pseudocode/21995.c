_AESendMessage
OSStatus __cdecl AESendMessage(const AppleEvent *event, AppleEvent *reply, AESendMode sendMode, __int64 timeOutInTicks)
{
  return _AESendMessage(event, reply, sendMode, timeOutInTicks);
}