-[DeviceFinderOverallView draggingEntered:]
unsigned __int64 __cdecl -[DeviceFinderOverallView draggingEntered:](DeviceFinderOverallView *self, SEL a2, id a3)
{
  id v4; // x19
  DeviceDragHandler *v5; // x21
  unsigned __int8 v6; // w22
  __int64 v7; // x2
  unsigned __int64 v8; // x21

  v4 = objc_retain(a3);
  if ( -[DeviceFinderOverallView dragDisabled](self, "dragDisabled")
    || (v5 = objc_retainAutoreleasedReturnValue(-[DeviceFinderOverallView deviceDragHandler](self, "deviceDragHandler")),
        v6 = -[DeviceDragHandler canAcceptDrag:](v5, "canAcceptDrag:", v4),
        objc_release(v5),
        (v6 & 1) == 0) )
  {
    v7 = 0LL;
    v8 = 0LL;
  }
  else
  {
    v7 = 1LL;
    v8 = 1LL;
  }
  -[DeviceFinderOverallView setDragHighlighted:](self, "setDragHighlighted:", v7);
  objc_release(v4);
  return v8;
}