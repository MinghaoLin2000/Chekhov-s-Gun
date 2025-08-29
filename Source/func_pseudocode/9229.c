-[TSPCryptoComponentWriteChannel _writeData:isDecryptedData:]
void __cdecl -[TSPCryptoComponentWriteChannel _writeData:isDecryptedData:](
        TSPCryptoComponentWriteChannel *self,
        SEL a2,
        id a3,
        bool a4)
{
  _QWORD v4[5]; // [xsp+0h] [xbp-30h] BYREF
  bool v5; // [xsp+28h] [xbp-8h]

  v4[0] = _NSConcreteStackBlock;
  v4[1] = 3254779904LL;
  v4[2] = sub_100019BB8;
  v4[3] = &unk_1001D2130;
  v4[4] = self;
  v5 = a4;
  dispatch_data_apply((dispatch_data_t)a3, v4);
}