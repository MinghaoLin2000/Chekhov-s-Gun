-[TSUZipReadChannel readWithHandler:]
void __cdecl -[TSUZipReadChannel readWithHandler:](TSUZipReadChannel *self, SEL a2, id a3)
{
  id v4; // x19
  unsigned __int64 v5; // x21
  unsigned __int64 v6; // x0
  unsigned int v7; // w22
  unsigned int v8; // w23
  dispatch_data_s *v9; // x0
  TSUReadChannel *archiveReadChannel; // x24
  unsigned __int64 v11; // x25
  _QWORD v12[5]; // [xsp+8h] [xbp-128h] BYREF
  id v13; // [xsp+30h] [xbp-100h]
  _QWORD *v14; // [xsp+38h] [xbp-F8h]
  _QWORD *v15; // [xsp+40h] [xbp-F0h]
  _QWORD *v16; // [xsp+48h] [xbp-E8h]
  _QWORD *v17; // [xsp+50h] [xbp-E0h]
  unsigned __int64 v18; // [xsp+58h] [xbp-D8h]
  _QWORD v19[3]; // [xsp+60h] [xbp-D0h] BYREF
  uint32_t v20; // [xsp+78h] [xbp-B8h]
  _QWORD v21[3]; // [xsp+80h] [xbp-B0h] BYREF
  char v22; // [xsp+98h] [xbp-98h]
  _QWORD v23[3]; // [xsp+A0h] [xbp-90h] BYREF
  char v24; // [xsp+B8h] [xbp-78h]
  _QWORD v25[5]; // [xsp+C0h] [xbp-70h] BYREF
  dispatch_data_s *v26; // [xsp+E8h] [xbp-48h]

  v4 = objc_retain(a3);
  v5 = -[TSUZipEntry compressedSize](self->_entry, "compressedSize");
  v6 = -[TSUZipEntry fileHeaderLength](self->_entry, "fileHeaderLength");
  if ( v6 )
  {
    -[TSUZipReadChannel readWithFileHeaderLength:handler:](self, "readWithFileHeaderLength:handler:", v6, v4);
  }
  else
  {
    v7 = -[TSUZipEntry nameLength](self->_entry, "nameLength");
    v8 = -[TSUZipEntry extraFieldsLength](self->_entry, "extraFieldsLength");
    v25[0] = 0LL;
    v25[1] = v25;
    v25[2] = 0x3032000000LL;
    v25[3] = sub_100142124;
    v25[4] = sub_100142134;
    v9 = objc_retain(&_dispatch_data_empty);
    v26 = &_dispatch_data_empty;
    v23[0] = 0LL;
    v23[1] = v23;
    v23[2] = 0x2020000000LL;
    v24 = 0;
    v21[0] = 0LL;
    v21[1] = v21;
    v21[2] = 0x2020000000LL;
    v22 = 1;
    v19[0] = 0LL;
    v19[1] = v19;
    v19[2] = 0x2020000000LL;
    v20 = 0;
    v20 = crc32(0, 0LL, 0LL);
    archiveReadChannel = self->_archiveReadChannel;
    v11 = -[TSUZipEntry offset](self->_entry, "offset");
    v12[0] = _NSConcreteStackBlock;
    v12[1] = 3254779904LL;
    v12[2] = sub_10014213C;
    v12[3] = &unk_1001DDEB8;
    v14 = v21;
    v12[4] = self;
    v13 = objc_retain(v4);
    v15 = v25;
    v16 = v23;
    v17 = v19;
    v18 = v7 + (unsigned __int64)v8 + 30;
    -[TSUReadChannel readFromOffset:length:handler:](
      archiveReadChannel,
      "readFromOffset:length:handler:",
      v11,
      v18 + v5,
      v12);
    objc_release(v13);
    _Block_object_dispose(v19, 8);
    _Block_object_dispose(v21, 8);
    _Block_object_dispose(v23, 8);
    _Block_object_dispose(v25, 8);
    objc_release(v26);
  }
  objc_release(v4);
}