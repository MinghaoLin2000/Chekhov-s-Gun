-[NSArray tsu_arrayByTransformingWithBlock:]
id __cdecl -[NSArray tsu_arrayByTransformingWithBlock:](NSArray *self, SEL a2, id a3)
{
  NSMutableArray *v5; // x21
  _QWORD v7[6]; // [xsp+0h] [xbp-50h] BYREF

  v5 = +[NSMutableArray arrayWithCapacity:](
         &OBJC_CLASS___NSMutableArray,
         "arrayWithCapacity:",
         -[NSArray count](self, "count"));
  v7[0] = _NSConcreteStackBlock;
  v7[1] = 3254779904LL;
  v7[2] = sub_100124660;
  v7[3] = &unk_1001DC648;
  v7[4] = v5;
  v7[5] = a3;
  -[NSArray enumerateObjectsUsingBlock:](self, "enumerateObjectsUsingBlock:", v7);
  return v5;
}