-[NSDate tsu_isEqualToFileModificationDateAccountingForTruncation:]
bool __cdecl -[NSDate tsu_isEqualToFileModificationDateAccountingForTruncation:](NSDate *self, SEL a2, id a3)
{
  id v4; // x19
  bool v5; // w20
  double v6; // d0
  double v7; // d8
  double v8; // d0
  bool v9; // zf

  v4 = objc_retain(a3);
  if ( v4 )
  {
    if ( ((unsigned int)-[NSDate isEqual:](self, "isEqual:", v4) & 1) != 0 )
    {
      v5 = 1;
    }
    else
    {
      -[NSDate timeIntervalSinceReferenceDate](self, "timeIntervalSinceReferenceDate");
      v7 = v6;
      objc_msgSend(v4, "timeIntervalSinceReferenceDate");
      v5 = 1;
      v9 = v7 == floor(v8) || v7 == v8;
      if ( !v9 && vabdd_f64(v7, v8) >= 0.001 )
        v5 = floor(v7) == v8;
    }
  }
  else
  {
    v5 = 0;
  }
  objc_release(v4);
  return v5;
}