-[TrackListTableView setDragHighlighted:]
void __cdecl -[TrackListTableView setDragHighlighted:](TrackListTableView *self, SEL a2, bool a3)
{
  if ( self->_dragHighlighted != a3 )
  {
    self->_dragHighlighted = a3;
    -[TrackListTableView setNeedsDisplay:](self, "setNeedsDisplay:", 1LL);
  }
}