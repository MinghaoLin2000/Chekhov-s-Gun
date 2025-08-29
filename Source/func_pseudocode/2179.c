-[TrackListTableView setDeviceDragHandler:]
void __cdecl -[TrackListTableView setDeviceDragHandler:](TrackListTableView *self, SEL a2, id a3)
{
  objc_storeWeak((id *)&self->_deviceDragHandler, a3);
}