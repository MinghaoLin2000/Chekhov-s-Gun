-[TSUZipInflateReadChannel readWithHandler:]
void __cdecl -[TSUZipInflateReadChannel readWithHandler:](TSUZipInflateReadChannel *self, SEL a2, id a3)
{
  id v4; // x20
  TSUStreamReadChannel *readChannel; // x21
  id v6; // x19
  _QWORD v7[5]; // [xsp+0h] [xbp-110h] BYREF
  id v8; // [xsp+28h] [xbp-E8h]
  _QWORD *v9; // [xsp+30h] [xbp-E0h]
  _QWORD *v10; // [xsp+38h] [xbp-D8h]
  _QWORD *v11; // [xsp+40h] [xbp-D0h]
  _QWORD *v12; // [xsp+48h] [xbp-C8h]
  _QWORD v13[3]; // [xsp+50h] [xbp-C0h] BYREF
  uint32_t v14; // [xsp+68h] [xbp-A8h]
  _QWORD v15[3]; // [xsp+70h] [xbp-A0h] BYREF
  int v16; // [xsp+88h] [xbp-88h]
  _QWORD v17[3]; // [xsp+90h] [xbp-80h] BYREF
  char v18; // [xsp+A8h] [xbp-68h]
  _QWORD v19[3]; // [xsp+B0h] [xbp-60h] BYREF
  char v20; // [xsp+C8h] [xbp-48h]

  v4 = objc_retain(a3);
  v19[0] = 0LL;
  v19[1] = v19;
  v19[2] = 0x2020000000LL;
  v20 = 1;
  v17[0] = 0LL;
  v17[1] = v17;
  v17[2] = 0x2020000000LL;
  v18 = 1;
  v15[0] = 0LL;
  v15[1] = v15;
  v15[2] = 0x2020000000LL;
  v16 = 0;
  v13[0] = 0LL;
  v13[1] = v13;
  v13[2] = 0x2020000000LL;
  v14 = 0;
  v14 = crc32(0, 0LL, 0LL);
  readChannel = self->_readChannel;
  v7[0] = _NSConcreteStackBlock;
  v7[1] = 3254779904LL;
  v7[2] = sub_100148C38;
  v7[3] = &unk_1001DE3F8;
  v9 = v19;
  v7[4] = self;
  v6 = objc_retain(v4);
  v8 = v6;
  v10 = v15;
  v11 = v17;
  v12 = v13;
  -[TSUStreamReadChannel readWithHandler:](readChannel, "readWithHandler:", v7);
  objc_release(v8);
  _Block_object_dispose(v13, 8);
  _Block_object_dispose(v15, 8);
  _Block_object_dispose(v17, 8);
  _Block_object_dispose(v19, 8);
  objc_release(v6);
}