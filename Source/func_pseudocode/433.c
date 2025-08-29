-[FileEventObserver stopObserving]
void __cdecl -[FileEventObserver stopObserving](FileEventObserver *self, SEL a2)
{
  __FSEventStream *v3; // x0
  __FSEventStream *v4; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = -[FileEventObserver eventStreamRef](self, "eventStreamRef");
  if ( v3 )
  {
    v4 = v3;
    FSEventStreamStop(v3);
    FSEventStreamInvalidate(v4);
    FSEventStreamRelease(v4);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    -[FileEventObserver setEventStreamRef:](self, "setEventStreamRef:", 0LL);
  }
}