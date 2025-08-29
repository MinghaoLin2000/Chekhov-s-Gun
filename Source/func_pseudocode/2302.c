-[DeviceFinderOverallView .cxx_destruct]
void __cdecl -[DeviceFinderOverallView .cxx_destruct](DeviceFinderOverallView *self, SEL a2)
{
  objc_destroyWeak((id *)&self->_deviceDragHandler);
}