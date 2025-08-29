-[Document windowFrame]
CGRect __cdecl -[Document windowFrame](Document *self, SEL a2)
{
  double x; // d0
  double y; // d1
  double width; // d2
  double height; // d3
  CGRect result; // 0:d0.8,8:d1.8,16:d2.8,24:d3.8

  x = self->mWindowFrame.origin.x;
  y = self->mWindowFrame.origin.y;
  width = self->mWindowFrame.size.width;
  height = self->mWindowFrame.size.height;
  result.size.height = height;
  result.size.width = width;
  result.origin.y = y;
  result.origin.x = x;
  return result;
}