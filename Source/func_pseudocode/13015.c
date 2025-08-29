-[TSUZipReadChannel readWithFileHeaderLength:handler:]
void __cdecl -[TSUZipReadChannel readWithFileHeaderLength:handler:](
        TSUZipReadChannel *self,
        SEL a2,
        unsigned __int64 a3,
        id a4)
{
  id v6; // x20
  TSUReadChannel *archiveReadChannel; // x22
  unsigned __int64 v8; // x24
  unsigned __int64 v9; // x23
  id v10; // x19
  _QWORD v11[5]; // [xsp+0h] [xbp-B0h] BYREF
  id v12; // [xsp+28h] [xbp-88h]
  _QWORD *v13; // [xsp+30h] [xbp-80h]
  _QWORD *v14; // [xsp+38h] [xbp-78h]
  _QWORD v15[3]; // [xsp+40h] [xbp-70h] BYREF
  uint32_t v16; // [xsp+58h] [xbp-58h]
  _QWORD v17[3]; // [xsp+60h] [xbp-50h] BYREF
  char v18; // [xsp+78h] [xbp-38h]

  v6 = objc_retain(a4);
  v17[0] = 0LL;
  v17[1] = v17;
  v17[2] = 0x2020000000LL;
  v18 = 1;
  v15[0] = 0LL;
  v15[1] = v15;
  v15[2] = 0x2020000000LL;
  v16 = 0;
  v16 = crc32(0, 0LL, 0LL);
  archiveReadChannel = self->_archiveReadChannel;
  v8 = -[TSUZipEntry offset](self->_entry, "offset");
  v9 = -[TSUZipEntry compressedSize](self->_entry, "compressedSize");
  v11[0] = _NSConcreteStackBlock;
  v11[1] = 3254779904LL;
  v11[2] = sub_10014310C;
  v11[3] = &unk_1001DDF98;
  v13 = v17;
  v11[4] = self;
  v10 = objc_retain(v6);
  v12 = v10;
  v14 = v15;
  -[TSUReadChannel readFromOffset:length:handler:](
    archiveReadChannel,
    "readFromOffset:length:handler:",
    v8 + a3,
    v9,
    v11);
  objc_release(v12);
  _Block_object_dispose(v15, 8);
  _Block_object_dispose(v17, 8);
  objc_release(v10);
}