-[NSDate tsu_isEqualToDate:]
bool __cdecl -[NSDate tsu_isEqualToDate:](NSDate *self, SEL a2, id a3)
{
  id v4; // x19
  double v5; // d0
  double v6; // d8
  double v7; // d0
  bool v8; // w20

  v4 = objc_retain(a3);
  if ( v4 )
  {
    -[NSDate timeIntervalSince1970](self, "timeIntervalSince1970");
    v6 = v5;
    objc_msgSend(v4, "timeIntervalSince1970");
    v8 = v6 == v7 || vabdd_f64(v6, v7) < fabs(v7 * 1.0e-10);
  }
  else
  {
    v8 = 0;
  }
  objc_release(v4);
  return v8;
}