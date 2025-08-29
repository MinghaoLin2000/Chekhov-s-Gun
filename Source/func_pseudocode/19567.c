-[Document initWithCoder:]
Document *__cdecl -[Document initWithCoder:](Document *self, SEL a2, id a3)
{
  id v4; // x19
  Document *v5; // x20
  NSData *v6; // x0
  NSData *mRTFDData; // x8
  float64x2_t v8; // q1
  NSDate *v9; // x0
  NSDate *mCreationDate; // x8
  NSDate *v11; // x0
  NSDate *mModificationDate; // x8
  float32x2_t v14; // [xsp+8h] [xbp-38h] BYREF
  float32x2_t v15; // [xsp+10h] [xbp-30h]
  char v16; // [xsp+1Fh] [xbp-21h] BYREF

  v4 = objc_retain(a3);
  v5 = -[Document init](self, "init");
  if ( v5 )
  {
    v16 = 0;
    if ( !objc_msgSend(v4, "versionForClassName:", CFSTR("Document")) )
      objc_msgSend(v4, "decodeValueOfObjCType:at:", "B", &v16);
    v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "decodeObject"));
    mRTFDData = v5->mRTFDData;
    v5->mRTFDData = v6;
    objc_release(mRTFDData);
    objc_msgSend(v4, "decodeValueOfObjCType:at:", "i", &v5->mWindowFlags);
    v14 = 0LL;
    v15 = 0LL;
    objc_msgSend(v4, "decodeValueOfObjCType:at:", "{?={?=ff}{?=ff}}", &v14);
    v8 = vcvtq_f64_f32(v15);
    v5->mWindowFrame.origin = (CGPoint)vcvtq_f64_f32(v14);
    v5->mWindowFrame.size = (CGSize)v8;
    objc_msgSend(v4, "decodeValueOfObjCType:at:", "i", &v5->mWindowColor);
    v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "decodeObject"));
    mCreationDate = v5->mCreationDate;
    v5->mCreationDate = v9;
    objc_release(mCreationDate);
    v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "decodeObject"));
    mModificationDate = v5->mModificationDate;
    v5->mModificationDate = v11;
    objc_release(mModificationDate);
  }
  objc_release(v4);
  return v5;
}