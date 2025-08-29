-[VideoConversionTask loadAsset]
void __cdecl -[VideoConversionTask loadAsset](VideoConversionTask *self, SEL a2)
{
  NSError *v3; // x20
  NSDictionary *v4; // x20
  NSURL *v5; // x22
  AVURLAsset *v6; // x21
  AVAsset *v7; // x21
  NSError *v8; // x21
  NSString *v9; // [xsp+8h] [xbp-38h] BYREF
  void *v10; // [xsp+10h] [xbp-30h] BYREF

  v3 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask error](self, "error"));
  objc_release(v3);
  if ( !v3 )
  {
    v9 = AVURLAssetPreferPreciseDurationAndTimingKey;
    v10 = &__kCFBooleanTrue;
    v4 = objc_retainAutoreleasedReturnValue(
           +[NSDictionary dictionaryWithObjects:forKeys:count:](
             &OBJC_CLASS___NSDictionary,
             "dictionaryWithObjects:forKeys:count:",
             &v10,
             &v9,
             1LL));
    v5 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask sourceMainResourceURL](self, "sourceMainResourceURL"));
    v6 = objc_retainAutoreleasedReturnValue(+[AVURLAsset URLAssetWithURL:options:](&OBJC_CLASS___AVURLAsset, "URLAssetWithURL:options:", v5, v4));
    -[VideoConversionTask setAsset:](self, "setAsset:", v6);
    objc_release(v6);
    objc_release(v5);
    v7 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask asset](self, "asset"));
    objc_release(v7);
    if ( !v7 )
    {
      v8 = objc_retainAutoreleasedReturnValue(
             +[NSError errorWithDomain:code:userInfo:](
               &OBJC_CLASS___NSError,
               "errorWithDomain:code:userInfo:",
               CFSTR("PAMediaConversionServiceErrorDomain"),
               3LL,
               0LL));
      -[VideoConversionTask setError:](self, "setError:", v8);
      objc_release(v8);
    }
    objc_release(v4);
  }
}