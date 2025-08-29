_FSEventStreamScheduleWithRunLoop
void __cdecl FSEventStreamScheduleWithRunLoop(
        FSEventStreamRef streamRef,
        CFRunLoopRef runLoop,
        CFStringRef runLoopMode)
{
  _FSEventStreamScheduleWithRunLoop(streamRef, runLoop, runLoopMode);
}