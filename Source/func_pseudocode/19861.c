-[job_spool_client_t MediaCol]
PKMediaCol *__cdecl -[job_spool_client_t MediaCol](job_spool_client_t *self, SEL a2)
{
  void *v3; // x19
  PKPrinterDescription *v4; // x22
  void *v5; // x20
  void *v6; // x2
  void *v7; // x22
  void *v8; // x0
  void *v9; // x23
  void *v10; // x0
  void *v11; // x21
  void *v12; // x24
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[PKPrintSettings paper](self->_printSettings, "paper"));
  if ( v3 )
  {
    v4 = objc_retainAutoreleasedReturnValue(-[lite_printer_t printerDescription](self->_printer, "printerDescription"));
    v5 = objc_retainAutoreleasedReturnValue(-[PKPrinterDescription mediaColSupportedArray](v4, "mediaColSupportedArray"));
    objc_release(v4);
    if ( (unsigned int)objc_msgSend(v5, "containsObject:", CFSTR("media-bottom-margin"))
      && (unsigned int)objc_msgSend(v5, "containsObject:", CFSTR("media-top-margin"))
      && (unsigned int)objc_msgSend(v5, "containsObject:", CFSTR("media-left-margin")) )
    {
      v6 = objc_msgSend(v5, "containsObject:", CFSTR("media-right-margin"));
    }
    else
    {
      v6 = 0LL;
    }
    v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "createMediaColAndDoMargins:", v6));
    if ( v7 )
    {
      v8 = objc_retainAutoreleasedReturnValue(-[PKPrintSettings inputSlot](self->_printSettings, "inputSlot"));
      v9 = v8;
      if ( v8 && ((unsigned int)objc_msgSend(v8, "isEqualToString:", CFSTR("auto")) & 1) == 0 )
        objc_msgSend(v7, "setMediaSource:", v9);
      v10 = objc_retainAutoreleasedReturnValue(-[PKPrintSettings mediaType](self->_printSettings, "mediaType"));
      v11 = v10;
      if ( v10 && ((unsigned int)objc_msgSend(v10, "isEqualToString:", CFSTR("auto")) & 1) == 0 )
        objc_msgSend(v7, "setMediaType:", v11);
      v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "makeMediaCol"));
      objc_release(v11);
      objc_release(v9);
    }
    else
    {
      v12 = 0LL;
    }
    objc_release(v7);
    objc_release(v5);
  }
  else
  {
    v12 = 0LL;
  }
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (PKMediaCol *)objc_autoreleaseReturnValue(v12);
}