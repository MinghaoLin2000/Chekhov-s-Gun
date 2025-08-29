-[NSIndexSet tsu_initWithIndices:count:]
id __cdecl -[NSIndexSet tsu_initWithIndices:count:](
        NSIndexSet *self,
        SEL a2,
        unsigned __int64 *a3,
        unsigned __int64 a4)
{
  void *i; // x20
  __int64 v8; // t1
  NSIndexSet *v9; // x21
  NSIndexSet *v10; // x22

  for ( i = objc_retainAutoreleasedReturnValue(+[NSMutableIndexSet indexSet](&OBJC_CLASS___NSMutableIndexSet, "indexSet"));
        a4;
        --a4 )
  {
    v8 = *a3++;
    objc_msgSend(i, "addIndex:", v8);
  }
  v9 = objc_retain(self);
  v10 = -[NSIndexSet initWithIndexSet:](v9, "initWithIndexSet:", i);
  objc_release(i);
  objc_release(v9);
  return v10;
}