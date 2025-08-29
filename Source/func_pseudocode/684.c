-[DeviceFileSharingViewController outlineView:draggingSession:endedAtPoint:operation:]
void __cdecl -[DeviceFileSharingViewController outlineView:draggingSession:endedAtPoint:operation:](
        DeviceFileSharingViewController *self,
        SEL a2,
        id a3,
        id a4,
        CGPoint a5,
        unsigned __int64 a6)
{
  NSArray *v7; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  if ( a6 == 32 )
  {
    v7 = objc_retainAutoreleasedReturnValue(-[DeviceFileSharingViewController draggedItems](self, "draggedItems", a3, a4, a5.x, a5.y));
    -[DeviceFileSharingViewController deleteItems:](self, "deleteItems:", v7);
    objc_release(v7);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[DeviceFileSharingViewController setDraggedItems:](self, "setDraggedItems:", 0LL);
}