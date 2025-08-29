-[DeviceFinderOverallView setDragHighlighted:]
void __cdecl -[DeviceFinderOverallView setDragHighlighted:](DeviceFinderOverallView *self, SEL a2, bool a3)
{
  if ( self->_dragHighlighted != a3 )
  {
    self->_dragHighlighted = a3;
    -[DeviceFinderOverallView setNeedsDisplay:](self, "setNeedsDisplay:", 1LL);
  }
}