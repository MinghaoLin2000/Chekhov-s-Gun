-[MXMTargetQueue add:]
bool __cdecl -[MXMTargetQueue add:](MXMTargetQueue *self, SEL a2, double a3)
{
  NSMutableArray *v5; // x20
  void *v6; // x21
  NSMutableArray *v7; // x20
  void *v8; // x21
  double v9; // d0
  double v10; // d9
  double v11; // d0
  NSMutableArray *v12; // x20
  void *v13; // x21
  double v14; // d0
  double v15; // d9
  NSMutableArray *v16; // x20
  double v17; // d0
  NSMutableArray *v18; // x20
  NSNumber *v19; // x21
  double v20; // d0
  double v21; // d9

  v5 = objc_retainAutoreleasedReturnValue(-[MXMTargetQueue queue](self, "queue"));
  v6 = -[NSMutableArray count](v5, "count");
  objc_release(v5);
  if ( (double)-[MXMTargetQueue size](self, "size") * 0.5 <= (double)(__int64)v6 )
  {
    v7 = objc_retainAutoreleasedReturnValue(-[MXMTargetQueue queue](self, "queue"));
    v8 = objc_retainAutoreleasedReturnValue(-[NSMutableArray objectAtIndex:](v7, "objectAtIndex:", (unsigned __int64)((double)(__int64)v6 * 0.5)));
    objc_msgSend(v8, "doubleValue");
    v10 = v9;
    objc_release(v8);
    objc_release(v7);
    -[MXMTargetQueue target](self, "target");
    if ( v10 >= v11 )
      -[MXMTargetQueue setHalfTargetHits:](
        self,
        "setHalfTargetHits:",
        (char *)-[MXMTargetQueue halfTargetHits](self, "halfTargetHits") - 1);
  }
  if ( -[MXMTargetQueue full](self, "full") )
  {
    v12 = objc_retainAutoreleasedReturnValue(-[MXMTargetQueue queue](self, "queue"));
    v13 = objc_retainAutoreleasedReturnValue(-[NSMutableArray objectAtIndex:](v12, "objectAtIndex:", 0LL));
    objc_msgSend(v13, "doubleValue");
    v15 = v14;
    objc_release(v13);
    objc_release(v12);
    v16 = objc_retainAutoreleasedReturnValue(-[MXMTargetQueue queue](self, "queue"));
    -[NSMutableArray removeObjectAtIndex:](v16, "removeObjectAtIndex:", 0LL);
    objc_release(v16);
    -[MXMTargetQueue setTotal:](self, "setTotal:", (__int64)((double)-[MXMTargetQueue total](self, "total") - v15));
    -[MXMTargetQueue target](self, "target");
    if ( v15 >= v17 )
      -[MXMTargetQueue setTargetHits:](
        self,
        "setTargetHits:",
        (char *)-[MXMTargetQueue targetHits](self, "targetHits") - 1);
  }
  v18 = objc_retainAutoreleasedReturnValue(-[MXMTargetQueue queue](self, "queue"));
  v19 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithDouble:](&OBJC_CLASS___NSNumber, "numberWithDouble:", a3));
  -[NSMutableArray addObject:](v18, "addObject:", v19);
  objc_release(v19);
  objc_release(v18);
  -[MXMTargetQueue setTotal:](self, "setTotal:", (__int64)((double)-[MXMTargetQueue total](self, "total") + a3));
  -[MXMTargetQueue target](self, "target");
  v21 = v20;
  if ( v20 <= a3 )
  {
    -[MXMTargetQueue setTargetHits:](
      self,
      "setTargetHits:",
      (char *)-[MXMTargetQueue targetHits](self, "targetHits") + 1);
    -[MXMTargetQueue setHalfTargetHits:](
      self,
      "setHalfTargetHits:",
      (char *)-[MXMTargetQueue halfTargetHits](self, "halfTargetHits") + 1);
  }
  return v21 <= a3;
}