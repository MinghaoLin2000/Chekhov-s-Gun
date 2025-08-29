-[TSUZipWriter writeData:queue:completion:]
void __cdecl -[TSUZipWriter writeData:queue:completion:](TSUZipWriter *self, SEL a2, id a3, id a4, id a5)
{
  id v8; // x22
  id v9; // x19
  size_t size; // x23
  signed __int64 writtenOffset; // x24
  id v12; // x22
  id v13; // x19
  _QWORD v14[4]; // [xsp+0h] [xbp-60h] BYREF
  id v15; // [xsp+20h] [xbp-40h]
  id v16; // [xsp+28h] [xbp-38h]

  v8 = objc_retain(a4);
  v9 = objc_retain(a5);
  size = dispatch_data_get_size((dispatch_data_t)a3);
  self->_currentOffset += size;
  writtenOffset = self->_writtenOffset;
  v14[0] = _NSConcreteStackBlock;
  v14[1] = 3254779904LL;
  v14[2] = sub_1001559DC;
  v14[3] = &unk_1001DEE38;
  v15 = v8;
  v16 = v9;
  v12 = objc_retain(v8);
  v13 = objc_retain(v9);
  -[TSUZipWriter p_writeData:offset:completion:](self, "p_writeData:offset:completion:", a3, writtenOffset, v14);
  self->_writtenOffset += size;
  objc_release(v15);
  objc_release(v16);
  objc_release(v12);
  objc_release(v13);
}