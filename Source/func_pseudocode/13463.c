-[TSUStreamDataCompression initWithAlgorithm:operation:]
// local variable allocation has failed, the output may be wrong!
TSUStreamDataCompression *__cdecl -[TSUStreamDataCompression initWithAlgorithm:operation:](
        TSUStreamDataCompression *self,
        SEL a2,
        int a3,
        int a4)
{
  TSUStreamDataCompression *v4; // x0
  TSUStreamDataCompression *v5; // x19
  objc_super v7; // [xsp+0h] [xbp-30h] BYREF
  objc_super v8; // [xsp+10h] [xbp-20h] BYREF

  v8.receiver = self;
  v8.super_class = (Class)&OBJC_CLASS___TSUStreamDataCompression;
  v4 = -[TSUStreamCompression initWithAlgorithm:operation:](
         &v8,
         "initWithAlgorithm:operation:",
         *(_QWORD *)&a3,
         *(_QWORD *)&a4);
  v5 = v4;
  if ( v4 )
  {
    objc_storeStrong((id *)&v4->_outputData, &_dispatch_data_empty);
    v7.receiver = v5;
    v7.super_class = (Class)&OBJC_CLASS___TSUStreamDataCompression;
    -[TSUStreamCompression setHandler:](&v7, "setHandler:", &stru_1001DF218);
  }
  return v5;
}