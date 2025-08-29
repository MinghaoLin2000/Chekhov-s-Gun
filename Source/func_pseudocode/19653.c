-[IPPBrowseInfo withPrinterSessionURL:]
void __cdecl -[IPPBrowseInfo withPrinterSessionURL:](IPPBrowseInfo *self, SEL a2, id a3)
{
  id v4; // x19
  void *v5; // x20
  id v6; // x22
  _QWORD v7[5]; // [xsp+0h] [xbp-50h] BYREF
  id v8; // [xsp+28h] [xbp-28h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[PKPrinterBrowseInfo bonjourName](self->_info, "bonjourName"));
  v7[0] = _NSConcreteStackBlock;
  v7[1] = 3254779904LL;
  v7[2] = sub_100006CC0;
  v7[3] = &unk_100090F98;
  v6 = objc_retain(v4);
  v7[4] = self;
  v8 = v6;
  objc_msgSend(v5, "withResolvedURL:", v7);
  objc_release(v5);
  objc_release(v8);
  objc_release(v6);
}