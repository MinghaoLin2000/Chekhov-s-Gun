-[NSPointerArray tsu_indexOfPointer:]
unsigned __int64 __cdecl -[NSPointerArray tsu_indexOfPointer:](NSPointerArray *self, SEL a2, void *a3)
{
  unsigned __int64 v3; // x19
  _QWORD v5[6]; // [xsp+0h] [xbp-60h] BYREF
  __int64 v6; // [xsp+30h] [xbp-30h] BYREF
  __int64 *v7; // [xsp+38h] [xbp-28h]
  __int64 v8; // [xsp+40h] [xbp-20h]
  __int64 v9; // [xsp+48h] [xbp-18h]

  v6 = 0LL;
  v7 = &v6;
  v8 = 0x2020000000LL;
  v9 = 0x7FFFFFFFFFFFFFFFLL;
  v5[0] = _NSConcreteStackBlock;
  v5[1] = 3254779904LL;
  v5[2] = sub_100120320;
  v5[3] = &unk_1001DC3B8;
  v5[4] = &v6;
  v5[5] = a3;
  -[NSPointerArray tsu_enumerateNonNullPointersUsingBlock:](self, "tsu_enumerateNonNullPointersUsingBlock:", v5);
  v3 = v7[3];
  _Block_object_dispose(&v6, 8);
  return v3;
}