-[DeviceBlueButton focusRingMaskBounds]
CGRect __cdecl -[DeviceBlueButton focusRingMaskBounds](DeviceBlueButton *self, SEL a2)
{
  double x; // d0
  double y; // d1
  double width; // d2
  double height; // d3
  CGRect result; // 0:d0.8,8:d1.8,16:d2.8,24:d3.8

  if ( -[DeviceBlueButton focusRingType](self, "focusRingType") == (void *)1 )
  {
    x = NSZeroRect.origin.x;
    y = NSZeroRect.origin.y;
    width = NSZeroRect.size.width;
    height = NSZeroRect.size.height;
  }
  else
  {
    -[DeviceBlueButton bounds](self, "bounds");
  }
  result.size.height = height;
  result.size.width = width;
  result.origin.y = y;
  result.origin.x = x;
  return result;
}