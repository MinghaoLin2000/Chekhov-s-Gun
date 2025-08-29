-[NSArray tsu_arrayOfObjectsPassingTest:]
id __cdecl -[NSArray tsu_arrayOfObjectsPassingTest:](NSArray *self, SEL a2, id a3)
{
  NSArray *v3; // x19
  NSIndexSet *v4; // x0
  NSIndexSet *v5; // x20
  _QWORD v8[5]; // [xsp+8h] [xbp-38h] BYREF
  __int64 vars8; // [xsp+48h] [xbp+8h]

  if ( a3 )
  {
    v3 = self;
    v8[0] = _NSConcreteStackBlock;
    v8[1] = 3254779904LL;
    v8[2] = sub_10012459C;
    v8[3] = &unk_1001DC618;
    v8[4] = a3;
    v4 = -[NSArray indexesOfObjectsPassingTest:](self, "indexesOfObjectsPassingTest:", v8);
    if ( !v4 )
      return +[NSArray array](&OBJC_CLASS___NSArray, "array");
    v5 = v4;
    if ( !-[NSIndexSet count](v4, "count") )
      return +[NSArray array](&OBJC_CLASS___NSArray, "array");
    if ( -[NSIndexSet containsIndexesInRange:](v5, "containsIndexesInRange:", 0LL, -[NSArray count](v3, "count")) )
      return v3;
    return -[NSArray objectsAtIndexes:](v3, "objectsAtIndexes:", v5);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return +[NSArray array](&OBJC_CLASS___NSArray, "array");
}