-[ipp_t enumerateAttributes:]
void __cdecl -[ipp_t enumerateAttributes:](ipp_t *self, SEL a2, id a3)
{
  id v4; // x0
  NSMutableArray *attrs; // x20
  id v6; // x19
  _QWORD v7[4]; // [xsp+8h] [xbp-38h] BYREF
  id v8; // [xsp+28h] [xbp-18h]

  v4 = objc_retain(a3);
  attrs = self->_attrs;
  v7[0] = _NSConcreteStackBlock;
  v7[1] = 3254779904LL;
  v7[2] = sub_10003C6A8;
  v7[3] = &unk_10009E858;
  v8 = v4;
  v6 = objc_retain(v4);
  -[NSMutableArray enumerateObjectsUsingBlock:](attrs, "enumerateObjectsUsingBlock:", v7);
  objc_release(v8);
  objc_release(v6);
}