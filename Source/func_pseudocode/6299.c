-[PAMediaConversionServiceImageConversionJob requestedOrCalculatedMaximumLongSideLength]
signed __int64 __cdecl -[PAMediaConversionServiceImageConversionJob requestedOrCalculatedMaximumLongSideLength](
        PAMediaConversionServiceImageConversionJob *self,
        SEL a2)
{
  double v4; // d0
  double v5; // d8
  double v6; // d1
  double v7; // d9
  double v8; // d0
  double v9; // d1
  signed __int64 v10; // x8
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( -[PAMediaConversionServiceImageConversionJob requestedMaximumLongSideLength](
         self,
         "requestedMaximumLongSideLength") )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return -[PAMediaConversionServiceImageConversionJob requestedMaximumLongSideLength](
             self,
             "requestedMaximumLongSideLength");
  }
  else
  {
    -[PAMediaConversionServiceImageConversionJob sourceImageSize](self, "sourceImageSize");
    v5 = v4;
    v7 = v6;
    -[PAMediaConversionServiceImageConversionJob scaleFactor](self, "scaleFactor");
    if ( v5 >= v7 )
      v9 = v5;
    else
      v9 = v7;
    v10 = llround(v8 * v9);
    return v10 - ((v10 > 1) & (unsigned __int8)v10);
  }
}