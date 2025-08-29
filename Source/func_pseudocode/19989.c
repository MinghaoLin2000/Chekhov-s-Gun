__Z17lite_create_imageP8NSStringiiPPK14__CFDictionary
CGImageRef __fastcall lite_create_image(NSString *a1, int a2, int a3, const __CFDictionary **a4)
{
  NSString *v6; // x0
  NSString *v7; // x20
  const char *v8; // x22
  size_t v9; // x0
  const __CFURL *v10; // x0
  const __CFURL *v11; // x22
  CGImageSource *v12; // x0
  CGImageSource *v13; // x23
  CFNumberRef v14; // x25
  const __CFDictionary *v15; // x26
  CGImageRef ThumbnailAtIndex; // x24
  int valuePtr; // [xsp+4h] [xbp-6Ch] BYREF
  void *values[2]; // [xsp+8h] [xbp-68h] BYREF
  void *keys[2]; // [xsp+18h] [xbp-58h] BYREF

  v6 = objc_retain(a1);
  v7 = v6;
  if ( a4 )
    *a4 = 0LL;
  if ( v6 )
  {
    v8 = -[NSString UTF8String](objc_retainAutorelease(v6), "UTF8String");
    v9 = strlen(v8);
    v10 = CFURLCreateFromFileSystemRepresentation(kCFAllocatorDefault, (const UInt8 *)v8, v9, 0);
    v11 = v10;
    if ( v10 )
    {
      v12 = CGImageSourceCreateWithURL(v10, 0LL);
      v13 = v12;
      if ( !v12 )
      {
        ThumbnailAtIndex = 0LL;
LABEL_15:
        CFRelease(v11);
        goto LABEL_16;
      }
      if ( a2 )
      {
        valuePtr = 108;
        v14 = CFNumberCreate(0LL, kCFNumberIntType, &valuePtr);
        keys[0] = (void *)kCGImageSourceCreateThumbnailFromImageIfAbsent;
        keys[1] = (void *)kCGImageSourceThumbnailMaxPixelSize;
        values[0] = kCFBooleanTrue;
        values[1] = v14;
        v15 = CFDictionaryCreate(
                0LL,
                (const void **)keys,
                (const void **)values,
                2LL,
                &kCFTypeDictionaryKeyCallBacks,
                &kCFTypeDictionaryValueCallBacks);
        ThumbnailAtIndex = CGImageSourceCreateThumbnailAtIndex(v13, 0LL, v15);
        CFRelease(v14);
        CFRelease(v15);
        if ( !a4 )
          goto LABEL_14;
      }
      else
      {
        ThumbnailAtIndex = CGImageSourceCreateImageAtIndex(v12, 0LL, 0LL);
        if ( !a4 )
        {
LABEL_14:
          CFRelease(v13);
          goto LABEL_15;
        }
      }
      if ( ThumbnailAtIndex )
        *a4 = CGImageSourceCopyPropertiesAtIndex(v13, 0LL, 0LL);
      goto LABEL_14;
    }
  }
  ThumbnailAtIndex = 0LL;
LABEL_16:
  objc_release(v7);
  return ThumbnailAtIndex;
}