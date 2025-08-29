-[NSPointerArray tsu_addPointersFromPointerArray:]
void __cdecl -[NSPointerArray tsu_addPointersFromPointerArray:](NSPointerArray *self, SEL a2, id a3)
{
  id v4; // x20
  NSUInteger v5; // x21
  _QWORD v6[6]; // [xsp+0h] [xbp-50h] BYREF

  v4 = objc_retain(a3);
  v5 = -[NSPointerArray count](self, "count");
  -[NSPointerArray setCount:](
    self,
    "setCount:",
    (char *)objc_msgSend(v4, "count") + -[NSPointerArray count](self, "count"));
  v6[0] = _NSConcreteStackBlock;
  v6[1] = 3254779904LL;
  v6[2] = sub_10012040C;
  v6[3] = &unk_1001DC3E8;
  v6[4] = self;
  v6[5] = v5;
  objc_msgSend(v4, "tsu_enumerateNonNullPointersUsingBlock:", v6);
  objc_release(v4);
}