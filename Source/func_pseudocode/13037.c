-[NSIndexSet tsu_enumerateIndexesAndPositionsUsingBlock:]
void __cdecl -[NSIndexSet tsu_enumerateIndexesAndPositionsUsingBlock:](NSIndexSet *self, SEL a2, id a3)
{
  id v4; // x19
  _QWORD v5[4]; // [xsp+0h] [xbp-60h] BYREF
  id v6; // [xsp+20h] [xbp-40h]
  _QWORD *v7; // [xsp+28h] [xbp-38h]
  _QWORD v8[4]; // [xsp+30h] [xbp-30h] BYREF

  v8[0] = 0LL;
  v8[1] = v8;
  v8[2] = 0x2020000000LL;
  v8[3] = 0LL;
  v5[0] = _NSConcreteStackBlock;
  v5[1] = 3254779904LL;
  v5[2] = sub_100144BE4;
  v5[3] = &unk_1001DE148;
  v6 = objc_retain(a3);
  v7 = v8;
  v4 = objc_retain(v6);
  -[NSIndexSet enumerateIndexesUsingBlock:](self, "enumerateIndexesUsingBlock:", v5);
  objc_release(v6);
  objc_release(v4);
  _Block_object_dispose(v8, 8);
}