-[job_spool_client_t figureOutputOrPrintColorMode:]
void __cdecl -[job_spool_client_t figureOutputOrPrintColorMode:](
        job_spool_client_t *self,
        SEL a2,
        OutputOrPrintColorMode *a3)
{
  id var0; // x0
  id var1; // x0
  PKPrinterDescription *v7; // x20
  unsigned int v8; // w21
  void ***v9; // x0
  __int64 (__fastcall *v10)(); // x16
  void ***v11; // x19
  void *v12; // x20
  PKPrinterDescription *v13; // x23
  void *v14; // x21
  unsigned int v15; // w0
  __int64 v16; // x22
  void *v17; // x23
  void **v18; // [xsp+0h] [xbp-80h] BYREF
  __int64 v19; // [xsp+8h] [xbp-78h]
  _QWORD v20[5]; // [xsp+28h] [xbp-58h] BYREF

  var0 = a3->var0;
  a3->var0 = 0LL;
  objc_release(var0);
  var1 = a3->var1;
  a3->var1 = 0LL;
  objc_release(var1);
  v7 = objc_retainAutoreleasedReturnValue(-[lite_printer_t printerDescription](self->_printer, "printerDescription"));
  v8 = (unsigned int)-[PKPrinterDescription supportsPrintColorMode](v7, "supportsPrintColorMode");
  objc_release(v7);
  if ( v8 )
  {
    v9 = (void ***)v20;
    v20[0] = _NSConcreteStackBlock;
    v20[1] = 3221225472LL;
    v10 = sub_100018CA8;
  }
  else
  {
    v9 = &v18;
    v18 = _NSConcreteStackBlock;
    v19 = 3221225472LL;
    v10 = sub_100018CB4;
  }
  v9[2] = (void **)v10;
  v9[3] = (void **)&unk_10009C230;
  v9[4] = &a3->var0;
  v11 = objc_retainBlock(v9);
  v12 = objc_retainAutoreleasedReturnValue(-[PKPrintSettings outputMode](self->_printSettings, "outputMode"));
  v13 = objc_retainAutoreleasedReturnValue(-[lite_printer_t printerDescription](self->_printer, "printerDescription"));
  v14 = objc_retainAutoreleasedReturnValue(-[PKPrinterDescription outputModes](v13, "outputModes"));
  objc_release(v13);
  if ( v14 && v12 )
  {
    v15 = -[job_spool_client_t PrintQuality](self, "PrintQuality");
    v16 = PKOutputModeGray;
    if ( v15 == 5 )
    {
      if ( (unsigned int)objc_msgSend(v12, "isEqualToString:", PKOutputModeGray) )
      {
        v17 = (void *)PKOutputModeProcessGray;
        if ( ((unsigned int)objc_msgSend(v14, "containsObject:", PKOutputModeProcessGray) & 1) != 0 )
          goto LABEL_16;
      }
    }
    if ( (unsigned int)objc_msgSend(v12, "isEqualToString:", v16, v18, v19) )
    {
      if ( ((unsigned int)objc_msgSend(v14, "containsObject:", v16) & 1) == 0 )
      {
        v17 = (void *)PKOutputModeAutoGray;
        if ( ((unsigned int)objc_msgSend(v14, "containsObject:", PKOutputModeAutoGray) & 1) != 0 )
          goto LABEL_16;
      }
    }
    if ( ((unsigned int)objc_msgSend(v12, "isEqualToString:", PKOutputModeColor) & 1) == 0 )
    {
      if ( (unsigned int)objc_msgSend(v14, "containsObject:", v12) )
        v17 = v12;
      else
        v17 = (void *)PKOutputModeAutoGray;
LABEL_16:
      ((void (__fastcall *)(void ***, void *))v11[2])(v11, v17);
    }
  }
  objc_release(v14);
  objc_release(v12);
  objc_release(v11);
}