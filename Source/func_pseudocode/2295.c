-[DeviceFinderOverallView performDragOperation:]
bool __cdecl -[DeviceFinderOverallView performDragOperation:](DeviceFinderOverallView *self, SEL a2, id a3)
{
  id v4; // x19
  unsigned __int8 v5; // w21
  DeviceDragHandler *v6; // x20

  v4 = objc_retain(a3);
  -[DeviceFinderOverallView setDragHighlighted:](self, "setDragHighlighted:", 0LL);
  v5 = 0;
  if ( !-[DeviceFinderOverallView dragDisabled](self, "dragDisabled") )
  {
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceFinderOverallView deviceDragHandler](self, "deviceDragHandler"));
    v5 = -[DeviceDragHandler performDragOperation:](v6, "performDragOperation:", v4);
    objc_release(v6);
  }
  objc_release(v4);
  return v5;
}