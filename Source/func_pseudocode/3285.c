_FSEventStreamCreate
FSEventStreamRef __cdecl FSEventStreamCreate(
        CFAllocatorRef allocator,
        FSEventStreamCallback callback,
        FSEventStreamContext *context,
        CFArrayRef pathsToWatch,
        FSEventStreamEventId sinceWhen,
        CFTimeInterval latency,
        FSEventStreamCreateFlags flags)
{
  return _FSEventStreamCreate(allocator, callback, context, pathsToWatch, sinceWhen, latency, flags);
}