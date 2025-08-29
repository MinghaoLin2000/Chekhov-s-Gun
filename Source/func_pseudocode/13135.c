-[NSValue CGSizeValue]
// attributes: thunk
CGSize __cdecl -[NSValue CGSizeValue](NSValue *self, SEL a2)
{
  double v2; // d0
  double v3; // d1
  CGSize result; // 0:d0.8,8:d1.8

  -[NSValue sizeValue](self, "sizeValue");
  result.height = v3;
  result.width = v2;
  return result;
}