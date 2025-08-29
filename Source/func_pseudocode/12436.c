-[NSNumber tsu_isAlmostEqual:]
bool __cdecl -[NSNumber tsu_isAlmostEqual:](NSNumber *self, SEL a2, id a3)
{
  double v4; // d0
  double v5; // d8
  double v6; // d0

  -[NSNumber doubleValue](self, "doubleValue");
  v5 = v4;
  objc_msgSend(a3, "doubleValue");
  return vabdd_f64(v5, v6) < 0.01 || v5 == v6;
}