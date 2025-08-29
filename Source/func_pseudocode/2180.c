-[TrackListTableView .cxx_destruct]
void __cdecl -[TrackListTableView .cxx_destruct](TrackListTableView *self, SEL a2)
{
  objc_destroyWeak((id *)&self->_deviceDragHandler);
}