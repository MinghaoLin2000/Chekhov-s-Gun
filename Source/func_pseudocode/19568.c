-[Document encodeWithCoder:]
void __cdecl -[Document encodeWithCoder:](Document *self, SEL a2, id a3)
{
  id v4; // x19
  id v5; // x21
  id v6; // x20
  float32x4_t v7; // [xsp+0h] [xbp-30h] BYREF

  v4 = objc_retain(a3);
  objc_msgSend((id)objc_opt_class(self), "setVersion:", 1LL);
  objc_msgSend(v4, "encodeObject:", self->mRTFDData);
  objc_msgSend(v4, "encodeValueOfObjCType:at:", "i", &self->mWindowFlags);
  v7 = vcvt_hight_f32_f64(
         (int32x2_t)vcvt_f32_f64((float64x2_t)self->mWindowFrame.origin),
         (float64x2_t)self->mWindowFrame.size);
  objc_msgSend(v4, "encodeValueOfObjCType:at:", "{?={?=ff}{?=ff}}", &v7);
  objc_msgSend(v4, "encodeValueOfObjCType:at:", "i", &self->mWindowColor);
  v5 = objc_retainAutoreleasedReturnValue(-[Document creationDate](self, "creationDate"));
  objc_msgSend(v4, "encodeObject:", v5);
  objc_release(v5);
  v6 = objc_retainAutoreleasedReturnValue(-[Document modificationDate](self, "modificationDate"));
  objc_msgSend(v4, "encodeObject:", v6);
  objc_release(v4);
  objc_release(v6);
}