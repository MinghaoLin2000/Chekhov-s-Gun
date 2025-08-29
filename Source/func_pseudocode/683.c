-[DeviceFileSharingViewController outlineView:draggingSession:willBeginAtPoint:forItems:]
void __cdecl -[DeviceFileSharingViewController outlineView:draggingSession:willBeginAtPoint:forItems:](
        DeviceFileSharingViewController *self,
        SEL a2,
        id a3,
        id a4,
        CGPoint a5,
        id a6)
{
  -[DeviceFileSharingViewController setDraggedItems:](self, "setDraggedItems:", a6, a4, a5.x, a5.y);
}