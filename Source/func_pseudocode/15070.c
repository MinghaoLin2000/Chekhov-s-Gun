_CFRunLoopRunInMode
CFRunLoopRunResult __cdecl CFRunLoopRunInMode(
        CFRunLoopMode mode,
        CFTimeInterval seconds,
        Boolean returnAfterSourceHandled)
{
  return _CFRunLoopRunInMode(mode, seconds, returnAfterSourceHandled);
}