-[TrackListTableView draggingEntered:]
unsigned __int64 __cdecl -[TrackListTableView draggingEntered:](TrackListTableView *self, SEL a2, id a3)
{
  id v4; // x20
  DeviceDragHandler *v5; // x21
  _BOOL8 v6; // x22

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[TrackListTableView deviceDragHandler](self, "deviceDragHandler"));
  v6 = -[DeviceDragHandler canAcceptDrag:](v5, "canAcceptDrag:", v4);
  objc_release(v4);
  objc_release(v5);
  -[TrackListTableView setDragHighlighted:](self, "setDragHighlighted:", v6);
  return v6;
}