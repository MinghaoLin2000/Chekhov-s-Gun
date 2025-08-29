-[ipp_t replaceOrAddAttribute:withAttribute:settingGroup:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[ipp_t replaceOrAddAttribute:withAttribute:settingGroup:](ipp_t *self, SEL a2, id a3, id a4, int a5)
{
  __int64 v5; // x22
  id v8; // x20
  id v9; // x19
  NSMutableArray *attrs; // x23
  id v11; // x20
  void *v12; // x23
  void *v13; // x22
  NSMutableArray *v14; // x0
  _QWORD v15[4]; // [xsp+8h] [xbp-58h] BYREF
  id v16; // [xsp+28h] [xbp-38h]

  v5 = *(_QWORD *)&a5;
  v8 = objc_retain(a3);
  v9 = objc_retain(a4);
  attrs = self->_attrs;
  v15[0] = _NSConcreteStackBlock;
  v15[1] = 3254779904LL;
  v15[2] = sub_10003C80C;
  v15[3] = &unk_10009E888;
  v11 = objc_retain(v8);
  v16 = v11;
  v12 = -[NSMutableArray indexOfObjectPassingTest:](attrs, "indexOfObjectPassingTest:", v15);
  v13 = objc_msgSend(v9, "_copySettingGroup:", v5);
  v14 = self->_attrs;
  if ( v12 == (void *)0x7FFFFFFFFFFFFFFFLL )
    -[NSMutableArray addObject:](v14, "addObject:", v13);
  else
    -[NSMutableArray replaceObjectAtIndex:withObject:](v14, "replaceObjectAtIndex:withObject:", v12, v13);
  objc_release(v13);
  objc_release(v16);
  objc_release(v9);
  objc_release(v11);
}