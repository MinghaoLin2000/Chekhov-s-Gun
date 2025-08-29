-[job_spool_client_t RasterFeedOrientation]
int __cdecl -[job_spool_client_t RasterFeedOrientation](job_spool_client_t *self, SEL a2)
{
  void *v3; // x19
  PKPrinterDescription *v4; // x22
  void *v5; // x20
  void *v6; // x22
  void *v7; // x21
  void *v8; // x23
  void *v9; // x22
  void *v10; // x23
  int v11; // w21

  v3 = objc_retainAutoreleasedReturnValue(-[PKPrintSettings paper](self->_printSettings, "paper"));
  if ( v3 )
  {
    v4 = objc_retainAutoreleasedReturnValue(-[lite_printer_t printerDescription](self->_printer, "printerDescription"));
    v5 = objc_retainAutoreleasedReturnValue(-[PKPrinterDescription specialFeedOrientation](v4, "specialFeedOrientation"));
    objc_release(v4);
    if ( v5
      && (v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "baseName"))) != 0LL
      && (v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "baseName")),
          v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "objectForKey:", v7)),
          objc_release(v8),
          objc_release(v7),
          objc_release(v6),
          v8) )
    {
      v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "baseName"));
      v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "objectForKey:", v9));
      v11 = (unsigned int)objc_msgSend(v10, "intValue");
      objc_release(v10);
      objc_release(v9);
    }
    else
    {
      v11 = 3;
    }
    objc_release(v5);
  }
  else
  {
    v11 = 3;
  }
  objc_release(v3);
  return v11;
}