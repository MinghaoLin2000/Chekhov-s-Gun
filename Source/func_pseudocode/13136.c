-[NSValue CGRectValue]
// attributes: thunk
CGRect __cdecl -[NSValue CGRectValue](NSValue *self, SEL a2)
{
  double v2; // d0
  double v3; // d1
  double v4; // d2
  double v5; // d3
  CGRect result; // 0:d0.8,8:d1.8,16:d2.8,24:d3.8

  -[NSValue rectValue](self, "rectValue");
  result.size.height = v5;
  result.size.width = v4;
  result.origin.y = v3;
  result.origin.x = v2;
  return result;
}