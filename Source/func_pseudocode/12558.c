-[NSArray tsu_arrayByRemovingObjectsAtIndexes:]
id __cdecl -[NSArray tsu_arrayByRemovingObjectsAtIndexes:](NSArray *self, SEL a2, id a3)
{
  void *v5; // x20
  NSArray *v6; // x19

  if ( !objc_msgSend(a3, "count") )
    return self;
  v5 = -[NSArray mutableCopy](self, "mutableCopy");
  objc_msgSend(v5, "removeObjectsAtIndexes:", a3);
  v6 = +[NSArray arrayWithArray:](&OBJC_CLASS___NSArray, "arrayWithArray:", v5);
  objc_release(v5);
  return v6;
}