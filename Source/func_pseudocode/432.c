-[FileEventObserver startObserving]
bool __cdecl -[FileEventObserver startObserving](FileEventObserver *self, SEL a2)
{
  FSEventStreamCreateFlags v3; // w20
  NSString *v4; // x21
  NSArray *v5; // x22
  __FSEventStream *v6; // x20
  __CFRunLoop *Current; // x0
  FSEventStreamContext v9; // [xsp+0h] [xbp-60h] BYREF
  NSString *v10; // [xsp+30h] [xbp-30h] BYREF

  -[FileEventObserver stopObserving](self, "stopObserving");
  if ( -[FileEventObserver watchAllFileEvents](self, "watchAllFileEvents", 0LL, self, 0LL, 0LL, 0LL) )
    v3 = 17;
  else
    v3 = 5;
  v4 = objc_retainAutoreleasedReturnValue(-[FileEventObserver path](self, "path"));
  v10 = v4;
  v5 = +[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", &v10, 1LL);
  objc_release(v4);
  v6 = FSEventStreamCreate(
         kCFAllocatorDefault,
         (FSEventStreamCallback)sub_1000056B0,
         &v9,
         (CFArrayRef)v5,
         0xFFFFFFFFFFFFFFFFLL,
         2.0,
         v3);
  if ( v6 )
  {
    -[FileEventObserver setEventStreamRef:](self, "setEventStreamRef:", v6);
    Current = CFRunLoopGetCurrent();
    FSEventStreamScheduleWithRunLoop(v6, Current, kCFRunLoopDefaultMode);
    FSEventStreamStart(v6);
  }
  return v6 != 0LL;
}