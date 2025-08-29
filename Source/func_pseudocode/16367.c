-[EAFirmwareUpdater personalizationResponse:error:]
void __cdecl -[EAFirmwareUpdater personalizationResponse:error:](EAFirmwareUpdater *self, SEL a2, id a3, id a4)
{
  unsigned int v6; // w22
  __int64 v7; // x21
  dispatch_queue_s *eaNotificationDispatchQueue; // x0
  void *v9; // x22
  unsigned int v10; // w22
  __int64 v11; // x23
  FirmwareBundle *v12; // x20
  const __CFString *v13; // x3
  _QWORD block[7]; // [xsp+8h] [xbp-68h] BYREF

  if ( !a3 || a4 )
  {
    eaNotificationDispatchQueue = (dispatch_queue_s *)self->_eaNotificationDispatchQueue;
    block[0] = _NSConcreteStackBlock;
    block[1] = 3254779904LL;
    block[2] = sub_10000B0FC;
    block[3] = &unk_1000315F0;
    block[4] = self;
    block[5] = a4;
    block[6] = a3;
    dispatch_async(eaNotificationDispatchQueue, block);
    goto LABEL_7;
  }
  v6 = (unsigned int)objc_msgSend(
                       -[NSDictionary objectForKey:](
                         self->_deviceOptions,
                         "objectForKey:",
                         CFSTR("PersonalizationResponseFormat")),
                       "unsignedIntValue");
  if ( -[iAUPServer firmwareBundle](self->_iAUPServer, "firmwareBundle") )
  {
    v7 = -[FirmwareBundle productIDCode](
           -[iAUPServer firmwareBundle](self->_iAUPServer, "firmwareBundle"),
           "productIDCode");
    if ( v6 )
      goto LABEL_13;
  }
  else
  {
    v7 = 0LL;
    if ( v6 )
      goto LABEL_13;
  }
  if ( self->_buildIdentities )
  {
    v10 = (unsigned int)objc_msgSend(
                          -[NSDictionary objectForKey:](
                            self->_manifestIDs,
                            "objectForKey:",
                            -[NSArray objectAtIndexedSubscript:](
                              self->_manifestList,
                              "objectAtIndexedSubscript:",
                              self->_manifestIndex - 1)),
                          "intValue");
    if ( -[iAUPServer firmwareBundle](self->_iAUPServer, "firmwareBundle") )
    {
      v11 = v10 << 24;
      v9 = objc_msgSend(
             objc_alloc((Class)&OBJC_CLASS___NSMutableData),
             "initWithData:",
             -[FirmwareBundle firmwareImage](
               -[iAUPServer firmwareBundle](self->_iAUPServer, "firmwareBundle"),
               "firmwareImage"));
      if ( !-[EAFirmwareUpdater stitchManifestInSuperBinary:withManifest:withId:](
              self,
              "stitchManifestInSuperBinary:withManifest:withId:",
              v9,
              a3,
              v11) )
      {
        v13 = CFSTR("Failed to stitched signed manifest into SuperBinary");
        goto LABEL_18;
      }
      v12 = -[FirmwareBundle initWithData:hashData:signatureData:certData:](
              objc_alloc(&OBJC_CLASS___FirmwareBundle),
              "initWithData:hashData:signatureData:certData:",
              v9,
              0LL,
              0LL,
              0LL);
      goto LABEL_14;
    }
    -[EAFirmwareUpdater handleSessionError:message:](
      self,
      "handleSessionError:message:",
      15LL,
      CFSTR("No FW bundle to stitch manifest"));
LABEL_7:
    v9 = 0LL;
    goto LABEL_19;
  }
LABEL_13:
  v12 = -[FirmwareBundle initWithData:hashData:signatureData:certData:](
          objc_alloc(&OBJC_CLASS___FirmwareBundle),
          "initWithData:hashData:signatureData:certData:",
          a3,
          0LL,
          0LL,
          0LL);
  v9 = 0LL;
LABEL_14:
  -[iAUPServer setFirmwareBundle:](self->_iAUPServer, "setFirmwareBundle:", v12);
  objc_release(v12);
  if ( (_DWORD)v7 )
    -[FirmwareBundle setProductIDCode:](
      -[iAUPServer firmwareBundle](self->_iAUPServer, "firmwareBundle"),
      "setProductIDCode:",
      v7);
  if ( !-[iAUPServer personalizationComplete](self->_iAUPServer, "personalizationComplete") )
  {
    v13 = CFSTR("Error during personalization response");
LABEL_18:
    -[EAFirmwareUpdater handleSessionError:message:](self, "handleSessionError:message:", 15LL, v13);
  }
LABEL_19:
  objc_release(v9);
}