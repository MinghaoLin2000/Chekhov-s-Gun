-[TrackListTableView performDragOperation:]
bool __cdecl -[TrackListTableView performDragOperation:](TrackListTableView *self, SEL a2, id a3)
{
  id v4; // x20
  DeviceDragHandler *v5; // x19
  unsigned __int8 v6; // w21

  v4 = objc_retain(a3);
  -[TrackListTableView setDragHighlighted:](self, "setDragHighlighted:", 0LL);
  v5 = objc_retainAutoreleasedReturnValue(-[TrackListTableView deviceDragHandler](self, "deviceDragHandler"));
  v6 = -[DeviceDragHandler performDragOperation:](v5, "performDragOperation:", v4);
  objc_release(v4);
  objc_release(v5);
  return v6;
}