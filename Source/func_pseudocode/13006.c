-[TSUCompressionReadChannel readWithHandler:]
void __cdecl -[TSUCompressionReadChannel readWithHandler:](TSUCompressionReadChannel *self, SEL a2, id a3)
{
  id v4; // x21
  TSUStreamCompression *v5; // x0
  TSUStreamReadChannel *readChannel; // x22
  TSUStreamCompression *v7; // x20
  id v8; // x19
  _QWORD v9[4]; // [xsp+8h] [xbp-78h] BYREF
  id v10; // [xsp+28h] [xbp-58h]
  id v11; // [xsp+30h] [xbp-50h]
  _QWORD *v12; // [xsp+38h] [xbp-48h]
  _QWORD v13[3]; // [xsp+40h] [xbp-40h] BYREF
  char v14; // [xsp+58h] [xbp-28h]

  v4 = objc_retain(a3);
  v13[0] = 0LL;
  v13[1] = v13;
  v13[2] = 0x2020000000LL;
  v14 = 1;
  v5 = objc_retain(self->_compressor);
  readChannel = self->_readChannel;
  v9[0] = _NSConcreteStackBlock;
  v9[1] = 3254779904LL;
  v9[2] = sub_100141984;
  v9[3] = &unk_1001DDE48;
  v12 = v13;
  v7 = objc_retain(v5);
  v10 = v7;
  v8 = objc_retain(v4);
  v11 = v8;
  -[TSUStreamReadChannel readWithHandler:](readChannel, "readWithHandler:", v9);
  objc_release(v11);
  objc_release(v10);
  objc_release(v7);
  _Block_object_dispose(v13, 8);
  objc_release(v8);
}